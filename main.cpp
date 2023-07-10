#include <iostream>
using namespace std;
int main()
{
    cout << "Enter A and B: ";
    int a, b;
    int max;
    cin >> a >> b>> max;
    if(a>b)
        max=a;
    else
        max=b;
    cout << "A + B = "<< a + b <<'\n'
    << "A - B = "<< a - b <<'\n'
    << "A * B = "<< a * b <<'\n'
    << "A / B = "<< a / b <<'\n'
    << "Max = "<< max <<'\n';
    return 0;
}
