package ex3;
public class Circle {
	
	 private double radius;
	
     
     public Circle(double radius)
      {
         this.radius= radius;
      }
     public double perimeter()
      {
         return  2 * Math.PI * radius;
      }
     public double area()
      {
        return Math.PI * radius * radius;
      }
}
