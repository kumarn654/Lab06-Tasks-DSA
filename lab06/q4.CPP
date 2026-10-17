#include<iostream>
using namespace std;

int calculate(int n){

    if(n == 1){
        return 10;
    }

    

    return 2*calculate(n-1);

}

int main(){

    int n;
    cout<<"Enter the number of days:";
    cin>>n;
    
    int result = calculate(n);
    cout<<"Result is:"<<result<<endl;
    return 0;
}