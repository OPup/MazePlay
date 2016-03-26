#include <iostream>
#include <stack>
#define ROWS 40
#define COLS 128

using namespace std;

void print(bool maze[][COLS]);
void fill(bool maze[][COLS]);
void generateMaze(bool maze[][COLS]);
void

int main(){

    bool maze[ROWS][COLS];

    generateMaze(maze);
    print(maze);

    return 0;
}

void print(bool maze[][COLS]){
    for(int i = 0; i < ROWS+2; i++){
        for(int j = 0; j < COLS+2; j++){
            if(i != 0 && i != ROWS+1 && j!=0 && j!=COLS+1){
                if(i == 1 && j == 1){
                    cout << "S";
                }else{
                    if(maze[i-1][j-1]){
                        cout << "#";
                    }else{
                        cout << " ";
                    }
                }
            } else{
                cout << "+";
            }
        }
        cout << endl;
    }
}


void fill(bool maze[][COLS]){
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            maze[i][j] = true;
        }
    }
}

void generateMaze(bool maze[][COLS]){
    fill(maze);
    
}
