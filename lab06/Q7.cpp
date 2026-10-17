
#include <iostream>
using namespace std;

int arr[5] = {2, 3, 5, 6, 8};
int subset[5];
int target = 9;

bool solve(int index, int sum, int count){
    if (sum == target){
        cout << "Subset: ";

        for (int i = 0; i < count; i++)
            cout << subset[i] << " ";

        cout << endl;
        return true;
    }

    if (index == 5 || sum > target)
        return false;

    subset[count] = arr[index];

    if (solve(index + 1, sum + arr[index], count + 1))
        return true;

   
    if (solve(index + 1, sum, count))
        return true;

    return false;
}

int main(){
    if (!solve(0, 0, 0))
        cout << "No valid subset exists";

    return 0;
}
