#include <iostream>

using namespace std;

int main()
{
 int n;
 cin >> n;
 bool A[n];
 long long x = 1;
 for (int i = 2; i<n; i++){
        if (i*i>n) break;
    for(long g = i*i; g<=n; g = g+i){
        A[g]=1;
    }
 }
    for (int i=2; i<=n; i++){
        if (A[i] == 0){x = x*i ;}
    }
    cout << x;
    return 0;
}
