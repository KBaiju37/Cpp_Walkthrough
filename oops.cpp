#include <iostream>
#include <string>
using namespace std;

class employee
{
    protected:
    int empno;
    string name;
    int salary;
    int allowances;
    int deduction;
    int netsalary;
    
    public:
    employee()
    {
     name = salary = allowances = deduction = 0;
    };
    employee(int a,string b,int c)
    {
       empno = a;
       name = b;
       salary = c;
    };
    
    void display()
    {
        cout<< name<<"\n"<<salary<<"\n"<<allowances<<"\n"<<deduction<<"\n";
    };
    void nsalary()
    {
        netsalary= salary+allowances-deduction;
        cout<<netsalary<<"\n";
        
    };
    
    void setallowance(int a)
    {
        allowances = a;
        cout << allowances<<"\n";
        
    };
    
    void setdeduction(int d)
    {
        deduction = d;
        cout << deduction<<"\n";
    };
    
    
};

class salesperson : public employee
{
  private:
  int commision;
  int saleamount;
  
  public:
  salesperson(int a,string b,int c,int sa):employee(a,b,c)
  {
      saleamount = sa;
  }
  void calculatecommsion()
  {
      if (saleamount >1000)
      {
          commision = 0.03*salary;
      }
      
  }
  void calculatedsalary()
  {
      netsalary = netsalary + commision;
  }
 void salespersondisplay()
 {
     cout << commision<<"\n"<< saleamount<<"\n";
 }
   
};

int main(){
    
   salesperson s1(11,"gauri",30000,140000);
   s1.display();
   employee s2(1,"dhruv",2000);
   s2.display();
    
    
    return 0;
};

