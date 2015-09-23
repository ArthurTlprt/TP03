/* 
 * File:   Point3D.cpp
 * Author: isen
 * 
 * Created on 23 septembre 2015, 13:39
 */

#include "Point3D.h"
#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

Point3D::Point3D() {
    setX(rand() % 100);
    setY(rand() % 100);;
    setZ(rand() % 100);
    
}

Point3D::Point3D(float newx,float newy, float newz) {
    setX(newx);
    setY(newy);
    setY(newz);
}

void Point3D::setXYZ(float newx,float newy, float newz){
    setX(newx);
    setY(newy);
    setY(newz);
}

void Point3D::setX(float newx){
    this->x = newx;
}

void Point3D::setY(float newy){
    this->y = newy;
}

void Point3D::setZ(float newz){
    this->z = newz;
}

float Point3D::getX() const {
    return this->x;
}

float Point3D::getY() const{
    return this->y;
}

float Point3D::getZ() const{
    return this->z;
}

void Point3D::print(){
    cout << "x = " << this->x << endl;
    cout << "y = " << this->y << endl;
    cout << "z = " << this->z << endl;
}

float Point3D::distanceTo(const Point3D &otherPoint3D){
    float distance = 0;
    distance = sqrt( pow( ( getX() - otherPoint3D.getX() ), 2 )+ pow( ( getY() - otherPoint3D.getY() ), 2 ) + pow( ( getZ() - otherPoint3D.getZ() ), 2 ) );
    return distance;
}