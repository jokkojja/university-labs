import java.util.Scanner;
package Test;
import Geometry2D.*;
import Geometry3D.*;

public class Main
 {
    public static void main (String [] args)
    {
      Figure cir = new Circle (10);
      Figure rec = new Rectangle (5,10);
      Cylinder cy = new Cylinder(cir, 10);
      cy.Show();
      cy.Volume();
    }
 }