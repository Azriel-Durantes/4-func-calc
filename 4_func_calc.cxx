#include <iostream>
using namespace std;

class Calculator {
    public:
        void setValues(double a, double b) {
            n1 = a;
            n2 = b;
        }

        double getValue1() {
            return n1;
        }

        double getValue2() {
            return n2;
        }

        double addition() {
            return getValue1() + getValue2();
        }

        double subtraction() {
            return getValue1() - getValue2();
        }

        double multiplication() {
            return getValue1() * getValue2();
        }

        double division() {
            return getValue1() / getValue2();
        }

        void display(int option) {
            switch (option) {
                case 1:
                    cout << "Result: " << addition() << endl;
                    break;
                case 2:
                    cout << "Result: " << subtraction() << endl;
                    break;
                case 3:
                    cout << "Result: " << multiplication() << endl;
                    break;
                case 4:
                    if (getValue2() == 0) {
                        cout << "does not work(0)" << endl;
                    } else {
                        cout << "Result: " << division() << endl;
                    }
                    break;
                case 5:
                    cout << "Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid option" << endl;
            }
        }

    private:
        double n1, n2;
};

int main() {
    int option;
    double v1, v2;
    Calculator calc;

    do {
        cout << "\n=== |MENU| ===" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit" << endl;
        cout << "Option: ";
        cout << "\n=============" << endl;
        cin >> option;

        if (option >= 1 && option <= 4) {
            cout << "Value 1: ";
            cin >> v1;
            cout << "Value 2: ";
            cin >> v2;
            calc.setValues(v1, v2);
        }

        calc.display(option);

    } while (option != 5);

    return 0;
}
