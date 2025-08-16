#include<iostream>
#include<cctype>
#include <string>
using namespace std;

void grading(int score){
    if(score >= 80){
        cout << "Grade A";
    }
    else if(score >=60 && score <80){
        cout << "Grade B";
    }
    else if (score >= 50 && score < 60){
        cout << "Grade C";
    }
    else{
        cout << "Fail";
    }
}

int main(){
    int score;
    cout << "What is the score ?";
    cin >> score;

    if(cin.fail()){
        cout << "The input is not an integer";
    }
    else{
       
        if(0< score && score > 100){
            main();
        }
        else{
            grading(score);
        }

       return 0;
    }

    

    

    
}