#include <iostream>
#include <vector>
#include <algorithm>  // ���� std::sort
using namespace std;

int main() {
    int N;
    cin >> N;  // �������� N
    vector<int> numbers(N);  // ���ڴ洢����� N ����
    // ���� N ����
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    // ����
    sort(numbers.begin(), numbers.end());

    // ����Ҫ�������������
    for (int i = 0; i < N; ++i) {
        cout << numbers[i];
        if (i >= 0) cout << " ";
    }
    cout << endl;  // ����

    return 0;
}
