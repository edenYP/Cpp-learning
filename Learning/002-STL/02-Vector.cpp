#include <iostream>
#include <vector>

// how does it feel to revisit the same topic and have a completely different understanding of it? :D
// Earlier you learned how to use VECTORS, now you'll know what they are :).


// What are vectors?


// Vectors are pre-built STL Container provided by C++, that internally handles dynamic arrays for you. 


// Here's an examplate so you can build a mental model-

    // template<typename T>

    // class Pokemon { ... };

    // Pokemon<int> pikachu;

    // That's the exact same idea here :D. 

    // vector syntax    =    std::vector<int> numbers;

    // vector is simply a class template.

        // Illustration-

        // std::vector<float> poopoo;
        // std::vector<int> peepee;
        // std::vector<double> ded;

    // It's one class template that can work with many data types.


int main(){

    std::vector<int> bodycount;

    // since we have used vectors before- we'll also learn about some common vector methods.



    //              1: push_back(): adds an element at the end of the vector.


    bodycount.push_back(3);
    bodycount.push_back(4);


    //              2: pop_back(): removes the last element from the vector.


    bodycount.pop_back();


    //              3: at(): access an element with bounds checking.


    std::cout << "using at: " << bodycount.at(0) << '\n';;                       // funfact: string is a template as well hehe.


    //              4: []: fast indexing but NO bounds checking.


    std::cout << "fast indexing: " << bodycount[0] << '\n';

    
    //              5:front(): returns the first element.


    std::cout << "First element: " << bodycount.front() << '\n';


    //              6: Back(): returns the last element.

    
    std::cout << "Last element: " << bodycount.back() << '\n';


    //              7: size(): returns number of elements.


    std::cout << "Size of vector: " << bodycount.size() << '\n';

    
    //              8: clear(): removes every element.


    bodycount.clear();
    
    
    //              9: empty(): returns true if vector is empty:


    std::cout << "is the vector empty: " << bodycount.empty() << '\n';


    //              10: reserve(): Reserves memory for the vector in advance.


    bodycount.reserve(5); // i can only have 5 bodycounts before my partner divorces me.


    //              11: capacity(): how much total memory the vector currently has been allocated. (e.g- size = 3, capacity = 4. so the vector can store 1 more element before needing more allocated space)
    

    std::cout << "Capacity: " << bodycount.capacity() << '\n';


    // VERY IMPORTANT, used later             99: emplace_back(): construct an object directly inside a vector. 


    bodycount.emplace_back(7); 

    // - This is more efficient than push_back 
    // - for complex objects.

    return 0;
}