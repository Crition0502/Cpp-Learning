#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main() {
    int W = 20, S = W * W, * m, z[2] = { 0 }, l = 3, i, c = 'D', C, * p, f;
    for (srand(m = calloc(S, 4)), C = m[1] = -1; C - 27; _sleep(100)) {
        if (_kbhit())C = _getch() & 95, C - 65 && C - 68 &&
            C - 83 && C - 87 || (C ^ c) & 20 ^ 4 && (c = C);
        p = z + !!(c & 2), * p += c / 3 & 2, * p = (-- * p + W) % W;
        f = !system("cls"), * (p = m + *z + z[1] * W) > 0 && (C = 27);
        for (; *p && (m[i = rand() % S] || (--m[i], ++l, --f)););
        for (i = 0, *p = l; i < S; ++i % W || _cputs("|\n"))
            _cputs(m[i] > 0 ? m[i] -= f, "()" : m[i] ? "00" : "  ");
    }
}