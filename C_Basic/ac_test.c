#include <stdio.h>
#include <ctype.h>

int is_match(char a, char b) {
    return tolower(a) == tolower(b) && isupper(a) != isupper(b);
}

void rotate(char* piece) {
    char temp = piece[3];
    piece[3] = piece[2];
    piece[2] = piece[1];
    piece[1] = piece[0];
    piece[0] = temp;
}

int check(char pieces[4][5]) {
    return is_match(pieces[0][1], pieces[1][3]) &&  // 左上和右上块的右边与左边
           is_match(pieces[0][2], pieces[2][0]) &&  // 左上和左下块的下边与上边
           is_match(pieces[1][2], pieces[3][0]) &&  // 右上和右下块的下边与上边
           is_match(pieces[2][1], pieces[3][3]);    // 左下和右下块的右边与左边
}

int solve(char pieces[4][5], int used[4], char selected[4][5], int index) {
    if (index == 4) {
        // 尝试每种旋转组合
        for (int r0 = 0; r0 < 4; r0++) {
            for (int r1 = 0; r1 < 4; r1++) {
                for (int r2 = 0; r2 < 4; r2++) {
                    for (int r3 = 0; r3 < 4; r3++) {
                        if (check(selected)) {
                            return 1;
                        }
                        rotate(selected[3]);
                    }
                    rotate(selected[2]);
                }
                rotate(selected[1]);
            }
            rotate(selected[0]);
        }
        return 0;
    }

    for (int i = 0; i < 4; i++) {
        if (!used[i]) {
            used[i] = 1;
            for (int j = 0; j < 4; j++) selected[index][j] = pieces[i][j];
            if (solve(pieces, used, selected, index + 1)) return 1;
            used[i] = 0;
        }
    }

    return 0;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char pieces[4][5];
        for (int i = 0; i < 4; i++) {
            scanf("%s", pieces[i]);
        }

        int used[4] = {0};
        char selected[4][5];
        printf("%s\n", solve(pieces, used, selected, 0) ? "Yes" : "No");
    }

    return 0;
}