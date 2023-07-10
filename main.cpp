#include <iostream>
using namespace std;
int main()
{
    cout << "Enter A and B: ";
    int a, b;
    int max, min;
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
