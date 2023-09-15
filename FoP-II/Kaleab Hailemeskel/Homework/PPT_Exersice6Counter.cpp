
#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main (){
    
float temp = 0;
map <float, int> numbers;           // declaration of  map with float as it's key and int as it's value 
map <float, int> :: iterator it;    // declaration of a map iterator it

cout<<"Enter numbers: ";
    numbers.erase(-1); 
while(temp != -1){                  // -1 as a sentinel 
    cin >> temp;
    bool tag = false;


for(it = numbers .begin(); it != numbers . end(); it++ ){
    if(temp == it-> first){     // checks if there exist a map element with the same value of temp
        tag = true; break;      // breaking from the loop after tag become true
    }
}
    if(tag == true){
        int count = it -> second;   // if there exist an element in the map, count will hold the value  
        numbers.erase(it);          // then delete the element
        count++;                    
        numbers[temp] = count;      // initialize a value of count with a key of temp

        }
        else{
            numbers.insert({temp,1});   // OR if it is new to the map it will be insreted as new element
        }
    }

    numbers.erase(-1); // since -1 is a sentinel not an element of a map

    cout<<"\tNUMBERS\tCOUNT\n";
for( it = numbers.begin(); it != numbers.end(); it++){      // print map value with it's key
    cout<<"  \t"<<it -> first<<"\t"<< it -> second <<endl;

}



 return 0;
}
