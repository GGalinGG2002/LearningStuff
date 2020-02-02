#include <iostream>
#include <string>
using namespace std;
class Cars
{
    private:
        //variabilele clasei-private
        string company_name;
        string model_name;
        string fuel_type;
        float mileage;
        double price;
    public:
        //functiile clasei-publice
        //default constructor
        Cars()
        {
            cout<<"Default contructor called"<<endl;
            //company_name="Hyundai";
        }
        //parameterized constructor
        Cars(string cname,string mname,string ftype,float m,double p)
        {
            cout<<"Parameterized constructor called"<<endl;
           company_name=cname;
           model_name=mname;
           fuel_type=ftype;
           mileage=m;
           price=p;
        }
        //copy constructor
        Cars(Cars &obj)
        {
            cout<<"Copy constructod called"<<endl;
           company_name=obj.company_name;
           model_name=obj.model_name;
           fuel_type=obj.fuel_type;
           mileage=obj.mileage;
           price=obj.price;
        }
        void setData(string cname,string mname,string ftype,float m, double p)
        {
           company_name=cname;
           model_name=mname;
           fuel_type=ftype;
           mileage=m;
           price=p;
        }
        void displayData()
        {
            cout<<"Numele companiei:"<<company_name<<endl;
            cout<<"Modelul masinii:"<<model_name<<endl;
            cout<<"Combustibilul:"<<fuel_type<<endl;
            cout<<"Consum:"<<mileage<<"%"<<endl;
            cout<<"Pretul masinii:"<<price<<" euro"<<endl<<endl;
        }
        //destructor
        ~Cars()
        {
            cout<<"Destructor called"<<endl;
        }
};
int main()
{
    Cars car1,car2("Hyundai","i10","motorina",10,15000); //aceeasi chestie cu struct doar ca cu functii
    /*car1.setData("hyundai","ix35","motorina",13,35000);
    car2.setData("bmw","740d","motorina",16,120000);
    car3.setData("opel","astra","benzina",6,15000);
    car4.setData("lexus","lx45","hybrid",3,65000);
    car1.displayData();
    car2.displayData();
    car3.displayData();
    car4.displayData();*/
    car1.setData("Hyundai","ix35","motorina",13,35000);
    car1.displayData();
    car2.displayData();
    Cars car3=car1;//accesam copy constructor-ul
    car3.displayData();
    return 0;
}
