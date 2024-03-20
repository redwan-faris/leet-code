

#include <bits/stdc++.h>
using namespace std;

int minimumSum(int num)
{
  int result =INFINITY;
  int container = 0;
  while(num>0){
    container = num % 10;
    num = num /10;
    result = min((num+container),result);
  }  
  return result;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        cout<<minimumSum(n);
    }
    return 0;
}