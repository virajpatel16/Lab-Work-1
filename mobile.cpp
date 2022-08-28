/*2. WAP to get and display 5 Customers
information using encapsulation by including
below mentioned attributes:
- cust_id
- cust_name
- cust_age
- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
- cust_mobile_number
- cust_city
- cust_simcard_validity (in years)*/
 
 #include<iostream>
 using namespace std;
 
 class customer{
int cust_id;
 char cust_name;
int  cust_age;
 char cust_telecome_brand_name //(like Jio, Airtel, Vi, etc.) ;
 int cust_mobile_number;
char cust_city;
 int cust_simcard_validity //(in years);
 
 	public:
 	void info(){
 		cout<<"enter the cust_id :"<<endl;
 		cin>>cust_id;
 		
 		cout<<"enter the cust_name  :"<<endl;
 		cin>>cust_name;
 		
 		
 		cout<<"enter the cust_age :"<<endl;
 		cin>>cust_age;
 		
 		
 		cout<<"enter the cust_telecome_brand_name :"<<endl;
 		cin>>cust_telecome_brand_name;
 		
 		
 		cout<<"enter the cust_mobile_number  :"<<endl;
 		cin>>cust_mobile_number;
 		
 		
 		cout<<"enter the cust_city  :"<<endl;
 		cin>>cust_city;
 		
 		
 		cout<<"enter the cust_simcard_validity :"<<endl;
 		cin>>cust_simcard_validity;
 		
	 }
 };
 
 
 main(){
    	
 	 customer c;
 	 c.info();
 }
 
