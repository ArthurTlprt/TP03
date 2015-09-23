#include "Trajectory.h"
#include <cstdlib>
#include <iostream>


using namespace std;

Trajectory::Trajectory(){
    setNumberOfPoints(10);
}

Trajectory::Trajectory(int n){
    setNumberOfPoints(n);
    points = new Point3D[n];
}

void Trajectory::print(){
    cout << "Trajectory :  " << endl;
    int i;
    for(i=0; i < numberOfPoints; i++){
        this->points[i].print();
    }
}

Point3D & Trajectory::getPoint(int n){
    return this->points[n];
}

void Trajectory::setPointLine(){
    int i;
    Point3D vect;
    
    vect.setX(this->points[numberOfPoints-1].getX() -  this->points[0].getX());
    vect.setY(this->points[numberOfPoints-1].getY() -  this->points[0].getY());
    vect.setZ(this->points[numberOfPoints-1].getZ() -  this->points[0].getZ());
    
    
    for(i=0; i < 10; i++){
        this->points[i].setX(this->points[i].getX() * vect.getX());
        this->points[i].setY(this->points[i].getY() * vect.getY());
        this->points[i].setZ(this->points[i].getZ() * vect.getZ());
    }
}

int Trajectory::getAllDistance(){
    int i, sum=0;
    for(i=0; i < numberOfPoints-1; i++){
        sum += this->points[i].distanceTo(this->points[i+1]);
    }
}

void Trajectory::setNumberOfPoints(int n){
    numberOfPoints = n;
}

Trajectory::~Trajectory(){
    
}