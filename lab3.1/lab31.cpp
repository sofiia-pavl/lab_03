// lab31.cpp 
// < �������� ����� ������ > 
// ����������� ������ � 3.1 
// ������������, ������ ��������: ������� ���� �����. 
// ������ 19 

#include <iostream> 
#include <cmath> 

using namespace std;

int main() 
{
    double x;  // ������� ��������     
    double y;  // ��������� ���������� ������     
    double A;  // �������� ��������� - ������������� ����� ������� ������     
    double B;  // �������� ��������� - ������������� ����� ������� ������ 

    cout << "x = "; cin >> x;

    A = 2 * x - 13, 5;
    // ����� 1: ������������ � ��������� ����
    if (x < -1)
        B = sin(x) / 1 + cos(x) * cos(x);
    if (-1 <= x && x <= 1)
        B = cos(x) * cos(x) * sin(x) * sin(x) - 1;
    if (x > 1)
        B = log10(x + 2/5);

    y = A + B;
    cout << endl;     
    cout << "1) y = " << y << endl;

    // ����� 2: ������������ � ����� ����
    if (x < -1)
        B = sin(x) / 1 + cos(x) * cos(x);
    else 
        if (-1 <= x && x <= 1)
            B = cos(x) * cos(x) * sin(x) * sin(x) - 1;
        else
            B = log10(x + 2 / 5);

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();     
    return 0;
}


