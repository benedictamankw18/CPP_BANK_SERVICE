#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <windows.h>
#include <regex>
#include <regex>

using namespace std;

#ifdef _WIN32
#include <cstdlib>
	void clearConsole(){
	system("cls");
	}
#elif __linux__
	#include <cstdlib>
	void clearConsole(){
		system("clear");
	}
#elif __Apple__
	#include <cstdlid>
	void clearConsole(){
		system("clear");
	}
#else
	void clearConsole(){
		//Unsupported platform
	}
#endif

bool isEmail(const string& input){
		regex pattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
		return regex_match(input, pattern);
		}
		
class Bank{
	private:
	
	public:
	string Create_Account;
	double Transfer_Money;
	double Airtime_And_Bundle;
	string Personal_Detail;
	int Change_Pin;
	int Pin;
	int ConfirmPin;
	double Wallet;
	int Options;
	string First_Name;
	string Second_Name;
	int Age;
	long int Phone_Number;
	string Address1;
	string Address2;
	string Email;
	string Mother_Name;
	long int Mother_Number;
	string Father_Name;
	long int Father_Number;
	string Wife_Name;
	long int Wife_Number;
	int Number_Children;
	long int ConfirmNumber;
	double Amount;	
	int TransferMoneyOptions;
	int MoneyTransferOptions;
	int AirtimeAndBundleOptions;
	string Kins;
	long int Kinsnumber;
	int count=0;
	string Convecter;
	
	void Option(){	
	try{
	cout<<"\n Welcome to E-BANK";
	cout<<"\n 1.Create Account"
		<<"\n 2.Transfer Money"
		<<"\n 3.Airtime and Bundle"
		<<"\n 4.Personal Detail"
		<<"\n 5.Change Pin"
		<<"\n 6.Wallet"
		<<"\n 0.Close \n";
	cout<<"\n Enter the option: ";
	cin >>Options;
}
catch(...){
	cout<<"\n "<<Options<<" is not an Option";
}
}

