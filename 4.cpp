class Point
{
private:
    double x, y;

public:
    Point()
    {
        /*  
         * STUDENT ANSWER   
         * TODO: set zero x-y coordinate
         */
        this->x =0;
        this->y = 0;
    }

    Point(double x, double y)
    {
        /*  
         * STUDENT ANSWER
         */
         this->x = x;
         this->y = y;
    }

    void setX(double x)
    {
        /*  
         * STUDENT ANSWER
         */
         this->x = x;
    }

    void setY(double y)
    {
        /*  
         * STUDENT ANSWER
         */
         this->y = y;
    }

    double getX() const
    {
        /*  
         * STUDENT ANSWER
         */
         return x;
    }

    double getY() const
    {
        /*  
         * STUDENT ANSWER
         */
         return y;
    }

    double distanceToPoint(const Point& pointA)
    {
        /*  
         * STUDENT ANSWER   
         * TODO: calculate the distance from this point to point A in the coordinate plane
         */
        
    	double a = this->x - pointA.x;
    	double b = this->y - pointA.y;
        return sqrt(a*a+b*b);
	
    }
};
class Quadrilateral{
    private:
        Point arrPoint[4];
    public:
        void setPoint(const Point& point, int idx){
            /*  
            * STUDENT ANSWER   
            * TODO: set Point in index idx of Quadrilateral to point
            */this->arrPoint[idx] = point;
        }
        bool isRectangle(){
            /*  
            * STUDENT ANSWER   
            * TODO: return true if ABCD is a rectangle where A,B,C,D are arrPoint at index 0,1,2,3 respectively.
            *       else return false
            */
            Point a = arrPoint[0];
            Point b = arrPoint[1];
            Point c = arrPoint[2];
            Point d = arrPoint[3];
            double ab = a.distanceToPoint(b);
            double bc = b.distanceToPoint(c);
            double cd = c.distanceToPoint(d);
            double da = d.distanceToPoint(a);
            double ac = a.distanceToPoint(c);
            double bd = b.distanceToPoint(d);
            int count = 0;
            if(ab==cd) count++;
            if(bc==da) count++;
            if(ac==bd) count++;
            if(count >=3) return true;
            return false;
        }
};

