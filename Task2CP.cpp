#include<iostream>
using namespace std;
float calculateAvg(float,float,float,float,float, float);
string calculateGrade(float);
main()
{
    string name, grade;
    float eng, math, chem, science, bio, percent;
    cout<<" Enter strudent name: ";
    cin>> name;
    cout<<" Enter marks for English: ";
    cin>> eng;
    cout<<" Enter marks for Maths: ";
    cin>> math;
    cout<<" Enter marks for Chemistry: ";
    cin>> chem;
    cout<<" Enter marks for Social Science: ";
    cin >> science;
    cout<<" Enter marks for Biology: ";
    cin>> bio;

    percent = calculateAvg(eng,math,chem,bio,science,percent);
    grade = calculateGrade(percent);

    cout<<"Student Name: " << name << endl;
    cout<<"Percentage: " << percent << "%" << endl;
    cout<<"Grade: " << grade << endl;


}
float calculateAvg(float eng, float math, float chem, float science, float bio, float percent)
{
    float avg;
    avg = (eng+math+bio+chem+science);
    percent = avg * 0.2;
    return percent;
}
string calculateGrade(float percent)
{

    if(percent >= 90 && percent < 100)
    {
        return "A+";
    }
    if(percent >= 80 && percent < 90)
    {
        return "A";
    }
    if(percent >= 70 && percent < 80)
    {
        return "B+";
    }
    if(percent >= 60 && percent < 70)
    {
        return "B";
    }
    if(percent >= 50 && percent < 60)
    {
        return "C";
    }
    if(percent >= 40 && percent < 50)
    {
        return "D";
    }
    if(percent < 40)
    {
        return "F";
    }

}