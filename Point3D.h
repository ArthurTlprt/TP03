class Point3D {
    private :
        float x,y,z;
        
    public : 
        Point3D();
        Point3D(float newx,float newy, float newz);
        
        void setXYZ(float newx,float newy, float newz);
        void setX(float newx);
        void setY(float newy);
        void setZ(float newz);
        float getX() const;
        float getY() const;
        float getZ() const;
        
        void print();
        float distanceTo(const Point3D &otherPoint3D);

};
