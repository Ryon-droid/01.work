#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// �ж��Ƿ��������ĺ���
bool isprime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// ��֤��°ͺղ��벢������
void goldbach(int N) {
    for (int i = 4; i <= N; i += 2) {
        bool found = false;
        for (int j = 2; j <= i / 2; ++j) {
            if (isprime(j) && isprime(i - j)) {
                cout << i << "=" << j << "+" << i - j << endl;
                found = true;
                break;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;  // ������ż�� N
    goldbach(N);  // ��֤��������
    return 0;
}
