#include "Point3D.h"

class Trajectory {
private:
    int numberOfPoints;
    Point3D * points;
public:
    Trajectory();
    Trajectory(int n);
    void print(); // print the coordiantes of all points
    Point3D &getPoint(int n); // returns the reference of point n
    void setPointLine();
    int getAllDistance();
    void setNumberOfPoints(int n);
    ~Trajectory();
};