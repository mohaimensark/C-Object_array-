
#include<bits/stdc++.h>
using namespace std;

class Student
{
  public:
      int marks[5];
      float gpa;
      bool pass_status=true;

      Student(int arr[])
      {
          float sum=0;
          for(int i=0;i<5;i++)
          {
              marks[i]=arr[i];
              if(marks[i]>=80)
              {
                  sum+=5;
              }
              else if(marks[i]>=70)
              {
                  sum+=4;
              }
              else if(marks[i]>=60)
              {
                  sum+=3.5;
              }
              else if(marks[i]>=50)
              {
                  sum+=3;
              }
              else
              {
                  sum+=2.5;
              }
          }
          gpa=sum/5;
          if(sum<15)
          {
              pass_status=false;
          }
        //  cout<<gpa<<endl;
      }


};

Student* storeMarks(int num)
{
      cout<<"Provide marks for student no "<<num<<endl;
      int arr[5];
      for(int i=0;i<5;i++)
      {
          cin>>arr[i];
      }

      Student *student = new Student(arr);
      return student;
}


int main()
{
    cout<<"Number of regular student?"<<endl;
    int n;
    cin>>n;

    Student *student[n];
    for(int i=0;i<n;i++)
    {
           student[i]=storeMarks(i+1);
    }


    for(int i=0;i<n;i++)
    {
        cout<<student[i]->gpa<<endl;
        if(student[i]->pass_status)
        {
            cout<<"Pass"<<endl;
        }
        else
        {
            cout<<"Fail"<<endl;
        }
        for(int k=0;k<5;k++)
        {
            cout<<student[i]->marks[k]<<" ";
        }
    }
    return 0;
}
