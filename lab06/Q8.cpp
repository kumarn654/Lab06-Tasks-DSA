
#include <iostream>
using namespace std;

char arr[4] = {'A', 'B', 'C', 'D'};

void permute(int index){
    if (index == 4){
        for (int i = 0; i < 4; i++)
            cout << arr[i];

        cout << endl;
        return;
    }

    for (int i =index;i<4;i++){
        swap(arr[index], arr[i]);

        permute(index + 1);

        swap(arr[index], arr[i]);  
    }
}

int main(){
    permute(0);
    return 0;
}
