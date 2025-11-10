#include <iostream>
using namespace std;

int f_class(int a, int b) {
    int c = a;

    if (a >= 1000) {
        int left = a / 100;
        int right = b % 100;

        int t1;
        if (left >= 10) {
            t1 = (left / 10) * (left % 10);
        } else {
            t1 = left;
        }

        int t2;
        if (right >= 10) {
            t2 = (right / 10) * (right % 10);
        } else {
            t2 = right;
        }

        if (t2 >= 10) {
            c = t1 * 100 + t2;
        } else {
            c = t1 * 10 + t2;
        }

        return f_class(c, c);
    }
    else if (a >= 100) {
        int mid = (a % 100) / 10;
        int X = (a / 100) * mid;
        int Y = mid * (b % 10);

        if (Y >= 10) {
            c = X * 100 + Y;
        } else {
            c = X * 10 + Y;
        }

        return f_class(c, c);
    }
    else if (a >= 10) {
        c = (a / 10) * (a % 10);
        return f_class(c, c);
    }
    else {
        return c;
    }
}

int main() {
    int N;
    cin >> N;
    cout << f_class(N, N);
    return 0;
}