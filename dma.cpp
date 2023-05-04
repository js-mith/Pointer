#include<iostream>
using namespace std;

int main() {
     int * p1 =new int;
     *p1 = 10;
     cout << * p1 <<endl;

     double *pd = new double;
     char *c = new char;

     int * p = new int[50];
     int n ; 
     cout << " enetr trhe number  of element :";
     cin>>n;
     int * pa2 = new int[n];
     for(int i =0; i < n ; i++){
        cin >> pa2[i];
     }

     int max =-1;
     for(int i =0 ; i <n ; i++){
        if(max < pa2[i]){
            max = pa2[i];

        }
     }
     cout<< max <<endl;
     return 0;
}