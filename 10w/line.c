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
			// 2번째 라인에서
			if (lineCnt == 2) {
				// option: 이후 출력
				printf("%s\n", strtok(buffer, "option: "));
				// while 탈출
				break;
			}
		}
	}
	
	// 파일 닫기
	fclose(fp);

	return 0;
}