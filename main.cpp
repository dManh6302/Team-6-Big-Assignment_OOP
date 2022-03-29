#include <bits/stdc++.h>
#include <iomanip>
#include "commandClass.cpp"

using namespace std;



int generalMenu(){

	cout<<"************He thong ra vao toa nha***************\n";
	cout<<"**************************************************\n";
	cout<<"*  1. Dang nhap                                  *\n";
	cout<<"*  9. Thoat chuong trinh                         *\n";
	cout<<"*  Hay nhap 1 hoac 9                             *\n";
	cout<<"**************************************************\n";
    int choice[2] = {1,9};
    int number = input(choice, 2);
    return number;
}

int main()
{
    Command command;
    do
    {
        command.choose = generalMenu();
        if(command.choose == 1)
        {
            command.logIn();
            getch();
            system("cls");
        }
        else return 0;

        if(command.checkRole() == 1)
        {
            command.managerView();
        }
        else if(command.checkRole() == 2 || command.checkRole() == 3)
        {
            command.residentView();
        }
    }
    while(command.choose != 9);
    return 0;
}
