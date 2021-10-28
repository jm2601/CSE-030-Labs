#include <iostream>
#include <string>
using namespace std;
class Banana{
  private:
      int ripeness;
      double weight;
      string color;
  public:
      Banana(int ripeness, double weight, string color){
              this->ripeness = ripeness;
              this->weight = weight;      
              this->color = color;    
        } 

        Banana(string color){
              this->ripeness = 0;     
              this->weight = 1.04;      
              this->color = color;    
        } 

        double getWeight(){
            return weight;    
        }  

        void setRipeness(int ripeness){
          this->ripeness = ripeness;    
        }  

        Banana operator + (Banana banana){
              double w = this->weight + banana.weight;      
              Banana temp(this->ripeness, w, this->color);      
              return temp;    
        }

    };
        
        int main () {   
            Banana banana1(7, .5, "yellow");
            cout<<banana1.getWeight()<<endl;  
            Banana banana2("red");  
            cout<<banana2.getWeight()<<endl;  
            Banana banana3 = banana1 + banana2;  
            cout<<banana3.getWeight();
        }



//Blind 75 Must do leetcode 