	void Personaldetail(){
			try{
			cout<<"\n Create Account";
			cout<<"\n Personal Details";
			bool checker=true;
			while (checker){
			cout<<"\n Enter your First Name: ";
			cin >> First_Name;
			count = First_Name.length();
			if(count<3){
				cout<<"Check the Name again";
			}
			else{
				checker = false;
			}
			}
			ofstream FirstName("../DatabaseFile/FirstName.txt");
			if(FirstName.is_open()){
				FirstName<<First_Name<<endl;
			}
			FirstName.close();
			checker=true;
			while (checker){
			cout<<"\n Enter your Last Name: ";
			cin>>Second_Name;
			count = Second_Name.length();
			if(count<3){
				cout<<"Check the Name again";
			}
			else{
				checker = false;
			}
			}
			ofstream SecondName("../DatabaseFile/SecondName.txt");
			if(SecondName.is_open()){
				SecondName<<Second_Name<<endl;
			}
			SecondName.close();
			try{
			checker = true;
			while(checker){
			cout<<"\n Enter your Age: ";
			cin>> Convecter;
			try {
	        Age = stoi(Convecter);
	        checker = false;
	   		} catch (const invalid_argument& e) {
	        cout << "Invalid input: not an integer." << endl;
	    	} catch (const out_of_range& e) {
	        cout << "Invalid input: out of range." << endl;
			}	
		}
			ofstream AgeFile("../DatabaseFile/Age.txt");
			if(AgeFile.is_open()){
				AgeFile<<Age<<endl;
			}
			AgeFile.close();
			}
		catch(int a){
			cout<<"2222  "<<a;
		}
			bool phoneNumberCheck=true;
			while (phoneNumberCheck){
				cout<<"\n Enter your Phone Number 233(0): ";
				cin >>Convecter;
				try{
					Phone_Number =stoi(Convecter);
				}
				catch(const invalid_argument& e){
					cout<<"Invalid input: Only numbers"<<endl;
				}
				catch (const out_of_range& e) {
	        		cout << "Invalid input: out of range." << endl;
				}
					if(Phone_Number>=200000000 && Phone_Number<=999999999){
						phoneNumberCheck=false;
					}
			}
			ofstream Phone("../DatabaseFile/PhoneNumber.txt");
			if(Phone.is_open()){
				Phone<<Phone_Number<<endl;
			}
			Phone.close();
			
			checker=true;
			while (checker){
			cout<<"\n Enter your first Address: ";
			cin>>Address1;
			count = Address1.length();
			if(count<3){
				cout<<"Check the address again";
			}
			else{
				checker = false;
			}
			}
			ofstream Address("../DatabaseFile/Address.txt");
			if(Address.is_open()){
				Address<<Address1<<endl;
			}Address.close();
			checker=true;
			while (checker){
			cout<<"\n Enter your second Address: ";
			cin>>Address2;
			count = Address2.length();
			if(count<3){
				cout<<"Check the 333address again";
			}
			else{
				checker = false;
			}
			}
			ofstream AddressNext("../DatabaseFile/Address.txt", ios::app);
			if(AddressNext.is_open()){
				AddressNext<<Address2<<endl;
			}
			AddressNext.close();
		checker=true;
		while (checker){
		cout<<"\n ENTER A VALID EMAIL ADDRESS PLEASE ";
		cout<<"\n Enter your Email Address: ";
			cin>>Email;
		if(isEmail(Email)){
			cout<<"\n Valid email "<<Email<<endl;
			checker=false;
		}else{
			cout<<"\n Invalid email "<<Email<<endl;
		}	
	}
			ofstream EmailFile("../DatabaseFile/EmailFile.txt");
			if(EmailFile.is_open()){
				EmailFile<<Email<<endl;
			}
			EmailFile.close();
			checker=true;
			while (checker){
			cout<<"\n Enter your Next of Kins name: ";
			cin>>Kins;
			count = Kins.length();
			if(count<3){
				cout<<"Check the Name again";
			}
			else{
				checker = false;
			}
			}
			ofstream KinsFile("../DatabaseFile/KinsFile.txt");
			if(KinsFile.is_open()){
				KinsFile<<Kins<<endl;
			}
			KinsFile.close();
			phoneNumberCheck=true;
			while (phoneNumberCheck){
			cout<<"\n Enter your Next of Kins phone number: ";
			cin>>Convecter;
			try{
				Kinsnumber = stoi(Convecter);
			}
			catch(const invalid_argument& e){
				cout<<"Invalid input: Only number"<<endl;
			}
			catch(const out_of_range& e){
				cout<<"Invalid input: Out of range"<<endl;
			}
			if(Kinsnumber>=200000000 && Kinsnumber<=999999999){
						phoneNumberCheck=false;
					}	}
			ofstream KinsnumberFile("../DatabaseFile/KinsnumberFile.txt");
			if(KinsnumberFile.is_open()){
				KinsnumberFile<<Kinsnumber<<endl;
			}
			else{
				cout<<"Can't save  \n file is in used\n";
			}
			KinsnumberFile.close();
		
	}
	catch(...){
		cout<<"Invalid input";
	}
			}
	
