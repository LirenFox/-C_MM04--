#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a+b <<endl;
    cout << a << "*" << b << "=" << a*b <<endl;
    cout << a << "-" << b << "=" << a-b <<endl;
    //¾l¼Æ>=0
    if(a%b >= 0)
        cout << a << "/" << b << "=" << a/b << "..." << a%b <<endl;
    //¾l¼Æ<0
    else
        cout << a << "/" << b << "=" << a/b - 1 << "..." << a%b + b <<endl;
    return 0;
}
