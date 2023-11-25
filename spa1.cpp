#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

void myPayment(double room_price,double total,double priceR,double priceT,double priceM,double discount,double final_total,double final_discount,string name,string hpnum,string membership,string room_type,string treatment,int cust_id,int day,int month,int year)
{
	
  
  double tax = 0;
  total = 0.0;
  final_discount = 0.0;
  
  total = priceR + priceT + priceM;
  tax = total * 0.1;
  final_total = tax + total;
  
  

    if (membership == "yes" || membership == "Yes")
    {
    	cout << "\nPlease enter your member ID : ";
    	cin >> cust_id;

    	cout << "\nWe will give you 20% discount " << endl;
    	
     	discount = (final_total*20) / 100;
    	final_discount = final_total - discount;
   	}
   	
   	
    else if (membership == "no" || membership == "No")
    {
        cout << "The price is still the same." << endl;
        discount = 0 ;
        final_discount = final_total - discount;
    }
    
    else 
    {
    	goto start;
	}
	
    
   system("pause");
   system("cls");
	
   system("color B");
   start:
   cout << "\t\t\t\t**************************\n" << endl;
   cout << "\t\t\t\t    Escape Reality Spa " << endl;
   cout << "\n\t\t\t\t************************" << endl << endl;
   cout << "Name : " << name << endl;
   cout << "Phone Number : " << hpnum << endl << endl;
   cout << "Room \t\t\t: " << room_type << endl;
   cout << "Treatment you choose\t: " << treatment << endl;
   cout << "Booking date \t\t: " << day <<"/"<< month <<"/"<< year << endl;
   cout << fixed << showpoint;
   cout << "Treatment price \t: RM " << setprecision(2) << priceT << endl;
   cout << "Lounge fee \t\t: RM " << setprecision(2) << priceR << endl;
   cout << "Membership discount \t: RM " << setprecision(2) << discount << endl;
   cout << "Additional fees \t: RM " << setprecision(2) << priceM << endl;
   cout << "Service tax (10%)\t: RM " << setprecision(2) << tax << endl;
   cout << "Final Total \t\t: RM " << setprecision(2) << final_discount << endl;
   cout << "\nThank you for booking with us! Enjoy your treatment!" << endl << endl;
   cout << "For more information, contact us at 019-9843760 or visit our instagram @EscapeRealitySpa" << endl;

   fstream myfile;
   myfile.open ("receipt.txt");
   myfile << "\t\t\t\t************************\n" << endl;
   myfile << "\t\t\t\t   Escape Reality Spa " << endl;
   myfile << "\n\t\t\t\t**********************" << endl << endl;
   myfile << "Name :" << name << endl;
   myfile << "Phone Number :" << hpnum << endl << endl;
   myfile << "Room \t\t\t: " << room_type << endl;
   myfile << "Treatment you choose\t: " << treatment << endl;
   myfile << "Booking date \t\t: " << day <<"/"<< month <<"/"<< year << endl;
   myfile << fixed << showpoint;
   myfile << "Treatment price \t: RM " << setprecision(2) << priceT << endl;
   myfile << "Lounge fee \t\t: RM " << setprecision(2) << priceR << endl;
   myfile << "Additional fees \t: RM" << setprecision(2) << priceM << endl;
   myfile << "Service tax (10%)\t: RM" << setprecision(2) << tax << endl;
   myfile << "Final Total \t\t: RM" << setprecision(2) << final_discount << endl << endl;
   myfile << "\nThank you for booking with us! Enjoy your treatment!" << endl;
   myfile << "For more information, contact us at 019-9843760 or visit our instagram @EscapeRealitySpa" << endl;

  myfile.close();


}


int main()
{
	system("color 6");
	float priceT;
	double total = 0;
    double room_price, priceM, priceR, discount, final_total, final_discount;
	string membership, hpnum, name, room_type;
    int cust_id, day, month, year, room;
    
    start:
    cout << "\n\t\t\t\t***************************";
    cout << "\n\t\t\t\t   SPA BOOKING SERVICE ";
    cout << "\n\t\t\t\t      * MAIN MENU *";
    cout << "\n\t\t\t\t***************************";

    cout << "\n\nEnter the session date: "<< endl;
    cin >> day >> month >> year;
    cout << day <<"/"<< month <<"/"<< year << endl;
    
    system("cls");

	cin.ignore();
    cout << "\nEnter your name" << endl;
    getline(cin,name);
    
    cout << "\nEnter your phone number" << endl;
    cin >> hpnum;
    
    system("cls");
    
    cout << "\n\nAVAILABLE TREATMENT " << endl;
	cout << "\n1 - Facial" << endl;
    cout << "2 - Manicure" << endl;
    cout << "3 - Pedicure" << endl;
    cout << "4 - Hair cut" << endl;
    cout << "5 - Hair wash"<< endl;
    
    
    int code;
    cout << "\nPlease choose treatment that you want : ";
    cin >> code;
    
    string treatment ;
    switch (code)
    {
        case 1:
        priceT = 200;
        treatment = "Facial";
        break;
        case 2:
        priceT = 100;
        treatment = "Manicure";
        break;
        case 3:
        priceT = 100;
        treatment = "Pedicure";
        break;
        case 4:
        priceT = 50;
        treatment = "Hair cut";
        break;
        case 5:
        priceT = 60;
        treatment = "Hair wash";
    }
    
     if (code == 1 || code == 2 || code == 3 || code == 4 || code == 5)
     {
     	 cout << "\nYou have selected the treatment that you want : " << treatment << endl;
	 }
	 else
	 {
	 	cout << "ERROR!! The code is invalid." << endl;
	 	system("pause");
        system("cls");
	 	goto start;
	 }
     	
   
    cout << "\n\nChoose your preferred comfort" << endl;
    cout << "\nPress '1' for Standard Lounge" << endl;
    cout << "Press '2' for Private Lounge\n" << endl;
    cin >> room;
    
    if (room == 1)
  {
      room_type ="Standard Lounge";
      {priceR = 0;}
  }
  else if (room == 2)
  {
      room_type="Private Lounge";
	  {priceR += 50;}
  }
  else
  {
  	goto start;
  }
    
    system("cls");
    
    string add, massage;
    cout << "\nDo you want an addition of any other services?  (yes or no) : " << endl;
    cin >> add;
    
if (add == "yes" || add == "Yes")
{
    cout << "\nWould you like a massage session? (yes/no) : " << endl;
    cin >> massage;

	if(massage == "yes" || massage == "Yes")
	{
    priceM += 100;
    cout << "\nThe price for 1 massage session is RM "<< priceM <<"." << endl;
	}
    else if (massage == "no" || massage == "No")
    {
    priceM = 0; 
	}
	else
	{
		goto start;
	}
}
   
else if ( add == "no" || add == "No")
{
	priceM = 0; 
  	cout << "There's no additional service added." << endl;
}

else
{
	goto start;
}


	cout << "\nDo you have our membership?  (yes/no) :" << endl;
    cin >> membership;
    
	myPayment(room_price, total, priceR, priceT, priceM, discount, final_total, final_discount, name, hpnum, membership, room_type, treatment, cust_id, day, month, year);


	return 0;
}
