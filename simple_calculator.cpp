#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    while(true) {
        char op;
        float num1, num2, equal;
        cout << "Simple C++ calculator | by Smisch\n\n";
        
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        cout << "\n\nEnter first number: ";
        cin >> num1;

        cout << "\n\nEnter second number: ";
        cin >> num2;

        switch (op)
        {
        case '+':
            equal = num1+num2;
            break;
        case '-':
            equal = num1-num2;
            break;
        case '*':
            equal = num1*num2;
            break;
        case '/':
            equal = num1/num2;
            break;
        default:
            cout << "\n\n\nERROR operator \"" << op << "\" is unknown.";
            break;
        }
        
        cout << "\n\n\nSolution for your problem is:";
        cout << "\n" << num1 << op << num2 << "=" << equal;
    
        int wtd;
        cout << "\n\n\nDo you want restart or end this program?\n1 - for restart\n2 - for end\n\nWhat do you want?(1, 2): ";
        cin >> wtd;

        switch (wtd)
        {
        case 1:
            system("cls");
            break;
        case 2:
            system("cls");
            cout << "Thank you for using this calculator";
            sleep(3);
            exit(0);
        default:
            break;
        }
    }

    return 0;
}