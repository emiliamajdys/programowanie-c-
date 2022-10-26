#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int i;
int random_number;
class Circle
{
   public:
       int promien;
       Circle (int p)
       {
           promien=p;
       }
       float pole()
       {
           return M_PI * promien * promien;
       }

};
int main()
{
  srand(time(NULL));

   for(int i=0; i<10; i++)
   {
    int rand_promien= rand()%10;

    Circle kolo(rand_promien);
    cout<<"kolo ma promien"<< kolo.promien << "ma pole"<< kolo.pole() <<endl;
   }


    return 0;
}
