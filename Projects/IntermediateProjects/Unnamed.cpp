#include <iostream>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <chrono>
#include <thread>

// stuff used:
// inv - map    [Done].
// discovered item - set [Done].
// recent actions - deque
// enemies - priority list
// loot history - vector


// general stucture: recent action -> loot history -> discover item (if not discovered) -> inventory (add or remove). 
 


// general text output func:
void TextOut(std::string text){
    for(char c : text){
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::microseconds(50));
    }
}


                // inventory using map,

class Inventory{
    std::map<std::string, int> inventory;


    public:

    void AddItem(std::string item, int num){
        if(inventory.count(item)){
            inventory[item]+= num;
        }  
        if(!inventory.count(item)){
            inventory[item] = num;
        }
    }


    void RemoveItem(std::string item, int num){
        if(inventory.count(item)){
            inventory[item]-= num;
            if(inventory[item] <= 0){
                inventory.erase(item);
                return;
            }
        }  
        if(!inventory.count(item)){
            TextOut("Item doesn't exist!\n");
        }   
    }    
};


class DiscoveredItem{
    std::set<std::string> discovery;

    public:
    
    void CheckDiscovery(std::string item){
    auto discovered = discovery.find(item);
        if(discovered == discovery.end()){
            discovery.insert(item);
        }

        else{
            return;
        }
        return;
    }    
};


class RecentActions{
std::deque<std::string> logs;

public:


void UpdateLog(std::string item){

    logs.push_front(item);
        if(logs.size() > 5){
            logs.pop_back();
        }



            // stopping here for today
}

    
};

















int main(){




    return 0;
}





