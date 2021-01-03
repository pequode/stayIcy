#include <iostream>// smaller than an io river
#include <stdlib.h>// depricated into webmd
#include <time.h> // in this case .h stand for hour
using namespace std;
class SuperCoolClass{ public: SuperCoolClass();SuperCoolClass(int sg){SunglassBrightness = sg;}
	int SunglassBrightness =98; 
	string glasses="                r===============/|\n               /               /.|\n              /               /..|\n             /              /||..j\n            /              /.||./\n           /              /..||/\n          /              /...j\n    r===================|.../\n   /    /               |../\n  /    /b               |./\n /                      |/\n/b\n"; ;
    unsigned int GlassLocations [18] = {67,101,102,136,137,168,171,201,202,233,234,235,263,264,265,293,294,322};
	void RockDemSpecks(){
	 int ind =0;srand(time(NULL));for (unsigned int i =0;i<glasses.size();i++){
	  float dassle = rand()%100;if(i==GlassLocations[ind]){//     r===============/|	
	   ind++;glasses[i]=(dassle<SunglassBrightness)?'*':' ';}//  /               /*|
	 }cout<<glasses;}};// ----------->https://github.com/pequode/stayIcy<----   /**|
int main(){//                                                  /              /||**j
 SuperCoolClass Fonze(90);//                                  /              / ||*/
 Fonze.RockDemSpecks();//                                    /              /**||/
 return 0;}//                                               /              /** j 
//                                                    r===================|* */
//                                                   /    /               |**/
//                                                  /    /b               |*/
//                                                 /                      |/
//                                                /b