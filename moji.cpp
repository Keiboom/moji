#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char moji[64] = { 0 };
	FILE* fp = fopen("data.txt", "r");
	for (int i = 0; i < 64; i++) {
		(void)fscanf(fp, "%c", &moji[i]);
		if (moji[i] == '1')printf("–");
		if (moji[i] == '0')printf("@");
		if (moji[i] == '\n')printf("\n");
	}
	fclose(fp);
	return 0;
}