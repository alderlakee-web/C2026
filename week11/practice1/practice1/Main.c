#include<stdio.h>
int main(void) {
	char str[100];
	printf("영문 문장을 입력하시오 : ");
	if (fgets(str, sizeof(str), stdin) == NULL) {
		return 1;
	}

	int string_length = 0;
	str[strcspn(str, "\n")] = '\0';
	for (char* p = str; *p != '\0'; p++) {
		if ('a' <= *p &&*p<= 'z') {
			*p -= 32;
		}
		string_length++;
	}
	printf("대문자 : %s\n", str);

	for (char* p = str; *p != '\0'; p++) {
		if (*p <= ' ') {
			string_length--;
		}
	}

	printf("글자 수 (공백 제외) : %d\n", string_length);
}