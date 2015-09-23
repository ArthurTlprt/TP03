/* 
 * File:   main.cpp
 * Author: isen
 *
 * Created on 23 septembre 2015, 13:36
 */

#include <cstdlib>
#include "Trajectory.h"
#include <iostream>

using namespace std;


int main() {
    
    srand(time(NULL));
    Point3D myPoint0(3.4, 8.0, .5), myPoint1;
    
    Trajectory myTrajectory(3);
    
    myTrajectory.print();
    myTrajectory.setPointLine();
    myTrajectory.print();
    
    cout << "distance: " << myTrajectory.getPoint(0).distanceTo(myTrajectory.getPoint(9)) << endl;
    cout << "all distance: " << myTrajectory.getAllDistance() << endl;
   return 0; 
}

