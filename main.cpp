#include <iostream>
using namespace std;
int main()
{
    cout << "Enter A and B: ";
<<<<<<< HEAD
    double a, b;
    int max;
=======
    int a, b;
    int max, min;
>>>>>>> 02463c7e9293e01f08c258d54cb6b027321f5130
    cin >> a >> b;
    if(a>b)
        max=a;
    else
        max=b;
    if(a>b)
        min=b;
    else
        min=a;
    cout << "A + B = "<< a + b <<'\n'
    << "A - B = "<< a - b <<'\n'
    << "A * B = "<< a * b <<'\n'
    << "A / B = "<< a / b <<'\n'
    << "Max = "<< max <<'\n'
    << "Min = "<< min <<'\n';
    return 0;
}
