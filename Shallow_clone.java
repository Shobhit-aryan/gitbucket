import java.util.ArrayList;
class test{
	int x,y;
}
class test2 implements Cloneable
{
	int a;
	int b;
	test c=new test();
	public Object clone() throws CloneNotSupportedException
	{
		return super.clone();
	}
}
public class Shallow_clone {
	public static void main(String args[]) throws CloneNotSupportedException
	{
		 test2 t1=new test2();
		 t1.a=10;
		 t1.b=20;
		 t1.c.x=30;
		 t1.c.y=40;
		 
		 test2 t2=(test2)t1.clone();
		 t2.a=100;
		 t2.c.x=300;
		 System.out.println(t1.a +" "+t1.b+" "+t1.c.x+" "+t1.c.y);
		 System.out.println(t2.a +" "+t2.b+" "+t2.c.x+" "+t2.c.y);
	}
}
