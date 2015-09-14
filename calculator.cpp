#include "functions.h"
#include "calculator.h"
//int NotNumberFlag = 0 ;
     void Calculator::add(const double a, const double b) {
        result = a + b;
        std::cout << "Result:" << result <<std:: endl;
    }
     void Calculator::subtract(const double a, const double b) {
        result = a - b;
        std::cout << "Result:" << result <<std:: endl;
    }
     void Calculator::mult(const double a, const double b) {
        result = a * b;
        std::cout << "Result:" << result <<std:: endl;
    }
     void Calculator::divide(const double a, const double b) {
        result = a / b;
        std::cout << "Result:" << result <<std:: endl;
    }
     void Calculator::modulus(const int a, const int b) {
        result = a % b;
        std::cout << "Result:" << result <<std:: endl;
    }

     void Calculator::menu() {
        std::cout<<"===============================================================\n";
        std::cout<<"                         MENU                                  \n";
        std::cout<<"===============================================================\n";
        std::cout<<"     1. Add\n";
        std::cout<<"     2. Subtract\n";
        std::cout<<"     3. Multiply\n";
        std::cout<<"     4. Divide\n";
        std::cout<<"     5. Modulus\n";
        std::cout<<"===============================================================\n\n";
        std::cout<<"===============================================================\n\n\n";
    }



     void Calculator::driver() {
            std::cout << "Enter your Operation" << std::endl;
            //std::cin >> c;
            c=GetInput(false,true);
	   if(c>0 && c<=5)
           {
            std::cout << "Enter first number" << std::endl;
            //std::cin >> x;
            NotNumberFlag=0;
            x=GetInput(true,true);
	   if(NotNumberFlag)
           return;
            std::cout << "Enter second number" << std::endl;
            //std::cin >> y;
            NotNumberFlag=0;
            y=GetInput(true,true);
	  if(NotNumberFlag)
            return;
        switch(c){
            case Add: add(x,y); break;
            case Subtract: subtract(x,y); break;
            case Multiply: mult(x,y); break;
            case Divide: divide(x,y); break;
            case Modulus: modulus(x,y); break;
            default: std::cout << "Invalid input. Try Again!" <<std:: endl;
        }
    }
   else     
   std::cout << "Invalid input. Try Again!" <<std:: endl;

}
    void Calculator::driver2() {
        do {
            driver();
        std::cout << "Do you want to continue? 1->Yes/Otherwise -> NO" << std::endl;
        //std::cin >> choice;
            choice=GetInput(false,false);
        }
        while(choice == 1 );
    }
