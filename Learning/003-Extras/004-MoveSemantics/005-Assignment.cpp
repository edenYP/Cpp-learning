#include <iostream>



class Numbers{
int* data;


// difference between assignment and move:
//  Assignment vs construction is about whether the destination object already exists.

//          Copy vs move is about whether the source is an lvalue or rvalue.


public:

Numbers(int value){
    data = new int(value);
    
}

Numbers(Numbers&& a){  // move constructor  (rvalue)
    data = a.data;
    a.data = nullptr;
}

Numbers(Numbers& a){    // copy constructor  (lvalue)
    data = new int(*a.data);
}

~Numbers(){
    delete data;
}


Numbers& operator=(Numbers& a){ // copy assignment operator.
    delete data;
    data = new int(*a.data);
    return *this;
};

Numbers& operator=(Numbers&& a){   // move assignment operator.
    delete data;

    data = a.data;
    a.data = nullptr;
    return *this;
}

};



int main(){
    
Numbers a(50);
Numbers b(a);   // copying (a is an lvalue).

Numbers c(std::move(a));    // move (a is an rvalue in this expression). 

Numbers d(100);

d = a;  // copy assignment operator. (d copies a)

Numbers e(100);
e = std::move(b);   // move assignment operator.

    return 0;
}