import java.util.*;
class A
{
	interface B
	{
		void show();
		
	}
}
class C implements A.B{
	public void show()
	{
		System.out.println("Show method of interface A inside class B");
		
	}
}
public class interface_in_class {
public static void main(String  args[])
{
	A.B obj;
	C c=new C();
	obj=c;
	c.show();
}
}
//similarly for interface in interface
