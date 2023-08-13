#include <iostream>

using namespace std;

int main(){
    int x;
    int y;
    char oper;

    cout << "input x:";
    cin >> x;
    if (isdigit(x)){
        cout << "invalid input";
    }else {
        cout << "input y:";
        cin >> y;
        if (isdigit(y)){
            cout << "invalid input";
        }else{
            cout << "oper:";
            cin >> oper;

            switch(oper){
                case '+':
                    cout << x+y;
                    break;

                case '-':
                    cout << x-y;
                    break;

                case '*':
                    cout << x*y;
                    break;

                case '/':
                    cout << x/y;
                    break;

                default:
                    cout << "invalid input";
                    break;
            }

        }
    }
}
