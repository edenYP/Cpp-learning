#include <iostream>
#include <stack>


// Stack: A container adaptor that Works on LIFO (last in, first out) principles. 

int main(){

    std::stack<std::string> names;

    names.push("eden");
    names.push("Caelid");
    names.push("pseudo");



    names.pop(); // which name do you think will pop out?

    // answer: pseudo will pop out as it was the last one to be pushed in.




    // Limitation:
    // You cannot access or remove elements from the middle.
    // Only the top element can be accessed or removed.




    // Functions:



    names.top(); // see which number is top.
    names.pop(); // removes top, like we did earlier.
    names.empty(); // checks if it's empty.
    names.size(); // number of elements.






return 0;
}