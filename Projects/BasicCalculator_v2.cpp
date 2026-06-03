#include <iostream>
#include <vector>
#include <string>
#include <cmath>


using namespace std;



int main(){


    double a;
    double b;
    double result;
    
    char operation;



    cout << "*****************EDEN'S CALCULATOR V1*******************" << '\n';


    cout << "" << '\n';

    
    
    do{
        
        cout << "What do you want to do? (+ - / * %) or (q) quit" << '\n';
        
    
        cin >> operation;


        
            if(operation != '+' && operation != '-' && operation!= '/' && operation != '%' && operation != '*'){

            cout << "Please enter an operator from the operations given above" << '\n';
            
            continue;



        }









        // DO NOT REMOVE, RESULTS IN INFINITE LOOP AND CIN FAILURE

          if(operation=='q'){


            break;

        }

        // DO NOT REMOVE

        cout << "enter value for a" << '\n';
                cin >> a;
                cout << "enter value for b" << '\n';
                cin >> b;



            switch(operation){

                case '+':



                    result = a + b;

                    cout << "The sum of those two numbers is " << result << '\n';

                break;

                case '-':

                    result = a - b;
                
                    cout << "From subtracting b from a, we get " << result << '\n';


                break;

                case '/':

                    result = a/b;
                    cout << "From dividing a from b, we get " << result << '\n';

                break;

                case '*':

                    result = a*b;

                    cout << "The product of a and b is  " << result << '\n';


                break;


                case '%':

                    result = (int)a % (int) b;

                cout << "the remainder from diving a by b is " << result << '\n';
                
                break;
                
                
            }

}while(true);





    return 0;




}