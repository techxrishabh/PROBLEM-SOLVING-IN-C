// What will be the output of this recursive function 

int fun (int n){
    if (n == 1)
    {
        return 1;
    } else {
        return 1 + fun(n-1);
    }
    
}
int main(){
    int n = 3;
    printf("%d", fun(n));
    return 0;
}


// 3