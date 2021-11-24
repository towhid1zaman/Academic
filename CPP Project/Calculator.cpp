#include<bits/stdc++.h>

using namespace std;

int main();

class stand_calc{
public:
    double addition(double,double);
    double subtract(double,double);
    double multiplication(double,double);
    double division(double,double*);
    int mod(int,int*);
};

double stand_calc::addition(double a, double b)
{
    return a+b;
}

double stand_calc::subtract(double a, double b)
{
    return a-b;
}

double stand_calc::multiplication(double a, double b)
{
    return a*b;
}

double stand_calc::division(double a, double *b)
{
    while(*b==0){
        cout<<"\nCannot divided by zero.";
        cout<<"\nEnter second number again:";
        cin>>*b;
    }
    return a/(*b);
}

int stand_calc::mod(int a, int *b)
{
    while(*b==0){
        cout<<"\nCannot divided by zero.";
        cout<<"\nEnter second number again:";
        cin>>*b;
    }

    return a%(*b);
}

class scien_calc{
public:
    double square(double);
    double cube(double);
    double power(double,double);
    double sq_root(double);
    long int fact(int);
    double sin_func(double);
    double cos_func(double);
    double tan_func(double);
    double log_10(double);
    double ln(double);
};

double scien_calc::square(double x)
{
    return pow(x,2);
}

double scien_calc::cube(double x)
{
    return pow(x,3);
}

double scien_calc::power(double x, double y)
{
    return pow(x,y);
}

double scien_calc::sq_root(double x)
{
    return sqrt(x);
}

long int scien_calc::fact(int x)
{
    long int f=1;
    while(x>1){
        f*=x;
        x--;
    }
    return f;
}

double scien_calc::sin_func(double x)
{
    double z=(x*11)/630;
    return sin(z);
}

double scien_calc::cos_func(double x)
{
    double z=(x*11)/630;
    return cos(z);
}

double scien_calc::tan_func(double x)
{
    double z=(x*11)/630;
    return tan(z);
}

double scien_calc::log_10(double x)
{
    return log10(x);
}

double scien_calc::ln(double x)
{
    return log(x);
}

void standard_calc(int x)
{
    int choice,choice1;
    double num1,num2,num3;
    int inum1,inum2;
    stand_calc ob1;
    if(x<1){
        system("COLOR 8b");
        cout<<"!!!========Standard Calculator========!!!";
        cout<<"\n1\tAddition\n2\tSubtraction\n3\tMultiplication\n4\tDivision\n5\tModulus\n6\tReturn to previous menu"<<endl;
        cout<<"\nChose the type of calculation:";
        cin>>choice;
        system("CLS");
    }
    else{
        choice=x;
    }

        while(1)
        {
        if(choice==1){
            cout<<"Enter first number:";
            cin>>num1;
            cout<<"Enter second number:";
            cin>>num2;
            num3=ob1.addition(num1,num2);
            cout<<"\nAddition of "<<num1<<" and "<<num2<<" is "<<num3<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain add.\n2\tStandard Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               standard_calc(1);
            }
            else if(choice1==2){
                standard_calc(0);
            }
            else if(choice1==3){
               main();
            }
            else{
                cout<<"\nInvalid choice...!!"<<endl;
                cout<<"\nWhat do want now ?\n1\tAgain add.\n2\tStandard Calculator menu.\n3\tMain menu."<<endl;
            }
            }

        }

        else if(choice==2){
            cout<<"Enter first number:";
            cin>>num1;
            cout<<"Enter second number:";
            cin>>num2;
            num3=ob1.subtract(num1,num2);
            cout<<"\nSubtraction of "<<num2<<" from "<<num1<<" is "<<num3<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain subtract.\n2\tStandard Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               standard_calc(2);
            }
            else if(choice1==2){
                standard_calc(0);
            }
            else if(choice1==3){
                main();
            }
            else{
                cout<<"\nInvalid choice...!!"<<endl;
                cout<<"\nWhat do want now ?\n1\tAgain subtract.\n2\tStandard Calculator menu.\n3\tMain menu."<<endl;
            }
            }
        }

        else if(choice==3){
            cout<<"Enter first number:";
            cin>>num1;
            cout<<"Enter second number:";
            cin>>num2;
            num3=ob1.multiplication(num1,num2);
            cout<<"\nMultiplication of "<<num1<<" and "<<num2<<" is "<<num3<<endl;
            cout<<"What do want now ?\n1\tAgain Multiplication.\n2\tStandard Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               standard_calc(3);
            }
            else if(choice1==2){
                standard_calc(0);
            }
            else if(choice1==3){
                main();
            }
            else{
                cout<<"\nInvalid choice...!!"<<endl;
                cout<<"\nWhat do want now ?\n1\tAgain Multiplication.\n2\tStandard Calculator menu.\n3\tMain menu."<<endl;
            }
            }
        }

        else if(choice==4){
            cout<<"Enter first number:";
            cin>>num1;
            cout<<"Enter second number:";
            cin>>num2;

            num3=ob1.division(num1,&num2);
            cout<<"\nDivision of "<<num1<<" by "<<num2<<" is "<<num3<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain Multiplication.\n2\tStandard Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               standard_calc(4);
            }
            else if(choice1==2){
                standard_calc(0);
            }
            else if(choice1==3){
                main();
            }
            else{
                cout<<"\nInvalid choice...!!"<<endl;
                cout<<"\nWhat do want now ?\n1\tAgain Multiplication.\n2\tStandard Calculator menu.\n3\tMain menu."<<endl;
            }
            }
        }

        else if(choice==5){
            cout<<"Enter first number:";
            cin>>inum1;
            cout<<"Enter second number:";
            cin>>inum2;

            num3=ob1.mod(inum1,&inum2);
            cout<<"\nModulus of "<<inum1<<" by "<<inum2<<" is "<<num3<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain determination Modulus.\n2\tStandard Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               standard_calc(5);
            }
            else if(choice1==2){
                standard_calc(0);
            }
            else if(choice1==3){
                main();
            }
            else{
                cout<<"\nInvalid choice...!!"<<endl;
                cout<<"\nWhat do want now ?\n1\tAgain determination Modulus.\n2\tStandard Calculator menu.\n3\tMain menu."<<endl;
            }
            }
        }

        else if(choice==6)
        {
            main();
        }
        else
        {
            cout<<"\nInvalid choice...!!\n"<<endl;
            standard_calc(0);
        }

    }
}

