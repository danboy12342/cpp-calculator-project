//A C++ program to develop a simple calculator where you can do addition, subtraction, multiplication and division with as many numbers as you want.


#include <iostream> //wow just a single import
using namespace std;

int main()
{
    char op;    //variable to accept operators
    double no,n1;   //variables to accept input numbers
    double out;     //variable to calculate the output
    cout<<"Hello! and welcome to the calculator project for C++"<<endl;
    cout<<"Enter the first number: ";
    cin>>n1;
    out=n1;
    while(op != '=')
    {   std::cout << "\nEnter the operation ";
        std::cout << "\nEnter \"+\" for Additon \nEnter \"-\" for Subtraction \nEnter \"*\" for multiplication \nEnter \"/\" for division \nEnter \"=\"  to end calculation"<< endl;
        cin>>op;
        if(op == '=')
            goto printing;
        else
        {
            std::cout << "Enter the next number:" << endl;
            std::cin >> no;
            switch(op)
                {
                    case '+' :
                        out = out + no;
                        break;
                    case '-' :
                        out = out - no;
                        break;
                    case '*':
                        out = out * no;
                        break;
                    case '/':
                        out = out / no;
                        break;
                    default:
                        break;
                }
          }
    }
    printing:
      cout<<"The final answer is = "<<out;
    return 0;
}
