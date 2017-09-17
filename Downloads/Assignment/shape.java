package p1;


abstract class Shape1
{    abstract int numberOfSides();
}
class Trapezoid extends Shape1
{
    private static int s=4;

    int numberOfSides()

    {
        return s;
    }
    public String toString()
    {        return "Trapezoid";
    }
}
class Triangle extends Shape1
{
    private static int s=3;
    int numberOfSides()
   {

        return s;

    }

    public String toString()

    {

        return "Triangle";

    }

}



class Hexagon extends Shape1

{   

    private static int s = 6;

    int numberOfSides()

    {

        return s;

    }

    public String toString()

    {

        return "Hexagon";

    }

}

public class shape {



    public static void main(String args[])

    {

    Shape1[] sh = new Shape1[4];

    Trapezoid tp = new Trapezoid();

    Triangle tr = new Triangle();

    Hexagon hx = new Hexagon();

    sh[0]=tp;

    sh[1]=tr;

    sh[2]=hx;

    for(int i=0 ; i<3 ;i++)

    {

        System.out.println(sh[i].toString()+" sides "+sh[i].numberOfSides());

    }}}