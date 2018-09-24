# Classes

## What is Classes?

> Classes is module or block of c++ code that leads to object-oriented programming.you may have heard of moduler programming.This means that codes will be stored in several sourece file. simply, A class defines the features of object.

## Feature of Classes
 1. Data Abstraction
 2. Data Encapsulation


### what is data abstraction
> it means that simplification of complex situations. In software development, classes gives us direct access of output of this complex situtions.

```
 class person 
{

private:
 
     string name;
     unsigned long nr;
     string state;
  
  public:
  
  person(const string&,unsigned long,const string&);     // contsructor                              
  
  ~person();                                     // destructor
  
  bool init(const string&,unsigned long,const string&); // method
  
  void display();
  
};
```
> In this class, we get to know detail about person as we can see from defination of this.construcor ,destructor and method are also defined about i will tell later in this description.

### what is Encapsulation
> above we have defined class, also specify private and public members. private data member can not be accessed from outside of class. this feature increses security of data or protecting from external influences.Using mehthod we can use private data member.simply we hide data but using by mehtods.

```
int main()
{
    person person("Alex",216379,"france");
    
    person.display();
    
    cout<<"The last line of main"<<endl;
    
    return 0;
}

```
