#include <iostream>
#include <string>

int main() {

//     Variables, x,y,z can be assigned values and can be used to store data. there are different types of variables, such as int, float, double, char, string, bool, etc. 



    //                                                                              1) Integer variable (whole numbers)

        
        int x; // step is called declaration, we are declaring a variable named x as an int
        x = 5; // step is called assignment, we are assigning value 5 to an int variable named x

        
    //                                                                      you can do both steps in one like like this:

        int y = 10; // both at once.

    //                                                                                      result

        std::cout << "x: " << x << '\n'; //the output will be x which is equal to 5


        
    //                                                                                    Sum of x and y

        int z = x + y; // declaring z = x + y, which is 5 + 10 = 15

        std::cout << "z: " << z << '\n'; 
 



        //                                                                                  Some uses of Integer variables

        int age = 18; // my age
        int year = 2026; //current year
        int day = 9; //current day

        std::cout << "age: " << age << 'n'; 
        std::cout << "year: " << year << '\n';
        std::cout << "day: " << day << '\n';








    //                                                                       2) Double and Float variables (Decimal numbers)

        double a = 3.14; // double variable stores data more precisely (8 bytes) but takes more storage space

        float b = 3.14;  // float variable stores data less precisely (4 bytes) and takes less storage space

        
        std::cout << "a: " << a << '\n';
        std::cout << "b: " << b << '\n';


        double c = a + b; 

        std::cout << "c: " << c << '\n';


    //                                                                                  Uses of double and float variables 
    
    
        double money = 99.99; // money in game i guess
        float price = 49.99; // price of item i guess


        double buy = money - price; // buying stuff 

        std::cout << "buy: " << buy << '\n'; // money remains after buying








//                                                                                      3) char variables (can store 1 character) must use '' when declaring value


    char initial = 'V'; // initial of my name
    char usd = '$'; 

    std::cout << "usd: " << usd << '\n';





//                                                                                        4) boolean (true or false) 0 = false, 1 = true




     bool dead = false; 
     bool alive = true;

     std::cout << "dead: " << dead << '\n';






//                                                                                         5) String (Basically an object that stores multiple characters) COMES IN STD LIBRARY



    std::string Likes = "I love playing video games";  // will print out "I love playing video games" 
    std::cout << "Likes: " << Likes << '\n'; 



// printing with extra words 

std::cout << "So like, " << Likes << '\n';   // this will print "So like, I love playing video games'

std::cout << "I am " << age << " years old" << '\n';  // this will print "I am 18 years old"






//                                                                                          CONSTANTS (FIXED VALUES OF VARIABLES) USUALLY DENOTED IN ALL CAPS



    const double LIGHT = 3.18; 
    const double SPEED = 1e8; //                        1e8 is the scientific notation for 1 x 10^8, eg- 3e10 = 3 x 10^10

    const double LIGHTSPEED = LIGHT * SPEED;

    std::cout << "Speed of Light is " << LIGHTSPEED << "m/s" << '\n';       // Will print out "Speed of Light is 3.18e8m/s"







    return 0;   










}