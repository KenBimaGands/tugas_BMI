#include <iostream>
#include <cmath>
using namespace std;

double bmi(double height, double weight, double age, int gender){
    double person_bmi= weight /(pow(height, 2));
  if (gender = 1)
  {
      if (age >= 19)
    {
        if (person_bmi <= 18.5)
    {
        cout<<"underweight";
    } else if (person_bmi > 18.5 && person_bmi <= 24.9)
    {
        cout<<"normal";
    } else if (person_bmi >= 25 && person_bmi <= 29.9)
    {
        cout<<"overweight";
    } else if (person_bmi >= 30)
    {
        cout<<"obese";
    }
    } else {
        if (person_bmi <= 17.7)
    {
        cout<<"underweight";
    } else if (person_bmi > 17.7 && person_bmi <= 24.9)
    {
        cout<<"normal";
    } else if (person_bmi >= 25 && person_bmi <= 29.9)
    {
        cout<<"overweight";
    } else if (person_bmi >= 30)
    {
        cout<<"obese";
    };
  }
  
    } else if (gender = 2)
  {
      if (age >= 19)
    {
        if (person_bmi <= 17.8)
    {
        cout<<"underweight";
    } else if (person_bmi > 17.9 && person_bmi <= 26.1)
    {
        cout<<"normal";
    } else if (person_bmi >= 26.2 && person_bmi <= 29.9)
    {
        cout<<"overweight";
    } else if (person_bmi >= 30)
    {
        cout<<"obese";
    }
    } else {
        if (person_bmi <= 17.2)
    {
        cout<<"underweight";
    } else if (person_bmi > 17.2 && person_bmi <= 25.2)
    {
        cout<<"normal";
    } else if (person_bmi >= 25.3 && person_bmi <= 29.9)
    {
        cout<<"overweight";
    } else if (person_bmi >= 30)
    {
        cout<<"obese";
    };
  }
  
    return person_bmi;
    
}
}

void introduction(){
    double height, weight, age;
    int gender;
    cout<<"THIS IS A BMI CALCULATOR"<<endl;
    cout<<"PLEASE ANSWER THE FOLLOWING QUESTIONS"<<endl;
    cout<<endl;
    cout<<"PLEASE ENTER YOUR HEIGHT IN METERS = ";
    cin>>height;
    cout<<endl;
    cout<<"PLEASE ENTER YOUR WEIGHT IN KG = ";
    cin>>weight;
    cout<<endl;
    cout<<"PLEASE ENTER YOUR AGE = ";
    cin>>age;
    cout<<endl;
    cout<<"PLEASE ENTER YOUR GENDER"<<endl;
    cout<<"1. MALE"<<endl;
    cout<<"2. FEMALE"<<endl;
    cin>>gender;
    cout<<endl;
    bmi(height, weight, age, gender);

}

int main(){
    introduction();
}