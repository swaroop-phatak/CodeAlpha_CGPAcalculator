#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cout<<"Enter Number of Courses"<<endl;
    cin>>n;

    vector<float> grades(n);
    vector<int> credit_hours(n);

    float totalGradePoints = 0;
    float totalCredits = 0;

    for(int i=0;i<n;i++){
        cout<<"Course "<<i+1<<": "<<endl;
        cout<<"Enter Grades :";
        cin>>grades[i];
        cout<<endl;
        cout<<"Enter Credit Hours : ";
        cin>>credit_hours[i];
        cout<<endl;

        totalGradePoints += grades[i]*credit_hours[i];
        totalCredits += credit_hours[i];
    }

    float cgpa = totalGradePoints/totalCredits;

    cout<< "\n--- Course Summary ---\n";
    for(int  i =0;i<n;i++){
        cout<<"Course "<<i+1<<" : Grade = "<<grades[i]<<"  Credit Hours = "<<credit_hours[i]<<endl;
    }

    cout<<"Total Credits : "<<totalCredits<<endl;
    cout<<"Total Grade Points : "<<totalGradePoints<<endl;
    cout<<"FINAL CGPA : "<<cgpa<<endl;
}
