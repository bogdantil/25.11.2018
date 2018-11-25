#include <iostream>

using namespace std;

int main()
{
int a=0,b;
long int n=78487894;
b=n/2019;
while((n-(2019*b))%2018!=0){
    b--;
    a++;
}
a++;
cout<<"a:"<<a<<" "<<"b:"<<b;
return 0;
}
/алгоритм явсляется эффективным тк мы не используем полного перебора/
