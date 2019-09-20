 abstract class abs{
 abstract void example1();
 abstract void example2();
}

class abstract_class extends abs{
  
	public void example1()
	  {
	    System.out.println("Example 1");
	  }
  public void example2()
  {
    System.out.println("Example 2");
  }
  public static void main(String[] args) {
	  abstract_class obj=new abstract_class();
   obj.example1();
    obj.example2();
  }
}