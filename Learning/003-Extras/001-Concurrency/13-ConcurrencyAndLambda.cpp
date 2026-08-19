#include <iostream>
#include <thread>
#include <chrono>



// WARNING:     YOU need to know lambda before understanding anything from this point onwards.




// we'll see how lambda can be used in concurrency.





int main(){

  int weight = 60;

  std::thread bulkup([&weight](){
      std::cout << "eating..\n";
      std::this_thread::sleep_for(std::chrono::seconds(2));
      std::cout << "Gained weight +8 kgs";
      weight+= 8;
      return;
      });



  bulkup.join();




  // it is also used in condition variables.
  //
  //
  // cv.wait(lock, []()
  // {return a}
  // );

  // it basically means to wait until the condition
  // represented by the lambda returns true.
  return 0;
}
