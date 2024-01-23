// what is structures and why structure ?
// It is user defined data types

// struct employee{
//     int emp_id;
//     char name;
//     float salary;
// };

#include <stdio.h>
int main(){
    struct pokemon{ // user defined data type 
        int hp;
        int speed;
        int attack;
        char tier; // S,A,B,C,D
    };
    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("%d\n", pikachu.speed);
    printf("Enter pikachu attack\n");
    scanf("%d", &pikachu.attack);

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    printf("%d\n", charizard.hp);

    struct pokemon mewtwo;
    mewtwo.attack = 170;
    mewtwo.hp = 150;
    mewtwo.speed = 200;
    mewtwo.tier = 'G';

    printf("%d\n", mewtwo.attack);
    printf("%c\n", mewtwo.tier);
    printf("%c\n", pikachu.attack); 

}