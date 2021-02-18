package Geometry2D;

public class Rectangle extends Figure
 {
   double length;
   double weigth;

     Rectangle(double length, double weigth)
       { 

          this.length = length;
          this.weigth = weigth;

       }
     public void Show()
     {
       System.out.plintln('Length = ' + length); 
       System.out.plintln('Weigth = ' + weigth);
     }
         public double Area()
         {
            return length * weigth;
         }
 }