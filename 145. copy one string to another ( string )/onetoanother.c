// Implement: Copy one string to another

 #include <stdio.h>
 int main(){
    char s1[] = "Physics Wallah";
    char *s2 = s1;
    s1[0] = 'M';
    printf("%s", s2);  // Mhysics Wallah
  }

  // Not a deep copy: Here, s2 points to the same character array and hence, change in s1 is also reflect in s2.