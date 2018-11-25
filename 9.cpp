/числа Софи Жермен
#include <iostream>

using namespace std;

int main()
{
 int n;
 cin >> n;
 bool A[2*n+1];
 for (int x = 0; x<2*n+1; x++) A[x]=0;

 for (int y = 2; y<2*n+1; y++){
        if (y*y>2*n+1) break;
    for(long g = y*y; g<=2*n+1; g = g+y){
        A[g]=1;
    }
 }
    for (int y=2; y<=n; y++){
        if (A[y] == 0){
                if (A[2*y+1]==0){
                    cout << y<< endl;}}
    }
    return 0;
}
