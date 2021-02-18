package Geometry2D;
public class Circle extends Figure
{
 double r;
 Circle(double r)
  {
    this.r = r; 
  }
 public void Show()
    {
      System.out.println('radius' + r)
    }
 public double Area()
      {s
       return 3.14*r*r;
      }

}