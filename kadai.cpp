#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */

bool is_prime(int num)
for (int i = 2; i < num; i++) {
    if (num % i == 0) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int nth_prime(int a, int b, int n) {

    int count = 0;
    int e = a;
    while (e < 100000) {
        if (e == 1) {
            exit(-1);
        }

        if (is_prime(e)) {
            count++;
        }
        if (count == n) {
            break;
            cout << 0;
        }
        e += b;
    }
    return e;
}

int main()
{
    cout << nth_prime(259, 170, 40) << endl;

    return 0;
}
