#include <iostream>

using namespace std;

int main(){
char continuechoice ;

do{
int choice;
void displayMenu();
cout<<"enter your choice:";
cin >>choice;

performoperation(choice);

cout<<"do you want to continue?(Y/n):";
cin>>continuechoice;


}while (continuechoice == 'y'||continuechoice == 'Y');

return 0;
}


void displayMenu(){
cout << "menu:\n";
cout << "1=Addition\n";
cout << "2=Subtraction\n";
cout << "3.Multiplication\n";
cout << "4.Division\n";
}

void performoperation(int choice){
int num1, num2;
switch (choice){

case 1:
    cout <<"enter the two number to add:";
    cin >>num1 >> num2;
    cout <<"Result:" << num1 + num2 <<endl;
    break;

        case 2:
        cout <<"enter the two numbers you want to subtract:";
        cin >> num1 >> num2;
        cout << "Result:" << num1 - num2 << endl;
        break;


        case 3:
        cout << "enter the two numbers you want to multiply:";
        cin >>num1 >> num2;
        cout <<"Result:" << num1*num2 <<endl;
        break;


        case 4:
        cout <<"enter the two numbers to divide:";
        cin >> num1 >> num2;
        if (num2==0){
        cout<<"Error:Divide by 0" <<endl;

        }else{
            cout << "Result:" << num1/num2 << endl;
        }
        default:
            cout << "choice unknown!!!!!!!! enter numbers between 1 and 4 instead." << endl;










   }
 }


