#include <iostream>
#include <vector>

// The rule of 5:
// 1: destructor
// 2: copy constructor
// 3: move constructor
// 4: copy assignment constructor.
// 5: move assignment constructor.

class RuleOf5{
std::string* data;

public:

RuleOf5(std::string a){             // constructor:
    data = new std::string(a);
    }

RuleOf5(RuleOf5& a){       // copy constructor.
    data = new std::string(*a.data);    
}    

RuleOf5(RuleOf5& a){            // move constructor.
    data = a.data;
    a.data = nullptr;
}

RuleOf5& operator=(RuleOf5& a){     // move assignment constructor.
    delete data;
    data = a.data;
    a.data = nullptr;
}

RuleOf5& operator=(RuleOf5&& a){    // copy assignment operator.
    delete data;
    data = new std::string(*a.data);

    return *this;
}





RuleOf5(){      // destructor.
    delete data;
}    

};



int main(){







    return 0;
}