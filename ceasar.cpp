#include <iostream>
using namespace std;

void ceasar(char cipher[], char shift);

int main() {
	char text[] = "wp nsTQqcP op GTRPYPCP PDE FY DJDEPXP OP NSTQQCPXPYE azwjlwASLMPETBFP";
	char shift = -128;

	cout << text << endl;
	ceasar(text, shift);
	cout << text << endl;

	return 0;
}

void ceasar(char cipher[], char shift) {
	for (int i = 0; cipher[i] != '\0'; i++) {
		if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			cipher[i] = (97 + (cipher[i] + shift - 97) % 26);
			if(cipher[i] < 'a')
				cipher[i] = cipher[i] + 'z' - 'a' + 1;
		}
		else if (cipher[i] >= 'A' && cipher[i] <= 'Z') {
			cipher[i] = (65 + (cipher[i] + shift - 65) % 26);
			if (cipher[i] < 'A')
				cipher[i] = cipher[i] + 'Z' - 'A' + 1;
		}
	}
}