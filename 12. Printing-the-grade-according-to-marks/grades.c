// Take input percentage of a student and
// print the Grade according to marks:

// 1) 90-100 Excellent
// 2) 80-90 Very Good
// 3) 70-80 Good
// 4) 60-70 Can do better
// 5) 50-60 Average
// 6) 40-50 Below Average
// 7) <40 Fail

#include <stdio.h>
int main(){
    int Grade;
    printf("Print the percentage of the student so that i can tell you the grade\n");
    scanf("%d", &Grade);

    if(Grade >= 90 && Grade <= 100){
        printf("Excellent");
    } else if(Grade >= 80 && Grade < 90){
        printf("Very Good");
    } else if(Grade >= 70 && Grade < 80){
        printf("Good");
    }  else if(Grade >= 60 && Grade < 70){
        printf("Can do Better");
    }  else if(Grade >= 50 && Grade < 60){
        printf("Average");
    }  else if(Grade >= 40 && Grade < 50){
        printf("Below Average");
    }  else if(Grade < 40){
        printf("Fail");
    };
    return 0;

}