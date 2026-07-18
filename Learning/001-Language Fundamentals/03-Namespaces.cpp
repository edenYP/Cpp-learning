 #include <iostream>


//                 namespaces are like libraries, they are used to group related code together and avoid name conflicts example: std:: is a namespace that contains all standard library functions.    

namespace Test{
    int x = 10;
}

namespace Test2{
    int x = 20;
}


main(){


//                                  we can also use using namespace [name] to make that namespace the default namespace for that scope, but it's not recommended.
//                                           we can also use it for other libraries like "using std::cout" to avoid having to write std::cout everytime.
int x = 5;

std::cout << "x: " << x << '\n';
std::cout << "Test::x: " << Test::x << '\n';
std::cout << "Test2::x: " << Test2::x << '\n';

// each of them will have different values despite having the same name because they are in different namespaces.





     return 0;
    }