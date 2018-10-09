#include <iostream>

class area
{
public:
  area():lenght(4.5),width(10){

  }
  float areaOfrectangle(){
    return lenght*width;
  }
private:
  float lenght,width;
};
int main()
{
  area plot;
  std::cout << "Area of Rectangle is: " <<plot.areaOfrectangle()<< '\n';
  return 0;
}