	void FamilyDetail(){

			try{
			cout<<"\n Enter your Mother's Name: ";
			cin>>Mother_Name;
			ofstream MotherName("../DatabaseFile/Mother's Name.txt");
			if(MotherName.is_open()){
				MotherName<<Mother_Name<<endl;
			}
			MotherName.close();
			bool phoneNumberCheck=true;
			while (phoneNumberCheck){
			cout<<"\n Enter your Mother's Number: ";
			cin>>Convecter;
			try{
				Mother_Number = stoi(Convecter);
			}
			catch(const invalid_argument& e){
				cout<<"Invalid input: Only number"<<endl;
			}
			catch(const out_of_range& e){
				cout<<"Invalid input: Out of range"<<endl;
			}
				if(Mother_Number>=200000000 && Mother_Number<=999999999){
						phoneNumberCheck=false;
					}
			}
			ofstream MotherNumber("../DatabaseFile/MotherNumber.txt");
			if(MotherNumber.is_open()){
				MotherNumber<<Mother_Number<<endl;
			}
			MotherNumber.close();
			cout<<"\n Enter your Father's Name: ";
			cin>>Father_Name;
			ofstream FatherName("../DatabaseFile/Father's Name.txt");
			if(FatherName.is_open()){
				FatherName<<Father_Name<<endl;
			}
			FatherName.close();
			phoneNumberCheck=true;
			while (phoneNumberCheck){
			cout<<"\n Enter your Father's Number: ";
			cin >> Convecter;
			try{
				Father_Number = stoi(Convecter);
			}
			catch(const invalid_argument& e){
				cout<<"Invalid input: Only number"<<endl;
			}
			catch(const out_of_range& e){
				cout<<"Invalid input: Out of range"<<endl;
			}
				if(Father_Number>=200000000 && Father_Number<=999999999){
						phoneNumberCheck=false;
					}
		}
			ofstream FatherNumber("../DatabaseFile/FatherNumber.txt");
			if(FatherNumber.is_open()){
				FatherNumber<<Father_Number<<endl;
			}
			FatherNumber.close();
			bool RelationshipCheck= true;
			while (RelationshipCheck){
				
			cout<<"\n Relationship Details";
			cout<<"\n 1. Couple";
			cout<<"\n 2. Single";
			cout<<"\n Enter Options: ";
			cin >> Convecter;
			Options=0;
			try{
				Options = stoi(Convecter);
			}	
			catch(const invalid_argument& e){
				cout<<"Invalid input: Only number"<<endl;
			}
			catch(const out_of_range& e){
				cout<<"Invalid input: Out of range"<<endl;
			}
			
			if(Options ==1){
				ofstream Relation("../Database/Relationship.txt");
				if(Relation.is_open()){
					Relation<<"Couple "<<endl;
				}
				Relation.close();
				cout<<"\n Enter your Wife's Name: ";
				cin>>Wife_Name;
					ofstream WifeName("../DatabaseFile/WifeName.txt");
					if(WifeName.is_open()){
						WifeName<<Wife_Name<<endl;
					}
					WifeName.close();
					phoneNumberCheck=true;
					while (phoneNumberCheck){	
						cout<<"\n Enter your Wife's Number: ";
						cin >> Convecter;
						try{
						Wife_Number = stoi(Convecter);
						}
						catch(const invalid_argument& e){
							cout<<"Invalid input: Only number"<<endl;
						}
						catch(const out_of_range& e){
							cout<<"Invalid input: Out of range"<<endl;
						}
							if(Wife_Number>=200000000 && Wife_Number<=999999999){
							phoneNumberCheck=false;
							}
					}
						RelationshipCheck=false;			
			}
			else if(Options ==2){
				ofstream Relation("../Database/Relationship.txt");
				if(Relation.is_open()){
					Relation<<"Single "<<endl;
				}
				Relation.close();
				RelationshipCheck=false;
			}
			else{
				cout<<"Out of range \n";
				RelationshipCheck=true;
			}
		}
		ofstream WifeNumber("../DatabaseFile/WifeNumber.txt");
				if(WifeNumber.is_open()){
				WifeNumber<<Wife_Number<<endl;
				}
				WifeNumber.close();
				bool checker =true;
				while(checker){
			cout<<"\n Enter the number of your Children: ";
			cin >> Convecter;
			try{
				Number_Children = stoi(Convecter);
				checker = false;
			}
			catch(const invalid_argument& e){
				cout<<"Invalid input: Only number"<<endl;
			}
			catch(const out_of_range& e){
				cout<<"Invalid input: Out of range"<<endl;
			}
		}
				ofstream ChildrenNumber("../DatabaseFile/NumberOfChildren.txt");
							if(ChildrenNumber.is_open()){
								ChildrenNumber<<Number_Children<<endl;
							}
							ChildrenNumber.close();
					
					checker =true;
					while(checker){		
			cout<<"\n Enter the pin: ";
			cin >> Convecter;
			try{
				Pin = stoi(Convecter);
				string len = to_string(Pin);
				count= len.length();
				if(count==4){
					checker=false;
				}else{
					cout<<"4 digit, please. \n";
				}
				
				
			}
			catch(const invalid_argument& e){
				cout<<"Invalid input: Only number"<<endl;
			}
			catch(const out_of_range& e){
				cout<<"Invalid input: Out of range"<<endl;
			}	}
			bool PinCheck=true;
			while (PinCheck){
			cout<<"\n Confirm the pin: ";
			cin >> Convecter;
			try{
				ConfirmPin = stoi(Convecter);
			}
			catch(const invalid_argument& e){
				cout<<"Invalid input: Only number"<<endl;
			}
			catch(const out_of_range& e){
				cout<<"Invalid input: Out of range"<<endl;
			}
			if(ConfirmPin==Pin){
				PinCheck=false;
			}else{
				cout<<"Not the same \n";
			}
		} 
			ofstream PIN("../DatabaseFile/PIN.txt");
				if(PIN.is_open()){
					PIN<<Pin<<endl;
					cout<<"Account created successful";
				}
				PIN.close();
}
catch(...){
	cout<<"Invalid input";
}
		}
	
