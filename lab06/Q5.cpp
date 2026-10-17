
#include <iostream>
using namespace std;

int department[4][4] = {{0, 1, 1, 0}, {1, 0, 1, 1}, {1, 1, 0, 1}, {0, 1, 1, 0}};

string colors[3] = {"Red", "Green", "Blue"};
int assigned[4] = {-1, -1, -1, -1};

bool isSafe(int vertex, int color){
    for (int i = 0; i < 4; i++){
        if (department[vertex][i] == 1 && assigned[i] == color){
            return false;
        }
    }
    return true;
}

bool colorGraph(int vertex){
    if (vertex == 4)
        return true;

    for (int color = 0; color < 3; color++){
        if (isSafe(vertex, color)){
            assigned[vertex] = color;

            if (colorGraph(vertex + 1))
                return true;

            assigned[vertex] = -1;
        }
    }

    return false;
}

int main(){
    if (colorGraph(0)){
        char vertices[4] = {'A', 'B', 'C', 'D'};

        for (int i = 0; i < 4; i++){
            cout << vertices[i] << " = "
                 << colors[assigned[i]] << endl;
        }
    }
    else{
        cout << "No valid coloring exists"<<endl;
    }

    return 0;
}
