#include <iostream>
#include <utility>
#include <vector>




class Numbers{
int* data;  // a pointer that points to an int.


public:

Numbers(int value){ // constructor.
    data = new int(value);
}

Numbers(Numbers&& other){   // move constructor.
    data = other.data;
    other.data = nullptr;
}


~Numbers(){ // destructor.
    delete data;
}

void Showdata(){
    if(data){
        std::cout << *data << '\n'; 
    }
    else{
        std::cout << "no data found\n";
    }
}


};


int main(){
    
Numbers a(50);    

// data a points to  ----> 50



Numbers b = std::move(a);

// moving resources from a to b using our move constructor.

a.Showdata();
b.Showdata();



return 0;
}




// summary


/*

std::move tells c++ to treat the object as an rvalue and then c++ looks for a constructor 
of the desination object's type that accepts it.





std::move -> treat object as an rvalue.


C++ overloaded resolution -> looks for an acceptable constructor.


move construtor-> accepts it.




overall: std::move makes the moving possible, while move constructor does the moving and handles it.





*/