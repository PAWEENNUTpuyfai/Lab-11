#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;


int main(){
	int num =0;
	float mean,sum=0,sum2=0,S;
	string text;
	ifstream source("score.txt");
	while(getline(source,text)){
		sum += stof(text);
		sum2+= pow(stof(text),2);
		num ++;
	}
	mean = sum/num;
	S = sqrt((sum2/num)-pow(mean,2));
  
  
    cout << "Number of data = "<< num << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = "<< S;
}