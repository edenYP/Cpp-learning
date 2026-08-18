#include <iostream>

// here we'll learn about what goes on under the hood when we create a lambda and run it.


// Lambda closure/state: A lambda is an object that can store captured variables as state. 
// The same lambda object retains that state between calls. 
// C++ makes it callable through operator().



// will write an example of how that works under this-




class Lambda {

  private:
    int x;  // captured state


  public:
    // Constructor initializes the captured x
    Lambda(int x) : x(x) {}


    // Function-call operator
    int operator()(int y) const {
        return x + y;
    }
};



int main() {

    int x = 10;


    // This is conceptually what the lambda creation does:
    Lambda lambda(x);


    // Calling the lambda
    std::cout << lambda(5) << '\n';



    // Same thing as:
    std::cout << lambda.operator()(5) << '\n';









    // here's what we usually do tho:
    

  
    auto addition = [x](int y){
      return x + y;
    };

    std::cout << addition(5); // output will be 15.

    return 0;
}
