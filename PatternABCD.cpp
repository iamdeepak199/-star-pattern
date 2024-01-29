#include <iostream>
using namespace std;

int main() {
   
   int n;
   cin>>n;
   cout<< "Enter the total number of coloms : "<<endl;

   for(int i=1;i<=n;i++){
   char val='A';
    for(int j=1;j<=i;j++){
        cout<<val;
        val++;
    }
       val=val-1;

    for(int j=1;j<=i;j++){
        cout<<val;
        val--;
    }
    cout<<endl;
   }
  
}