#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

    ifstream source;
    source.open("score.txt");

    string text_score;
    double i = 0;
    double sum = 0 , sum2 = 0;
    double score , mean , sd;
    
    while(getline(source,text_score))
    {
        score = stod(text_score);
        sum = sum + score;
        sum2 = sum2 + pow(score,2);
        i++;
    }

    mean = sum / i;

    sd = sqrt((sum2 * (1/i) ) - (pow(mean,2)));

    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd;
}