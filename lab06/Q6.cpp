
#include <iostream>
using namespace std;

int maze[4][4] = {{1, 0, 0, 0},{1, 1, 0, 1},{0, 1, 0, 0},{1, 1, 1, 1}};
int path[4][4] = {0};

bool solve(int row, int col){

    if (row == 3 && col == 3 && maze[row][col] == 1){
        path[row][col] = 1;
        return true;
    }

   
    if (row >= 4 || col >= 4 || maze[row][col] == 0)
        return false;

    path[row][col] = 1;

    // down direction
    if (solve(row + 1, col))
        return true;

    // right direction
    if (solve(row, col + 1))
        return true;

    
    path[row][col] = 0;
    return false;
}

int main(){
    if (solve(0, 0)){
        cout << "Valid path:\n";

        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 4; j++)
                cout << path[i][j] << " ";

            cout << endl;
        }
    }
    else{
        cout << "No valid path exists";
    }

    return 0;
}
