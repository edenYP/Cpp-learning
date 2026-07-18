#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>


using namespace std;


double CalculateBal(double incomes[], int size);


int main(){


    double incomes[] = {2, 4, 5, 6, 7, 8};

    int size; // to calculate total number of elements - reason stated at the end.

    size = sizeof(incomes)/sizeof(incomes[1]);

    double totalbalance = CalculateBal(incomes, size);

    cout << totalbalance << "$" << '\n';




}


double CalculateBal(double incomes[], int size){  // IMPORTANT CONCEPT- we are using-

    double total = 0; 

    for(int i = 0; i < size; i++){  // size here, instead of sizeof(incomes)/sizeof(double). because when passing an array to a function- it decays into a POINTER. therefore we calculated the size in the main function and passed it over.
        total += incomes[i];

    };

return total;
}