	void TransferMoney(){
		cout<<"\n Transfer Money";
		cout<<"\n 1.Mobile Transfer"
			<<"\n 2.Bank Account"
			<<"\n 3.Withdrawal \n"
			<<" 0.Back \n";
		cout<<"\n Enter option: ";
		cin>>TransferMoneyOptions;
	}
	
	void AirtimeAndBundle(){
		cout<<"\n Airtime and Bundle ";
		cout<<"\n 1.MTN"
			<<"\n 2.AirtelTigo"
			<<"\n 3.Vodafone \n"
			<<" 0.Back \n";
			cout<<"\n Enter option: ";
			cin>>AirtimeAndBundleOptions;
	}
	
	void MoneyTransfer(){
		cout<<"\n Money Transfer ";
		cout<<"\n 1.MTN"
			<<"\n 2.AirtelTigo"
			<<"\n 3.Vodafone \n"
			<<" 0.Back \n";
			cout<<"\n Enter option: ";
			cin>>MoneyTransferOptions;
	}
	
	void MTNTransferMoney(){
					cout<<"\n MTN \n";
					bool phoneNumberCheck=true;
					bool phoneNumber=true;	
					while (phoneNumber){
						while (phoneNumberCheck){	
						cout<<"\n Enter your the number 233(0): ";
						cin >> Phone_Number;
						if(Phone_Number>=200000000 && Phone_Number<=999999999){
								phoneNumberCheck=false;
							}		
					}
					cout<<"Confirm the number 233(0): ";
					cin >> ConfirmNumber;
					if(Phone_Number==ConfirmNumber){
						phoneNumber=false;
					}else{cout<<"Dont match";
				}	
				}
				cout<<"\n Enter the amount: ";
				cin>>Amount;
				cout<<"\n Enter pin: ";
				cin>>Pin;
				string line;
				ifstream PIN("../DatabaseFile/PIN.txt");
				while(getline(PIN, line)){
					int num = stoi(line);
					if(num==Pin){
						cout<<"Transfer successful";
					}	else{
							cout<<"Incorrect pin";
						}
				}
				PIN.close();
				
		}
		
	void AirtelTigoTransferMoney(){
					cout<<"\n AirtelTigo \n";
					bool phoneNumberCheck=true;
					bool phoneNumber=true;	
					while (phoneNumber){
						while (phoneNumberCheck){
						cout<<"\n Enter your the number 233(0): ";
						cin >> Phone_Number;
						if(Phone_Number>=200000000 && Phone_Number<=999999999){
								phoneNumberCheck=false;
							}		
				}
					cout<<"Confirm the number 233(0): ";
					cin >> ConfirmNumber;
					if(Phone_Number==ConfirmNumber){
						phoneNumber=false;
					}else{cout<<"Dont match";
				}	
				}
				cout<<"\n Enter the amount: ";
				cin>>Amount;
				cout<<"\n Enter pin: ";
				cin>>Pin;
				string line;
				ifstream PIN("../DatabaseFile/PIN.txt");
				while(getline(PIN, line)){
					int num = stoi(line);
					if(num==Pin){
						cout<<"Transfer successful";
					}else{
							cout<<"Incorrect pin";
						}
				}
				PIN.close();
		}
		
