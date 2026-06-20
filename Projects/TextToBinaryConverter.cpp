#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <limits>


using namespace std;



void ASCII(string textinput, vector<int>& ASCIIvalues);
void Binary(vector<int>& convertedtext, vector<int>& ASCIIvalues);

int main(){



do{

string textinput;
vector<int> convertedtext;
vector<int> ASCIIvalues;





cout << "what would you like to convert? or type 'q' to quit.\n";

getline(cin, textinput);

if(textinput != "q"){


ASCII(textinput, ASCIIvalues);

Binary(convertedtext, ASCIIvalues);
cout << '\n';
cout << "****************************************" << '\n';
cout << '\n';
cout << "finished\n";
}


else if(textinput == "q"){



    cout << "thanks for trying this out!";

    break;
}


}while(true);









return 0;


}




void ASCII(string textinput, vector<int>& ASCIIvalues){




    for(int j = 0; j < textinput.length(); j++){
        
        ASCIIvalues.push_back((int)textinput.at(j));


    }





}

void Binary(vector<int>& convertedtext, vector<int>& ASCIIvalues){
vector<int> binaryoutput;
int temporary;

for(int i = 0; i < ASCIIvalues.size(); i++){

    temporary = ASCIIvalues[i];
    int remainder;

    do{
        
        remainder = temporary % 2;
        temporary /= 2;

        convertedtext.push_back(remainder);

    }while(temporary > 0);

    for(int i = convertedtext.size() - 1; i >= 0; i--){ // reverses the binary numbers to get the correct values.
    binaryoutput.push_back(convertedtext[i]);
}

for(int j = 0; j < binaryoutput.size(); j++){

cout << binaryoutput[j];

}
cout << " ";

binaryoutput.clear();
convertedtext.clear();





}








}