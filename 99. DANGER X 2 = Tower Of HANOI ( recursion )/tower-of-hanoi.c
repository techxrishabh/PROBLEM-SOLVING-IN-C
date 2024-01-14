// TOWER OF HANOI
// There will be always three rods 
// Take input from use How many no. of disks he/she want 
// n => No. of disks
// s => Source
// h => Helper
// d => Destination

#include <stdio.h>
void Tower(int n, char s, char h, char d){
    if (n==0) return;
    Tower(n-1, s, d, h);
    printf("%c -> %c\n", s, d);
    Tower(n-1, h, s, d);
    return;

}


int main(){
    int n;
    printf("Enter the Number of Disks : ");
    scanf("%d", &n);

    Tower(n, 'A', 'B', 'C'); 

}