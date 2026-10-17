#include<iostream>
using namespace std;

int digitSum(int n,int sum){

    if(n == 0){
        return sum;
    }

    int denominator = n % 10;
    sum+=denominator;
    n = n / 10;

    return digitSum(n,sum);

}

int main(){

    int n;
    cout<<"Enter the positive number:";
    cin>>n;
    int sum = 0;
    if(n > 0){
    int result =  digitSum(n,sum);
    cout<<"The Sum of digit is:"<<result<<endl;
    }else{
        cout<<"Invalid Number!"<<endl;
    }
    return 0;
}