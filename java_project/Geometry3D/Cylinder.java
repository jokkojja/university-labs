package Geometry3D;
import Geometry2D.*;

public class Cylinder
  {
    Figure f;
    double h;

    Cylinder(Figure f, double h)
      { 
       this.f = f;
       this.h = h;
      }

         public void Show()

         {


          System.out.plintln('Radius = ' + f.Show());
          System.out.plintln('Height = ' + h);  
           
            
         }


             public double CalcVolume()

             {
                
                return f.Area() * h;
               
             }
  }