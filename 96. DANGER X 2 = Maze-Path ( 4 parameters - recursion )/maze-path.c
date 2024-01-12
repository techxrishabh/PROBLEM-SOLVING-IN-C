// Maze Path ==> it is a type of grid 
// 3 X 3 Grid
// one step at a time
// can go only down and right

// cr == current row
// cc == current column
// er == ending row
// ec == ending column

#include <stdio.h>
int maze(int cr, int cc, int er, int ec){

    int rightWays = 0;
    int downWays = 0;

    if (cr == er && cc == ec) return 1;
    if (cr == er){          // only rightways call
        rightWays += maze(cr, cc+1, er, ec);
    };
    if (cc == ec){          // only downways call
        downWays += maze(cr+1, cc, er, ec);
    }
    if (cr<er && cc<ec)
    {
        rightWays += maze(cr, cc+1, er, ec);
        downWays += maze(cr+1, cc, er, ec);
    }
    int totalWays = rightWays + downWays;
    return totalWays;

}

int main(){
    int n, m;
    printf("Enter the no. of rows of the maze : ");
    scanf("%d", &n);
    printf("Enter the no. of columns of the maze : ");
    scanf("%d", &m);
    int noOfWays = maze(1, 1, n, m);
    printf("%d", noOfWays);
    return 0;
}


// we need to go from (sr, sc) to (er, ec) ===============================

// we can only go down or right 