#include <iostream>
#include <iomanip>




// with std::precision, you can limit the number of significant digits in a number.
// with using std::fixed alongside it- you can make it so it deliberately only counts the significant digits after the decimal place.




int main(){
    float number = 123456.789789;
    std::cout << std::fixed << std::setprecision(3) << number;

    // so with this, we should only get the output- 123456.789


    return 0;
}