		void VodafoneTransferMoney(){
					cout<<"\n Vodafone \n";
					bool phoneNumberCheck=true;
					bool phoneNumber=true;	
					while (phoneNumber){
						while (phoneNumberCheck){	
						cout<<"\n Enter your the number 233(0): ";
						cin >> Phone_Number;
						if(Phone_Number>=200000000 && Phone_Number<=999999999){
								phoneNumberCheck=false;
							}else{cout<<"Dont match";
				}			
				}
					cout<<"Confirm the number 233(0): ";
					cin >> ConfirmNumber;
					if(Phone_Number==ConfirmNumber){
						phoneNumber=false;
					}
				}
				cout<<"\n Enter the amount: ";
				cin>>Amount;
				cout<<"\n Enter pin: ";
				cin>>Pin;
				string line;
				ifstream PIN("../DatabaseFile/PIN.txt");
				while(getline(PIN, line)){
					int num = stoi(line);
					if(num==Pin){
						cout<<"Transfer successful";
					}	else{
							cout<<"Incorrect pin";
						}
				}
				PIN.close();
			}
	
		void BankAccount(){
			float BankAccountNumber;
			float ConfirmBankAccountNumber;
			cout<<"\n Enter Bank account number: ";
			cin>>BankAccountNumber;
			bool BankAccountNumberCheck=true;
			while (BankAccountNumberCheck){
			cout<<"\n Confirm Bank account number: ";
			cin>>ConfirmBankAccountNumber;
			if(ConfirmBankAccountNumber==BankAccountNumber){
				BankAccountNumberCheck=false;
			}
		}
		cout<<"\n Enter the Amount: ";
		cin>>Amount;
		cout<<"\n Enter the pin: ";
		cin>>Pin;
		string line;
				ifstream PIN("../DatabaseFile/PIN.txt");
				while(getline(PIN, line)){
					int num = stoi(line);
					if(num==Pin){
						cout<<"Transfer successful";
					}else{
							cout<<"Incorrect pin";
						}
				}
				PIN.close();
		}
		void AgentAccount(){
			float AgentAccountNumber;
			float ConfirmAgentAccountNumber;
			cout<<"\n Enter Agent account number: ";
			cin>>AgentAccountNumber;
			bool AgentAccountNumberCheck=true;
			while (AgentAccountNumberCheck){
			cout<<"\n Confirm Agent account number: ";
			cin>>ConfirmAgentAccountNumber;
			if(ConfirmAgentAccountNumber==AgentAccountNumber){
				AgentAccountNumberCheck=false;
			}
		}
		cout<<"\n Enter the Amount: ";
		cin>>Amount;
		cout<<"\n Enter the pin: ";
		cin>>Pin;
				string line;
				ifstream PIN("../DatabaseFile/PIN.txt");
				while(getline(PIN, line)){
					int num = stoi(line);
					if(num==Pin){
						cout<<"Transfer successful";
					}else{
							cout<<"Incorrect pin";
						}
				}
				PIN.close();
		}
		void PersonalDetail(){
			cout<<"\n Enter the pin: ";
			cin>>Pin;
				string line;
				ifstream PIN("../DatabaseFile/PIN.txt");
				while(getline(PIN, line)){
					int num = stoi(line);
					if(num==Pin){
						cout<<"\n\n\n\n\n";
				string Fname;
				string fname;
				ifstream FirstName("../DatabaseFile/FirstName.txt");
				while(getline(FirstName, fname)){
					for(char c : fname){
						Fname+=toupper(c);
					}
				cout<<"First Name: \t"<<Fname<<"\n"<<endl;
				}
				FirstName.close();
				string Sname;
				string sname;
				ifstream SecondName("../DatabaseFile/SecondName.txt");
				while(getline(SecondName, sname)){
					for(char c : sname){
						Sname+=toupper(c);
					}
				cout<<"Second Name: \t"<<Sname<<"\n"<<endl;
				}
				SecondName.close();
				string age;
				ifstream AGE("../DatabaseFile/Age.txt");
				while(getline(AGE, age)){
				cout<<"Age: \t"<<age<<"\n"<<endl;
				}
				AGE.close();
				string email;
				ifstream Email("../DatabaseFile/EmailFile.txt");
				while(getline(Email, email)){
				cout<<"Email: \t"<<email<<"\n"<<endl;
				}
				Email.close();
				string phone;
				ifstream Phone("../DatabaseFile/PhoneNumber.txt");
				while(getline(Phone, phone)){
				cout<<"Phone Number: \t"<<phone<<"\n"<<endl;
				}
				Phone.close();
				string address1;
				int num =1;
				ifstream Address1("../DatabaseFile/Address.txt");
				if(Address1.is_open()){
					int linecount =0;
					while(getline(Address1, address1)&& linecount < num){
				linecount++;
						if(linecount==1){
							cout<<"First Address: \t"<<address1<<"\n"<<endl;
							break;
						}
				}
			}
				Address1.close();
				string address2;
				int num2 =2;
				ifstream Address2("../DatabaseFile/Address.txt");
				if(Address2.is_open()){
					int linecount2 =0;
					while(getline(Address2, address2)&& linecount2 < num2){
				linecount2++;
						if(linecount2==2){
							cout<<"Second Address: \t"<<address2<<"\n"<<endl;
							break;
						}
				}
				}	
				Address2.close();	
						cout<<"Thank You For Your Service \n\n\n\n\n\n";
					}else{
							cout<<"Incorrect pin";
					}
				}
					PIN.close();
					
		}

