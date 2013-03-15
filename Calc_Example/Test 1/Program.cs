using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


//This is a calculator in C#. This is simply an example I used
//to demonstrate, how methods and parsing worked to someone
//who needed help, with their homework assignment.
namespace Test_1
{
    class Program
    {

        public static int add(int a, int b)
        {
            int result = a + b;
            return result;
        }
        
        static void Main()
        {
            int num1, num2, result;
            Console.WriteLine("This is a basic calculator that adds");
            Console.Write("Please give me the first number to add ");
            num1 = int.Parse(Console.ReadLine());
            Console.Write("Please give me the second number to add ");
            num2 = int.Parse(Console.ReadLine());
            result = add(num1, num2);
            Console.WriteLine("The result of {0} + {1} is {2}", num1, num2, result);
            Console.ReadLine();          

        }
    }
}


     