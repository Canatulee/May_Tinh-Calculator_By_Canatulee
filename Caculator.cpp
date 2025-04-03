#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    while (true) {
        string p;
        double a, b;

        cout << "--- May Tinh - Calculator by Canatulee ---\n";
        cout << "Vui long nhap loai phep tinh (Enter operation type)\n";
        cout << "+ : Cong (Plus)\n";
        cout << "- : Tru (Minus)\n";
        cout << "* : Nhan (Multiply)\n";
        cout << "/ : Chia (Divide)\n";
        cout << "^ : Luy thua (Power)\n";
        cout << "sqrt : Can bac 2 (Square root)\n";
        cout << "e : Thoat (Exit)\n";
        cout << "Nhap lua chon: ";
        cin >> p;

        system("cls");
        if (p == "+") {
            cout << "Nhap so thu nhat (Enter the first number): ";
            cin >> a;
            cout << "Nhap so thu hai (Enter the second number) : ";
            cin >> b;
            cout << a << " + " << b << " = " << a + b << endl;
            this_thread::sleep_for(chrono::seconds(2));
            system("cls");
        }
        else if (p == "-") {
            cout << "Nhap so tru (Enter the first number): ";
            cin >> a;
            cout << "Nhap so bi tru (Enter the second number): ";
            cin >> b;
            cout << a << " - " << b << " = " << a - b << endl;
            this_thread::sleep_for(chrono::seconds(2));
            system("cls");
        }
        else if (p == "*") {
            cout << "Nhap thua so thu nhat (Enter the first number): ";
            cin >> a;
            cout << "Nhap thua so thu hai (Enter the second number): ";
            cin >> b;
            cout << a << " * " << b << " = " << a * b << endl;
            this_thread::sleep_for(chrono::seconds(2));
            system("cls");
        }
        else if (p == "/") {
            cout << "Nhap so bi chia (Enter the divided number): ";
            cin >> a;
            cout << "Nhap so chia (Enter the divisor): ";
            cin >> b;
            if (b == 0) {
                cout << "Loi: Khong the chia cho 0! (Can't divide by 0!)\n";
                this_thread::sleep_for(chrono::seconds(2));
                system("cls");
            } else {
                cout << a << " / " << b << " = " << a / b << endl;
                this_thread::sleep_for(chrono::seconds(2));
                system("cls");
            }
        }
        else if (p == "^") {
            cout << "Nhap co so (Enter the base number): ";
            cin >> a;
            cout << "Nhap so mu (Enter the exponent): ";
            cin >> b;
            cout << a << " ^ " << b << " = " << pow(a, b) << endl;
            this_thread::sleep_for(chrono::seconds(2));
            system("cls");
        }
        else if (p == "sqrt") {
            cout << "Nhap so can tinh (Enter a number): ";
            cin >> a;
            if (a < 0) {
                cout << "Loi: Khong the tinh can bac hai cua so am! (Cannot calculate square root of negative number!)\n";
            } else {
                cout << "Can bac hai cua " << a << " la: " << sqrt(a) << endl;
                cout << "The square root of " << a << " is: " << sqrt(a) << endl;
                this_thread::sleep_for(chrono::seconds(2));
                system("cls");
            }
        }
        else if (p == "e") {
            cout << "Tam biet! (Goodbye!)\n";
            this_thread::sleep_for(chrono::seconds(2));
            break;
        }
        else {
            cout << "Loi: Lua chon khong hop le! Vui long nhap lai. (Invalid selection)\n";
            this_thread::sleep_for(chrono::seconds(3));
            system("cls");
        }
    }
    return 0;
}