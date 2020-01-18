# include <iostream>
using namespace std;
int main()
{
    float a = 3;
    do{
    char op, var, b;
    float num1, num2;
    cout << "Pilih operator (+, -, *, atau ?): ";
    cin >> op;
    switch(op)
    {
        case '?':
            cout << "Masukkan variabel:";
            cin >> var;
            cout << "Masukkan koefisien:";
            cin >> num1;
            cout << "Masukkan pangkat koefisiennya:";
            cin >> num2;
            cout << num1 << var << "^" << num2 << " menjadi" << endl;
            cout << num1*num2 << var << "^" << num2-1;
            break;
        default:
            cout << "Masukkan angka pertama: ";
            cin >> num1;
            cout << "Masukkan angka kedua: ";
            cin >> num2;
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
        
        }
        cout << endl << "Melakukan operasi lain? Input y/n ";
        cin >> b;
        switch(b)
        {
            case 'n':
            a = 0;
            break;
        }
    }
    while (a>0);
    }