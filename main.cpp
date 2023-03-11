#include <iostream>
#include <cmath>
using namespace std;

int selector;
float a, b, c;
void ab(){
    cout << "Enter a\n";
    cin >> a;
    cout << "Enter b\n";
    cin >> b;
}


int main(){
    auto askanother = []() {
        int choice;
        cout << "Do another math operation? 1-yes 2-no" <<endl;
        cin >> choice;
        switch (choice){
            case 1:
                main();
                break;
            case 2:
                exit(0);
                break;
        }
    };
    cout << "Welcome to c++ calculator (<cmath> library)\n";
    cout << "Select symbol:\n 1 - +\n 2 - -\n 3 - *\n 4 - /\n 5 - round\n 6 - sqrt root\n 7 - power (b use as power number, a number to be powered)\n 8 - perimeter or area of square, rectangle or triangle\n 0 - exit\n";
    cin >> selector;

   
    switch (selector) {
        case 1:
            ab();
            cout << "\x1b[107m";
            cout << "\x1b[30m";
            c=a+b;
            cout << a << "+" << b << "=" << c;
            cout << "\x1b[37m\n";
            cout << "\x1b[40m";
            break;
        case 2:
            ab();
            cout << "\x1b[107m";
            cout << "\x1b[30m";
            c=a-b;
            cout << a << "-" << b << "=" << c;
            cout << "\x1b[37m\n";
            cout << "\x1b[40m";
            break;

        case 3:
            ab();
            cout << "\x1b[107m";
            cout << "\x1b[30m";
            c=a*b;
            cout << a << "*" << b << "=" << c;
            cout << "\x1b[37m\n";
            cout << "\x1b[40m";
            break;
        case 4:
            ab();
            cout << "\x1b[107m";
            cout << "\x1b[30m";
            c=a/b;
            cout << a <<"/" << b <<"=" <<c;
            cout << "\x1b[37m\n";
            cout << "\x1b[40m";
            break;
        case 5:
            ab();
            float cfloat,dfloat;
            cfloat=round(a);
            dfloat=round(b);
            cout << "\x1b[107m";
            cout << "\x1B[30ma="<<cfloat<<endl;
            cout << "\x1B[30mb="<<dfloat<<endl;
            cout << "\x1b[37m\n";
            cout << "\x1b[40m";
            break;
        case 6:
            ab();
            cout << "\x1b[107m";
            cout << "\x1b[30m";
            cout << "sqrt("<<a<<")="<<sqrt(a)<<endl;
            cout << "sqrt("<<b<<")="<<sqrt(b)<<endl;
            cout << "\x1b[37m\n";
            cout << "\x1b[40m";
            break;
        case 7:
            ab();
            cout << "\x1b[107m";
            cout << "\x1b[30m";
            cout << b<<" power of " << a <<" = " << pow(a,b);
            cout << "\x1b[37m\n";
            cout << "\x1b[40m";
            break;
        case 8:
            int x;
            float area;
            float square_area;
            float triangle_area;
            float rectangle_area;
            int figure;
            float side1, side2, side3;
            float triangle_height;
            cout<<"SELECT: area - 1, perimeter - 2\n";
            cin >> x;
            switch (x){
                case 1:
                    cout << "You have chosen the area, square - 1, rectangle - 2, triangle - 3\n";
                    cin >> figure;
                    switch (figure){
                        case 1:
                            cout << "Enter one side of the square\n";
                            cin >> square_area;
                            cout << "\x1b[107m";
                            cout << "\x1b[30m";
                            cout << "A="<<square_area*square_area << endl;
                            cout << "\x1b[37m\n";
                            cout << "\x1b[40m";
                            askanother();
                            break;
                        case 2:
                            cout << "Enter first side of the rectangle\n";
                            cin >> side1;
                            cout << "Enter second side of the rectangle\n";
                            cin >> side2;
                            cout << "\x1b[107m";
                            cout << "\x1b[30m";
                            cout << "A="<<side1*side2 << endl;
                            cout << "\x1b[37m\n";
                            cout << "\x1b[40m";
                            askanother();
                            break;
                        case 3:
                            cout << "Enter the base of the triangle\n";
                            cin >> triangle_height;
                            cout << "Enter the height of the triangle\n";
                            cin >> triangle_area;
                            cout << "\x1b[107m";
                            cout << "\x1b[30m";
                            cout << "A="<<(triangle_area*triangle_height)/2 << endl;
                            cout << "\x1b[37m\n";
                            cout << "\x1b[40m";
                            askanother();
                            break;
                        default:
                            cout<<"Unknown selection number\n";
                            break;
                    }
                    break;
                
                case 2:
                    cout << "You have chosen the perimeter, square - 1, rectangle - 2, triangle - 3\n";
                    float perimeter;
                    int figure_perimeter;
                    cin >> figure_perimeter;
                    switch (figure_perimeter){
                        case 1:
                            cout << "Enter one side of the square\n";
                            cin >> square_area;
                            cout << "\x1b[107m";
                            cout << "\x1b[30m";
                            cout << "P="<<square_area+square_area+square_area+square_area << endl;
                            cout << "\x1b[37m\n";
                            cout << "\x1b[40m";
                            askanother();
                            break;
                        case 2:
                            cout << "Enter first side of the rectangle\n";
                            cin >> side1;
                            cout << "Enter second side of the rectangle\n";
                            cin >> side2;
                            cout << "\x1b[107m";
                            cout << "\x1b[30m";
                            cout << "P="<<side1+side2+side1+side2 << endl;
                            cout << "\x1b[37m\n";
                            cout << "\x1b[40m";
                            askanother();
                            break;
                        case 3:
                            cout << "Enter first side of the triangle\n";
                            cin >> side1;
                            cout << "Enter one second of the triangle\n";
                            cin >> side2;
                            cout << "Enter one third of the triangle\n";
                            cin >> side3;
                            cout << "\x1b[107m";
                            cout << "\x1b[30m";
                            cout << "P="<<side1+side2+side3 << endl;
                            cout << "\x1b[37m\n";
                            cout << "\x1b[40m";
                            askanother();
                            break;
                        default:
                            cout<<"Unknown selection number\n";
                            break;	
                    }
                    break;			
                default:
                    cout<<"Unknown selection number\n";
                    break;
            }
        case 0:
            exit(0);
            cout << "\x1b[40m";
            break;
        default:
            cout << "Error\n";
            cout << selector <<" select number not in database\n";
            break;
        }
    askanother();
        
}

