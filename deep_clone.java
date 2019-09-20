import java.util.*;
class Test4{
	int x,y;
}
class Test5 implements Cloneable
{
	int a;
	int b;
	Test4 c=new Test4();
	public Object clone() throws CloneNotSupportedException
	{
		Test5 t=(Test5)super.clone();
		t.c=new Test4();
		return t;
	}
}
public class deep_clone {
	public static void main(String args[]) throws CloneNotSupportedException
	{
		 Test5 t1=new Test5();
		 t1.a=10;
		 t1.b=20;
		 t1.c.x=30;
		 t1.c.y=40;
		 
		 Test5 t2=(Test5)t1.clone();
		 t2.a=100;
		 t2.c.x=300;
		 System.out.println(t1.a +" "+t1.b+" "+t1.c.x+" "+t1.c.y);
		 System.out.println(t2.a +" "+t2.b+" "+t2.c.x+" "+t2.c.y);
	}
}
