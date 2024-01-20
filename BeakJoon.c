#include <stdio.h>
#include <string.h>

int main() {

	int time[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };

	char s[16];
	int ans = 0;

	scanf("%s", s);

	for (int i = 0; i < strlen(s); i++) {
		ans += time[s[i] - 'A'];
	}
	
	printf("%d", ans);

	return 0;
}