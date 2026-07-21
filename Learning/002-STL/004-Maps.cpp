#include <iostream>
#include <utility> //pair
#include <vector> //vector
#include <map> //maps



// a map stores a keyitem and it's value inside of it. think of it as a vector of pairs but it does not need indexs to call the values. you can call them by using keys.


// syntax = std::map<keytype, valuetype> variablename;




int main(){

    std::map<std::string, float> bankbalance;


    //                  1: inserting values:






    bankbalance["Eden"] = 0.99;
    bankbalance["Yuki"] = 999999;
    bankbalance["brocode"] = 1000000;

std::cout << "eden's bankbalance: " << bankbalance["Eden"] << '\n';
std::cout << "Yuki's bankbalance: " << bankbalance["Yuki"] << '\n';
std::cout << "Brocode's bankbalance: " << bankbalance["brocode"] << '\n';





    //              2: size function:




    std::cout << "Current registered users: " << bankbalance.size();


    // what happens if you try to print a key that does not exist?

    std::cout << "Alicia's bankbalance: " << bankbalance["Alicia"] << '\n';

    // it will compile and the VALUE associated with the key "Alicia" will be 0, it'll add a new key and make it's value 0. THE SIZE WILL INCREAESE BY 1.

    std::cout << "New current registered user data: " << bankbalance.size();



    // What if you don't want to create a key and still want to check whether a key exists?
    // YOU USE (next topic)
    
    
    
    
    
    
    
    
    //              3: find() ITERATOR (a bookmark pointing to an element inside the map)





    std::cout << "Is PokuPoku a registered user?" << '\n';
        auto registered = bankbalance.find("PokuPoku");

        if(registered == bankbalance.end()){                    // the iterator returns bankbalance.end() if the user does not exist. so registered = bankbalance.find("PokuPoku");
                                                                // if pokupoku key doesn't exist then registered = bankbalance.end();
            std::cout << "User doesn't exist!\n";           
        }
        else{
            std::cout << "User exist!\n";
        }








    //             4: count(): When we want to check if the value exists or not. 

                                                             // Difference between count and find? find gives you the ITERATOR while count just gives you 0 and 1;

        


    std::cout << "Is bakabaka a registered user?\n";
    if(bankbalance.count("bakabaka")){
        std::cout << "User exists!\n";
    }
    else{
        std::cout << "User doesn't exist!\n";
    }








    //          5: erase():    removes an element (key and it's value) from the map.


    bankbalance.erase("Alicia");
    std::cout << "Total registered user after erasing alicia: " << bankbalance.size() << '\n';
    
    







    //              6: Iterating a map:

    std::cout << "Here's the list of all registered users!\n";

    for(const auto& entry : bankbalance){                   // why are we using & here? because we don't want it to create a copy inside "entry" when iterating every element.

        std::cout << entry.first << ": " << entry.second << '\n'; 

            // this will print "brocode, eden, yuki" even tho eden and yuki were inserted first. why?

            // because a map auto sorts the keys.
            // and keys are strings this time so they're sorted in alphabetical order. (it would be sorted acc to their number if they were ints.)


    }








    return 0;
}