#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class account
{
  private:
    string name;
    unsigned long nr;
    double state;
  public:
   account(const string&,unsigned long,double);
   account(const string&);
   ~account();
   bool init(const string&,unsigned long,double);
   void display();
};
class cd
{
  private:
  string interpret,title;
  long second;
  public:
    cd(const string& i="",const string&t="",long s=0l):interpret(i),title(t),second(s){};
    const string& getInterpret() const{return interpret;}
    const string& getTitle() const{return title;}
    long getsecond() const {return second;}

};
account::account(const string& a_name,unsigned long a_nr,double a_state)
{
 nr=a_nr;
 name=a_name;
 state=a_state;
}

account::account(const string& a_name)
{
   name=a_name;

}
bool account::init(const string& a_name,unsigned long a_nr,double a_state)
{
       name=a_name;
       nr=a_nr;
       state=a_state;
       return true;
}
account::~account()
{
  cout<<"Account is destroyed"<<endl;
}
void account::display()
{
       cout<<name<<"  "<<nr<<"     "<<state<<endl;
}

void printLine(cd cd);
int main()
{
    cd cd1("X","let'sdance",30*60+41),
       cd2("new guiter","flamenco",2771),
       cd3,cd4;
       cd3=cd1;
       cd4=cd2;
       printLine(cd3);
       printLine(cd4);
    cout<<"The last line of main"<<endl;
    return 0;
}
void printLine(cd cd)
{
cout<<left<<setw(20)<<cd.getInterpret()<<setw(30)<<cd.getTitle()<<right<<setw(5)<<cd.getsecond()/60<<':'<<setw(2)<<cd.getsecond()%60<<endl;
}
