#include <iostream>
#include <chrono>
#include <thread>
#include <stop_token>

// JThread has inbuilt mechanism that let it send a stop request.
// So.. How do we sent a stop request from a normal thread? 


// Stop source:
//              Allows us to request a stop through a separate object,
//              rather than calling jthread::request_stop().



//      A stop_source and stop_token share the same stop state.
//        The stop_source can request a stop, while the stop_token
//          allows another thread to observe that request.



void CorporateWorker(std::stop_token token);

int main(){

// creating the source which can send a stop request.
std::stop_source source;    
// creating the token which will observe the stop request. 
// and linking them to the same stop state.
std::stop_token token = source.get_token();

std::cout << "[Manager]: commands personal sla.. employee to start working.\n";

std::thread work(CorporateWorker, token);

std::this_thread::sleep_for(std::chrono::seconds(1));

std::cout << "[Manager]: commands worker to stop working.\n";

source.request_stop();

work.join();

std::cout << "[Manager]: Satisfied.\n";


    return 0;
}






void CorporateWorker(std::stop_token token){
int num = 0;

    while(!token.stop_requested()){


        std::cout << "[Worker]: working. [HOUR:" << num << "]\n";

        num++;

        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        
    }


    std::cout << "[Worker]: curses manager and clocks out.\n";
   

    return;
}





// Summary:

/*


1. stop_source:
   Used to request a stop through a shared stop state.

2. stop_token:
   Used to observe that shared stop state and check whether
   a stop has been requested.

3. source.get_token():
   Gives us a stop_token associated with the source's stop state.

Using stop_source:

A normal std::thread can use cooperative cancellation even
though std::thread has no built-in stopping mechanism.

The thread itself doesn't know about stop_source, It simply receives a stop_token and checks it.

The stop_source requests the stop, while the stop_token allows the worker to observe the request.


[END].

*/
