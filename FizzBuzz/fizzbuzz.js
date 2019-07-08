for ( i = 0; i <= 30; i++ )
{
    if ( i % 15 == 0 ) // if i is divisible by both 3 and 5, which would be 15
    {
        console.log('FizzBuzz');
    }
    else if ( i % 3 == 0 ) // if i is divisible by 3
    {
        console.log('Fizz');
    }
    else if ( i % 5 == 0 ) // if i is divisible by 5
    {
        console.log('Buzz');
    }
    else { console.log(' '); }
}