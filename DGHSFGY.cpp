#include <iostream>
#include <cstring>
using namespace std;

int number(int, string)
{
    int a;
    string b;
    int c = a + sizeof(b);
    return a;
}
int main()
{
    string a = "fdsfyhsdfuwfety";
    int b = number(6, a);
    cout << b << endl;
    return 0;
}