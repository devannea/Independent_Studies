class Main {
  public static void main(String[] args)
  {
    for ( int i = 0; i <= 30; i++ )
    {
      if ( i % 15 == 0 )
      {
        System.out.println(i + "FizzBuzz");
      }
      else if ( i % 3 == 0 )
      {
        System.out.printIn(i + "Fizz");
      }
      else if ( i % 5 == 0 )
      {
        System.out.printIn(i + "Buzz");
      }
      else { System.out.printIn(i); }
    }
  }
}