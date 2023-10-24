#include <iostream>
#include <vector>
using namespace std;
#include <Windows.h>


// ������� ��� ���������� ������� ������� �������� ���� m �� ��������� ����� x, y, z
int countWays(int m, int x, int y, int z,vector<int>& memo) {
    if (m < 0) {
        return 0;  // ��������� �������� ��'��� � ��'����� �������
    }

    if (m == 0) {
        return 1;  // ���� ���� ���� ����� �������� ��'��� �������� ������� - ����� �� ������
    }

    if (memo[m] != -1) {
        return memo[m];  // ��������� ��������� � ���'��, ���� �� ��� ��� ����������
    }

    // ������������� ���������� ������������ ��� ����� Գ�������
    int ways = countWays(m - x, x, y, z, memo) +
        countWays(m - y, x, y, z, memo) +
        countWays(m - z, x, y, z, memo);

    memo[m] = ways;  // �������� ��������� � ���'��
    return ways;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int m = 10;  // ������� ��������� �����������
    int x = 1, y = 2, z = 3;  // ������� �����

    std::vector<int> memo(m + 1, -1);  // ����� ��� ��������� ����������

    int ways = countWays(m, x, y, z, memo);
    std::cout << "ʳ������ ������� �������� " << m;

    return 0;
}
