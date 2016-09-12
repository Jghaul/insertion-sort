#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{

    int numbers;

    int numberCount = 0;
    cout<<"Enter the filename for the file you wish to be sorted."<<endl;

    string input;
    cin>>input;
    ifstream textFile(input.c_str());
    vector <int> numbersVector;

while(textFile >> numbers){


numbersVector.push_back(numbers);




    numberCount++;

}



for(int i =1;i<numberCount-1;i++)
{

 int temp = numbersVector[i];


    for(int j = i;j>0 && temp < numbersVector[j-1];j--)
    {

        if(numbersVector[j]<=numbersVector[j-1])
        {
             numbersVector[j]=numbersVector[j-1];
             numbersVector[j-1]=temp;
        }











    }




}
 ofstream output;
 output.open("output.txt");
for(int i=0;i<numberCount;i++)
{
cout<<numbersVector[i];

output << numbersVector[i];

}
output.close();

}





