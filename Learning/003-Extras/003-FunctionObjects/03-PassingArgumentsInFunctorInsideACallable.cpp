#include <iostream>

// not sure why i'm doing something this simple but okay no skipping topics from the roadmap i guess-



class Student{
std::string name;

public:

Student(std::string name){  // constructor
    this->name = name;
};

void setname(std::string setname){  // setter
    name = setname;
}

auto operator()(int IQ){  // functor
    std::cout << "Name: " << name;
    std::cout << "IQ: " << IQ;
    return;
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


class Profile{
    std::string name;
    int iq;
    public:
    Profile(std::string name, int iq){
        this-> name = name;
        this-> iq = iq;
    }
};





template<typename T, typename C>

void ShowProfile(T Callable, C IQ){
    std::cout << "Profile:\n";
    Callable(IQ);                       // here's the concept we learned:
                                        // We pass an argument to the generic function,
                                        // which then passes that argument to the callable functor.
}


int main(){
    
    Student student1("Weak Hero");
    Teacher Teacher1("Albert Epstein. Jr");

    ShowProfile(student1, 106);
    ShowProfile(Teacher1, 142.5);        
    return 0;
}

