#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <ctime>


using namespace std;
template <class Etype>

void method(vector <Etype> & A, int wordCount){

for(int i =1;i<wordCount-1;i++)
{

Etype temp = A[i];

for(int j = i;j>0 && temp <A[j-1];j--)
    {

        if(A[j]<=A[j-1])
        {
             A[j]=A[j-1];
             A[j-1]=temp;
        }
    }
}
}

int main()
{

    string words;
    int wordCount = 0;
    cout<<"Enter the filename for the file you wish to be sorted."<<endl;

    string input;
    cin>>input;
    ifstream textFile(input.c_str());
    vector <string> A;

while(textFile >> words){

A.push_back(words);
wordCount++;

}

clock_t begin = clock();

method(A,wordCount);

clock_t end = clock();
double elapsed_secs = double(end - begin)/ CLOCKS_PER_SEC;
cout<<elapsed_secs<<endl;



ofstream output;
 output.open("output.txt");
 for(int i=0;i<wordCount-1;i++){
    {
    cout<<A[i]<<endl;
    output << A[i] <<endl;

    }
    output.close();


}
}
















