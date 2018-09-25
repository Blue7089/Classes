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
  
  person();
  
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
### Constructor
>A constructor which is function of class name is known as constructor.for example,we have a person class name and we also declared in as person(). A constructor without parameter is referred to as a default constructor. For instance,person(); in person class is an default constructor.It only called if an object definition does not intialize.If a class does not have any constructor then complier will create default constructor as a public member. 

### Copy Constructor 
```
person  fperson("Alex",216379,"france");
person  mperson(fperson);       

```
>Above example, the object mperson is initialized by calling the copy constructor with the fperson object.Each member of fperson is individually copied to mperson member.
```
mperson.name = fperson.name="Alex";
mperson.nr = fperson.nr = 216379;
mperson.state = fperson.state= "france";

```
### Destructor
```
~person();

```
>this is how destructor is declared in public section.It is used to clean up the object that were created by constructor.It is involved in releasing memory and closing files. same as default constructor. it will also initalize with miniamal version of destructor by compiler  if it's not intialize.
