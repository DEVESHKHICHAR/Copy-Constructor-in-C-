#include <iostream>
using namespace std;
class number{
    int a;
    public:
      number(){}
      number(int x){
        a=x;
      }
       number(number &y){
         a=y.a;
           cout<<"copy constructer is started"<<endl;
       }
      void display(){
        cout<<"the number is: "<<a<<endl;
      }
};
int main() {
    number n1,n2(4);
    n2.display();
    n1=number(n2);
    n1.display();
    number n3=n2;
    n3.display();
    return 0;
}