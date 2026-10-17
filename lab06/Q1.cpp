#include<iostream>
using namespace std;

void reverseString(string word,int size){
    int index = size;
    // base case
    if(size < 0){
        return;
    }

    cout<<word[index]<<" ";
    
    reverseString(word,size-1);
}

int main(){

    string word = "Nikhil";
    int length = word.length();

    reverseString(word,length-1);
    
    return 0;
}