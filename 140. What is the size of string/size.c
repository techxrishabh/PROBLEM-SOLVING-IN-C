// What is the size of this string ?

char str[] = "PhysicsWallah";

// answer will be 14 becuz computer automatically put \0 at the end  

char str[13] = "PhysicsWallah"; // will give error
char str[14] = "PhysicsWallah"; // will not give error
char str[] = "PhysicsWallah"; // it will be better if you dont write anything 
char str[20] = "PhysicsWallah"; // we can also write this but this will be a waste of size as computer will automatically put \0 at the end 



