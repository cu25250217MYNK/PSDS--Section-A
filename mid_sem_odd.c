#include <stdio.h>

int main() {
int T;
scanf("%d", &T);

while (T--) {
    char S[10001];
    int freq[26] = {0};
    int ans = 0;

    scanf("%s", S);

    for (int i = 0; S[i] != '\0'; i++) {
        freq[S[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        ans = ans + freq[i] / 2;
    }

    printf("%d\n", ans);
}

return 0;


}
