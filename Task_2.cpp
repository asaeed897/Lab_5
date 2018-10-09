#include <iostream>

class addition
{
public:
  addition(double v_1,double v_2):Val_1(v_1),Val_2(v_2){
  }
  addition(){}
  double sum(){
    return Val_1+Val_2;
  }
private:
  double Val_1,Val_2;
};
int main()
{

  double val_1,val_2;
  std::cout << "Enter 1st value: ";
  std::cin >> val_1;
  std::cout << "Enter 2nd value: ";
  std::cin >> val_2;
  addition Sum_1(val_1,val_2);
  std::cout << "Sum : " <<Sum_1.sum()<< '\n';
  return 0;
}
