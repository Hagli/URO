# include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout << "Masukkan dua angka: ";
    cin >> num1 >> num2;
    cout << "Pilih operator (+, -, atau *): ";
    cin >> op;
    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        default:
            cout << "Operator tidak valid";
            break;
    }
    return 0;
}
