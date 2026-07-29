#include <iostream>
#include <deque>



// A deque (Double Ended Queue) allows insertion and deletion-
// from both the front and the back efficiently. time complexity = O(1)

// Example:
//
// std::deque<int> numbers = {2, 3, 4}
//
// numbers.push_front(1);
// numbers.push_back(5);
//
// numbers becomes:
// {1, 2, 3, 4, 5}

// To remove elements:
//
// numbers.pop_front();   // Removes 1
// numbers.pop_back();    // Removes 5
//
// numbers becomes:
// {2, 3, 4}


void yes(std::deque<std::string>& logs);
void print(const std::deque<std::string>& logs);

int main(){

    std::deque<std::string> logs;

        logs.push_front("Starting up");
        logs.push_front("Starting Sddm");
        logs.push_front("Logging in");
        logs.push_front("Welcome in! Sam sempi0l");
        logs.push_front("Opened Terminal");

    while(true){
       
        int response = 0;

        // now let's say i don't want to keep more than 5 logs at a time.
        // i can just remove the oldest one using pop_back()

        std::cout << "Do you want to add smth in logs? (1. no | 2. yes) [Type num, too lazy to use enums in an example.]\n";
        std::cin >> response;
        if(response == 1){
            break;
        }
        else if(response == 2){
            yes(logs);
        }

    }



        // Note: you can also pop element at any place by doing this-

        // deque.earse(deque.begin() + 2 ) // this removes element at 3rd spot.  



    return 0;
}




void yes(std::deque<std::string>& logs){
            std::string input;

            std::cout << "What do you want to add?\n";
            std::getline(std::cin >> std::ws, input);           // skips any ws in the buffer as well.
            logs.push_front(input);
            if(logs.size() > 5){
                logs.pop_back();
            }

            print(logs);


    return;
}

void print(const std::deque<std::string>& logs){
        std::cout << "Updated logs: \n";
        std::cout << "******************\n";
    // printing logs.

        for(const auto& log : logs){
            std::cout << "- " << log << '\n';
        }


    return;
}