		void ChangePin(){
			cout<<"Enter Previous pin: ";
			cin>>Pin;
			string line;
				ifstream PIN("../DatabaseFile/PIN.txt");
				while(getline(PIN, line)){
					int num = stoi(line);
					if(num==Pin){
					int ConfirmPin;
					cout<<"Enter New pin: ";
					cin>>Pin;
					cout<<"Confirm pin: ";
					cin>>ConfirmPin;
					if(ConfirmPin==Pin){
						ofstream NewPin("../DatabaseFile/PIN.txt");
						if(NewPin.is_open()){
							NewPin<<Pin<<endl;
						}
						cout<<"Operation successful";
					}
					else{
						cout<<"Failed";
					}
					
							}else{
							cout<<"Incorrect pin";
						}
						}
				PIN.close();
			
		}
		
		void WalletAccount(){
			cout<<"Enter pin: ";
			cin>>Pin;
			string file;
			string line;
				ifstream PIN("../DatabaseFile/PIN.txt");
				while(getline(PIN, line)){
					int num = stoi(line);
					if(num==Pin){
					ifstream AccountFile("../DatabaseFile/AccountFile.txt");
										while(getline(AccountFile, file)){
										cout<<"Current balance: GHC"<<file
						 					<<". Avialable balance: GHC"<<file<<endl;
										}
						}
						else{
							cout<<"Incorrect pin";
						}
							}
							PIN.close();
						}
				
		

		
};

class logo{
	public:
		void Logo(){
			
			cout<<endl<<endl;
			cout<<" EEEEEEEEE      EEEEEEEEEEEE    EEEEEEEEEEE   EEEEEE        EEEE  EEEE    EEE     "<<endl;
			cout<<" EEEEEEEEE      EEEEEEEEEEEEE  EEEEEEEEEEEEE  EEEEEEE       EEEE  EEEE   EEE      "<<endl;
			cout<<" EEEE           EEEE     EEEE  EEEE     EEEE  EEEE EEEE     EEEE  EEEE  EEE       "<<endl;
			cout<<" EEEE           EEEE     EEEE  EEEE     EEEE  EEEE  EEEE    EEEE  EEEE EEE        "<<endl;
			cout<<" EEEEEEEEE EEEE EEEEEEEEEEEEE  EEEEEEEEEEEEE  EEEE   EEEE   EEEE  EEEEEEE         "<<endl;
			cout<<" EEEEEEEEE EEEE EEEEEEEEEEEEE  EEEEEEEEEEEEE  EEEE    EEEE  EEEE  EEEEEEE         "<<endl;
			cout<<" EEEE           EEEE     EEEE  EEEE     EEEE  EEEE     EEEE EEEE  EEEE EEE        "<<endl;
			cout<<" EEEE           EEEE     EEEE  EEEE     EEEE  EEEE      EEEEEEEE  EEEE  EEE       "<<endl;
			cout<<" EEEEEEEEE      EEEEEEEEEEEEE  EEEE     EEEE  EEEE       EEEEEEE  EEEE   EEE      "<<endl;
			cout<<" EEEEEEEEE      EEEEEEEEEEEE   EEEE     EEEE  EEEE        EEEEEE  EEEE    EEE     "<<endl;
				
			cout<<endl<<endl;
			cout<<" EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE"<<endl
				<<" EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE";
			cout<<endl<<endl;
		
			
		}
};

