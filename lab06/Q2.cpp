#include<iostream>
using namespace std;
void printDigits(int n){
    

    // base case 
    if(n==0){
        return;
    }

    
    
    
    
    printDigits(n-1);
    cout<<n<<" ";
}

int main(){
    int n = 5;
    
    printDigits(n);
    return 0;   
}