#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

int main(int argc, char *argv[]) {
	FILE *fp;
	char buffer[MAX_LENGTH];
	int lineCnt = 0;
	
	if ((fp = fopen("a.txt", "rb")) != NULL) {
		while(fgets(buffer, MAX_LENGTH, fp) != NULL) {
			lineCnt++;
			// 2��° ���ο���
			if (lineCnt == 2) {
				// option: ���� ���
				printf("%s\n", strtok(buffer, "option: "));
				// while Ż��
				break;
			}
		}
	}
	
	// ���� �ݱ�
	fclose(fp);

	return 0;
}