void scientific_calc(int x)
{
   int choice,choice1;
   double num1,num2,num3;
   int inum1;
   scien_calc ob2;

   if(x<1)
    {
        system("COLOR f9");
        cout<<"!!!========Scientific Calculator========!!!";
        cout<<"\n1\tSquare\n2\tCube\n3\tPower\n4\tFactorial\n5\tSin\n6\tCos\n7\t\Tan\n8\tLog value\n9\tLn value\n10\tReturn to previous menu"<<endl;
        cout<<"\nChoose the type of calculation:";
        cin>>choice;
        system("CLS");
    }
    else
    {
        choice=x;
    }


        while(1)
        {
        if(choice==1){
            cout<<"Enter number to find square:";
            cin>>num1;

            num3=ob2.square(num1);
            cout<<"\nSquare of "<<num1<<" is "<<num3<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain determination square\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               scientific_calc(1);
            }
            else if(choice1==2){
                scientific_calc(0);
            }
            else if(choice1==3){
               main();
            }
            else{
                cout<<"\nInvalid choice...!!"<<endl;
                cout<<"\nWhat do want now ?\n1\tAgain determination square\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;
            }
            }
        }

        else if(choice==2){
            cout<<"Enter number to find cube:";
            cin>>num1;

            num3=ob2.cube(num1);
            cout<<"\nCube of "<<num1<<" is "<<num3<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain determination cube.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               scientific_calc(2);
            }
            else if(choice1==2){
                scientific_calc(0);
            }
            else if(choice1==3){
               main();
            }
            else{
                cout<<"\nInvalid choice...!!"<<endl;
                cout<<"\nWhat do want now ?\n1\tAgain determination cube.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;
            }
            }
        }

        else if(choice==3){
            cout<<"Enter the first number for base to find power:";
            cin>>num1;
            cout<<"Enter second number for power to find power:";
            cin>>num2;

            num3=ob2.power(num1,num2);
            cout<<"\nPower of "<<num1<<" is "<<num3<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain determination power.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               scientific_calc(3);
            }
            else if(choice1==2){
                scientific_calc(0);
            }
            else if(choice1==3){
                main();
            }
            else{
                cout<<"\nInvalid choice...!!"<<endl;
                cout<<"\nWhat do want now ?\n1\tAgain determination power.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;
            }
            }
        }

        else if(choice==4){
            cout<<"Enter number to find factorial:";
            cin>>inum1;

            while(inum1<0){
                cout<<"It's not possible\nEnter again:";
                cin>>inum1;
            }

            long int num4=ob2.fact(inum1);
            cout<<"\nFactorial of "<<inum1<<" is "<<num4<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain determination factorial.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               scientific_calc(4);
            }
            else if(choice1==2){
                scientific_calc(0);
            }
            else if(choice1==3){
                main();
            }
            else{
                cout<<"\nInvalid choice...!!"<<endl;
                cout<<"\nWhat do want now ?\n1\tAgain determination factorial.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;
                }
            }
        }

        else if(choice==5){
            cout<<"Enter number to find sin value:";
            cin>>num1;

            num3=ob2.sin_func(num1);
            cout<<"\nSin value of "<<num1<<" is "<<num3<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain determination sin value.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               scientific_calc(5);
            }
            else if(choice1==2){
                scientific_calc(0);
            }
            else if(choice1==3){
                main();
            }
            else
            {
                cout<<"\nInvalid choice...!!"<<endl;
                cout<<"\nWhat do want now ?\n1\tAgain determination sin value.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;
            }
        }
        }

        else if(choice==6){
            cout<<"Enter number to find cos value:";
            cin>>num1;

            num3=ob2.cos_func(num1);
            cout<<"\nCos value of "<<num1<<" is "<<num3<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain determination cos value.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               scientific_calc(6);
            }
            else if(choice1==2){
                scientific_calc(0);
            }
            else if(choice1==3){
                main();
            }
            else{
                cout<<"\nInvalid choice...!!"<<endl;
                cout<<"\nWhat do want now ?\n1\tAgain determination cos value.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;
            }
            }
        }

       else if(choice==7){
            cout<<"Enter number to find tan value:";
            cin>>num1;

            num3=ob2.tan_func(num1);
            cout<<"\nTan value of "<<num1<<" is "<<num3<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain determination tan value.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               scientific_calc(7);
            }
            else if(choice1==2){
                scientific_calc(0);
            }
            else if(choice1==3){
                main();
            }
            else{
               cout<<"\nInvalid choice...!!"<<endl;
               cout<<"\nWhat do want now ?\n1\tAgain determination tan value.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;
            }
            }
       }

        else if(choice==8){
            cout<<"Enter number to find log value:";
            cin>>num1;

            num3=ob2.log_10(num1);
            cout<<"\nlog value of "<<num1<<" is "<<num3<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain determination log value.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               scientific_calc(8);
            }
            else if(choice1==2){
                scientific_calc(0);
            }
            else if(choice1==3){
                main();
            }
            else{
               cout<<"\nInvalid choice...!!"<<endl;
               cout<<"\nWhat do want now ?\n1\tAgain determination log value.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;
            }
            }
       }
       else if(choice==9){
            cout<<"Enter number to find ln value:";
            cin>>num1;

            num3=ob2.ln(num1);
            cout<<"\nLn value of "<<num1<<" is "<<num3<<endl;
            cout<<"\nWhat do want now ?\n1\tAgain determination ln value.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;

            while(1){
            cout<<"Enter choice:";
            cin>>choice1;
            system("CLS");

            if(choice1==1){
               scientific_calc(8);
            }
            else if(choice1==2){
                scientific_calc(0);
            }
            else if(choice1==3){
                main();
            }
            else{
               cout<<"\nInvalid choice...!!"<<endl;
               cout<<"\nWhat do want now ?\n1\tAgain determination ln value.\n2\tScientific Calculator menu.\n3\tMain menu."<<endl;
            }
            }
       }

        else if(choice==10){
            main();
        }

        else{
            cout<<"\nInvalid choice...!!\n"<<endl;
            scientific_calc(0);
        }

    }
}

int main()
{
    int choice;
    system("COLOR 1f");
    cout<<"!!!========Type of Calculators========!!!";
    cout<<"\n1\tstandard Calculator\n2\tScientific Calculator\n3\tQuite"<<endl;

    while(1){
        cout<<"Choose the type of calculator:";
        cin>>choice;
        system("CLS");

        if(choice==1)
        {
            standard_calc(0);
        }
        else if(choice==2)
        {
            scientific_calc(0);
        }
        else if(choice==3)
        {
            exit(0);
            break;
        }
        else
        {
            cout<<"Invalid Choice...!!\n"<<endl;
            main();
        }
    }

    return 0;
}
