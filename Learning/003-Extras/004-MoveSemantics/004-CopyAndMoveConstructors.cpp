#include <iostream>


// Copy: Numbers b = a;
// basically- make b an independent copy of a.


// Move: Numbers b = std::move(a);
// a is giving his resources to a. NO COPYING.



class Numbers{
int* data;


public:

Numbers(int value){
    data = new int(value);
}

Numbers(const Numbers& other){    // copy constructor
    data = new int(*other.data);
}

Numbers(Numbers&& other){   // move constructor
    data = other.data;  
    other.data = nullptr;
}

~Numbers(){ // destructor
    delete data;
}

void Showdata(){
    if(data){
    std::cout << *data << '\n';
    }
    else{
        std::cout << "No data found\n";
    }
}

};




int main(){
    
Numbers a(50);
Numbers b = std::move(a);

// moving:

std::cout << "A: ";
a.Showdata();
std::cout << "B: ";
b.Showdata();

// copying:

Numbers c(100);
Numbers d = c;

std::cout << "C: ";
c.Showdata();

std::cout << "D: ";
d.Showdata();





    return 0;
}