int main(){
	
		logo LOGOS;
		Bank Info;
		bool outter=true;
		bool airtimeAndBundleOptions=true;
		bool transferMoneyOptions = true;
		bool optionChecker = true;
		while(optionChecker){
		clearConsole();
		LOGOS.Logo();
		Info.Option();
		switch(Info.Options){
			case 1:
				clearConsole();
				LOGOS.Logo();
				Info.Personaldetail();
				Info.FamilyDetail();
				cout<<"\n\n Do you want to stay or leave.";
				cout<<"\n 1.Leave";
				cout<<"\n 2.Stay \n";
				int option;
				cout<<"Enter option: ";
				cin>>option;
				switch(option){
					case 1:
						cout<<"Good Bye, See you later.";
						optionChecker = false;
						outter=false;
						break;
					case 2:
						optionChecker = true;
						outter=false;
						break;
					default:
						cout<<"Sorry we closed you.";
						optionChecker = false;
						outter=false;		
				}
				break;
			case 2:
				transferMoneyOptions = true;
				while(transferMoneyOptions){
				clearConsole();
				LOGOS.Logo();
				Info.TransferMoney();	
				switch(Info.TransferMoneyOptions){
					case 1:
						clearConsole();
						LOGOS.Logo();
						Info.MoneyTransfer();
						switch(Info.MoneyTransferOptions){
							case 1:
								clearConsole();
								LOGOS.Logo();
								Info.MTNTransferMoney();
								break;
							case 2:
								clearConsole();
								LOGOS.Logo();
								Info.AirtelTigoTransferMoney();
								break;
							case 3:
								clearConsole();
								LOGOS.Logo();
								Info.VodafoneTransferMoney();
								break;
							default:
								clearConsole();
								LOGOS.Logo();
								cout<<"\n Incorrect input";		
					}
						break;
					case 2:
						clearConsole();
						LOGOS.Logo();
						Info.BankAccount();
						break;
					case 3:
						clearConsole();
						LOGOS.Logo();
						Info.AgentAccount();
						break;
					case 0:
						clearConsole();
						LOGOS.Logo();
						transferMoneyOptions = false;
						break;
					default:
						clearConsole();
						LOGOS.Logo();
						cout<<"\n Incorrect input";
				}	}
				break;
			case 3:
				airtimeAndBundleOptions = true;
				while(airtimeAndBundleOptions){
				clearConsole();
				LOGOS.Logo();
				Info.AirtimeAndBundle();
				switch(Info.AirtimeAndBundleOptions){
							case 1:
								clearConsole();
								LOGOS.Logo();
								Info.MTNTransferMoney();
								break;
							case 2:
								clearConsole();
								LOGOS.Logo();
								Info.AirtelTigoTransferMoney();
								break;
							case 3:
								clearConsole();
								LOGOS.Logo();
								Info.VodafoneTransferMoney();
								break;
							case 0:
								clearConsole();
								LOGOS.Logo();
								airtimeAndBundleOptions = false;
								break;
							default:
								clearConsole();
								LOGOS.Logo();
								cout<<"\n Incorrect input";
					}	}
				break;
			case 4:
				clearConsole();
				LOGOS.Logo();
				Info.PersonalDetail();
				optionChecker = false;
				break;
			case 5:
				clearConsole();
				LOGOS.Logo();
				Info.ChangePin();
				optionChecker = false;
				break;
			case 6:
				clearConsole();
				LOGOS.Logo();
				Info.WalletAccount();
				optionChecker = false;
				break;
			case 0:
				outter=true;
				while(outter){
				clearConsole();
				LOGOS.Logo();
				cout<<"\n Are you sure you want to close";
				cout<<"\n 1.Yes";
				cout<<"\n 2.No \n";
				int option;
				cout<<"Enter option: ";
				cin>>option;
				
				switch(option){
					case 1:
						cout<<"Good Bye, See you later.";
						optionChecker = false;
						outter=false;
						break;
					case 2:
						optionChecker = true;
						outter=false;
						break;
					default:
						cout<<"Sorry we closed you.";
						optionChecker = false;
						outter=false;		
				}
					}
				break;
			default:
				clearConsole();
				LOGOS.Logo();
				cout<<"\n Incorrect input";
		}
	
}
	return 0;
}
