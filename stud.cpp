/*1. WAP to get and display 5 Students information using
encapsulation by including below mentioned
attributes:
 stu_id
 stu_name
 stu_age
 stu_course
 stu_email
 stu_city
 stu_college*/
 
 #include<iostream>
 using namespace std;
 
 class student{
 int stu_id;
 char stu_name;
 int stu_age;
 char stu_course;
 char stu_email;
 char stu_city;
 char stu_college;
 	public:
 	void info(){
 		cout<<"enter the stu_id  :"<<endl;
 		cin>>stu_id;
 		
 		cout<<"enter the stu_name  :"<<endl;
 		cin>>stu_name;
 		
 		
 		cout<<"enter the stu_age :"<<endl;
 		cin>>stu_age;
 		
 		
 		cout<<"enter the stu_course :"<<endl;
 		cin>>stu_course;
 		
 		
 		cout<<"enter the stu_email  :"<<endl;
 		cin>>stu_email;
 		
 		
 		cout<<"enter the stu_city  :"<<endl;
 		cin>>stu_city;
 		
 		
 		cout<<"enter the stu_college :"<<endl;
 		cin>>stu_college;
 		
	 }
 };
 
 
 main(){
 	 student s;
 	 s.info();
 }
 
