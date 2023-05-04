#include<iostream>
using namespace std;
int sum (int *a , int size){
    int ans =0;
 for(int i = 0 ; i < size ; i++){
    
    ans +=a[i];
 }
  return ans;
}

int main() {
     int a[10] ={1,2,3,4,5};
     cout<<sum(a,10) <<endl;

     return 0;
}