#include <iostream>
using namespace std;

int main() {
    double examScore = 0;
    double midsemScore = 0;

    cout << "Hello, Please Enter Your Mid-semester Score: ";
    cin>>midsemScore;

    cout << "Hello, Please Enter Your Exam Score: ";
    cin>>examScore;


    double totalScore = examScore + midsemScore;



    if(totalScore >= 70){
        cout << "Congratulations you had an A!"<<endl;
    }else if(totalScore >= 60){
        cout << "Nice work you had a B!"<<endl;
    } else if (totalScore >= 50){
        cout << "Good Job, you had a C"<< endl;
    }else if (totalScore >= 40){
        cout << "Lucky you, you had a D"<<endl;
    } else{
        cout << "Sorry you had a F"<< endl;
    }
    return 0;
}
