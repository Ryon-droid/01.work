#include <iostream>
#include <vector> 
#include <cmath>  // ���� pow ����
using namespace std;

// �ж�һ�����Ƿ���ˮ�ɻ���
bool isPrime(int num) {
    int original = num;
    int sum=0;
    
    // ��ȡÿλ���֣�����������
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
        
    }
    
    // ��������͵���ԭ���֣�����ˮ�ɻ���
    return sum == original;
}

int main() {
    for (int i = 100; i <= 999; ++i) {
        if (isPrime(i)) {
            cout << i << endl;  // ���ˮ�ɻ���
        }
    }
    
    return 0;
}
