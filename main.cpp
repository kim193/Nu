#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
class Norton_Management_Student{
    private:
    string fname[100],lname[100],Id[100],address[100],mother[100],father[100],Birthday[100];
    int phoneNumber[100];
    int n=0;
    public:
    void Add_Student(){
        cout<<"Enter first name: ";cin>>fname[n];
        cout<<"Enter last name: ";cin.ignore();getline(cin,lname[n]);
        cout<<"Enter Birthday: ";cin>>Birthday[n];
        cout<<"Enter Id: ";cin>>Id[n];
        cout<<"Enter address: ";cin>>address[n];
        cout<<"Enter phone number: ";cin>>phoneNumber[n];
        cout<<"Enter mother name: ";cin>>mother[n];
        cout<<"Enter father name: ";cin.ignore();getline(cin,father[n]);
        n++;
    }
    void Diplay_Student(){
        int width=15;
        if(n == 0){
            cout<<"No record account!\n";
            return;
        }
        for(int i=0;i<n;i++){
            cout<<left<<setw(width)<<fname[i]<<left<<setw(width)<<lname[i]<<left<<setw(width)<<Birthday[i]
            <<left<<setw(width)<<Id[i]<<left<<setw(width)<<address[i]<<left<<setw(width)<<phoneNumber[i]
            <<left<<setw(width)<<mother[i]<<left<<setw(width)<<father[i]<<endl;
        }
    }
    void Delete_Student(){
        string d_id;
        bool found = false;
        if(n ==0){
            cout<<"No record account!\n";
            return;
        }
        cout<<"Enter id to delete student: ";cin>>d_id;
        for(int i=0;i<n;i++){
            if(d_id==Id[i]){
                for(int j = 0;j < n;j++){
                    fname[j] = fname[j+1];
                    lname[j] = lname[j+1];
                    Birthday[j] = Birthday[j+1];
                    Id[j] = Id[j+1];
                    address[j] = address[j+1];
                    phoneNumber[j] = phoneNumber[j+1];
                    mother[j] = mother[j+1];
                    father[j] = father[j+1];
                    cout<<"\nStudent deleted successfully!\n";
                    found = true;
                }
            }
        }
        if(!found){
            cout<<"Student not found!\n";
        }

    }
    void Updata_Student(){
        string u_id;
        bool found = false;
        if(n == 0){
            cout<<"No record account!\n";
            return ;
        }
        cout<<"Enter id to updata student: ";cin>>u_id;
        for(int i=0;i<n;i++){
            if(u_id == Id[i]){
        cout<<"Enter first name: ";cin>>fname[i];
        cout<<"Enter last name: ";cin.ignore();getline(cin,lname[i]);
        cout<<"Enter Birthday: ";cin>>Birthday[i];
        cout<<"Enter Id: ";cin>>Id[i];
        cout<<"Enter address: ";cin>>address[i];
        cout<<"Enter phone number: ";cin>>phoneNumber[i];
        cout<<"Enter mother name: ";cin>>mother[i];
        cout<<"Enter father name: ";cin.ignore();getline(cin,father[i]);
        cout<<"\nUpdate successfully\n";
        found = true;
        return;
         }

        }
        if(!found){
            cout<<"No Student found!\n";
        }
    }
    void Search_Student(){
        int width = 15;
        string s_id;
        bool found = false;
        if(n == 0){
            cout<<"No record account!\n";
            return;
        }
        cout<<"Enter id to search student: ";cin>>s_id;
        for(int i=0;i<n;i++){
            if(s_id == Id[i]){
            cout<<left<<setw(width)<<fname[i]<<left<<setw(width)<<lname[i]<<left<<setw(width)<<Birthday[i]
            <<left<<setw(width)<<Id[i]<<left<<setw(width)<<address[i]<<left<<setw(width)<<phoneNumber[i]
            <<left<<setw(width)<<mother[i]<<left<<setw(width)<<father[i]<<endl;
            found = true;
            return;
            }
        }
        if(!found){
            cout<<"Not student found!\n";
        }
    }

};
int main(){
    Norton_Management_Student Ac;
    int choice;
    char option;
    do{
        cout<<"::Welcome to Norton Management System\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display Student\n";
        cout<<"3. Search Student\n";
        cout<<"4. Delete Student\n";
        cout<<"5. Updata Student\n";
        cout<<"6. Exit\n";
        cout<<"-------------------------\n";
        cout<<"Enter your choice: ";cin>>choice;
        switch(choice){
            case 1:{
                Ac.Add_Student();
                break;
            }
            case 2:{
                Ac.Diplay_Student();
                break;
            }
            case 3:{
                Ac.Search_Student();
                break;
            }
            case 4:{
                Ac.Delete_Student();
                break;
            }
            case 5:{
                Ac.Updata_Student();
                break;
            }
            case 6:{
                for(int r=0;r<1;r++){
                    cout<<"T";
                    Sleep(1000);
                    cout<<"h";
                    Sleep(1000);
                    cout<<"a";
                    Sleep(1000);
                    cout<<"n";
                    Sleep(1000);
                    cout<<"k";
                    Sleep(1000);
                    cout<<"y";
                    Sleep(1000);
                    cout<<"o";
                    Sleep(1000);
                    cout<<"u";
                    Sleep(1000);
                    cout<<"f";
                    Sleep(1000);
                    cout<<"o";
                    Sleep(1000);
                    cout<<"r";
                    Sleep(1000);
                    cout<<"u";
                    Sleep(1000);
                    cout<<"s";
                    Sleep(1000);
                    cout<<"i";
                    Sleep(1000);
                    cout<<"n";
                    Sleep(1000);
                    cout<<"g";
                    Sleep(1000);
                    cout<<"N";
                    Sleep(1000);
                    cout<<"o";
                    Sleep(1000);
                    cout<<"r";
                    Sleep(1000);
                    cout<<"T";
                    Sleep(1000);
                    cout<<"o";
                    Sleep(1000);
                    cout<<"n";
                    Sleep(1000);
                    cout<<"S";
                    Sleep(1000);
                    cout<<"y";
                    Sleep(1000);
                    cout<<"s";
                    Sleep(1000);
                    cout<<"T";
                    Sleep(1000);
                    cout<<"e";
                    Sleep(1000);
                    cout<<"m";
                    Sleep(1000);
                    
                }
                exit(0);
            }
            default:{
                cout<<"Invalid choice!\n";
                break;
            }
        }
    }while(choice!=6);

    return 1;
}