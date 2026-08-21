#include <iostream>


// we'll apply our template knowledge and pass functors into another callable using it in this study session.



class Student{
std::string name;

public:

Student(std::string name){  // constructor
    this->name = name;
};

void setname(std::string setname){  // setter
    name = setname;
}

auto operator()(){  // functor
    return name;
};

};


class Teacher{
std::string name;

public:

Teacher(std::string name){
    this-> name = name;
}

auto operator()(){
    return name;
}

};



// now that we have 2 operators, here's how we're gonna make a generic callable.
template<typename T>

void ShowName(T Callable){
    std::cout << Callable() << '\n';
}


int main(){
    
    Student student1("hero");
    Teacher Teacher1("Big Mom");

    ShowName(student1);
    ShowName(Teacher1);     // now this function works with any functor. :)

    return 0;
}
