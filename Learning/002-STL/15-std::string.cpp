#include <iostream>
#include <string>

// good ol' std::string.
// std::string is an alias for std::basic_sting.


// gonna study about in depth about std::string in this



// what does std::string do? and what exactly is it?
    // string is an object that manages a char sequence for you.








int main(){

    // multiple ways to initialize.

std::string a("Hello");
std::string b = "World";
std::string c;
   
// 1: adding in a string.


a+= b;  // can append a string.

c.push_back('!');   // add only single chars.



std::cout << a << c; // will print "Hello World!".





// 2: indexing and accessing chars.

// same as other stl containers.

for(int i = 0; i < c.size(); i++){
    std::cout << a[i];
    if(i == 1){
        break;
    }
}



// 3: c.size(): generally O(1). Gives the number of chars in a string.


b.size();





// 4: strings are iterable (a for each loop works).

    for(char d : a){
        std::cout << d;
    }


// 5: stings can transfer ownership of it's resources.
















    return 0;
}