#include<iostream>
#include<fstream>
using namespace std;
int main(){
int first;
fstream izzat;
izzat.open("test.txt");
if(izzat.is_open()){
    int size;
while(izzat>>size){
    int sum=0;
    int value;
    for(int i=0;i<size;i++){
        izzat>>value;
        sum+=value;
    }
        double average = double(sum) / size;
        cout << "Average of group: " << average << endl;
}
izzat.close();
}
else{
    cout<<"the program did not open"<<endl;
}

}