using System;

namespace simple_console_calculator
{
	class Program
	{		
		public static void Main(string[] args)
		{
			double firstNumber, secondNumber;
			string action, running = "Yes";
			
			while (running != "N")
			{
				Console.WriteLine("The first number:");
				try
				{
					firstNumber = double.Parse(Console.ReadLine());
				}
				catch
				{
					firstNumber = 0;
					Console.WriteLine("Wrong number!");
					goto label;
				}
						
				Console.WriteLine("The second number:");
				try
				{
					secondNumber = double.Parse(Console.ReadLine());
				}
				catch
				{
					secondNumber = 0;
					Console.WriteLine("Wrong number!");
					goto label;
				}
			
				Console.WriteLine("\nChoose action:");
				Console.WriteLine("'+' - Addition");
				Console.WriteLine("'-' - Subtraction");
				Console.WriteLine("'*' - Multiplication");
				Console.WriteLine("'/' - Division");
				Console.WriteLine("'^' - Exponentiation");
				action = Console.ReadLine();
			
				switch(action)
				{
					case "+":
						Console.WriteLine(firstNumber + secondNumber);
						break;
					case "-":
						Console.WriteLine(firstNumber - secondNumber);
						break;
					case "*":
						Console.WriteLine(Math.Round(firstNumber * secondNumber, 4));
						break;
					case "/":
						if (secondNumber == 0)
						{
							Console.WriteLine("Zero division error!");
							goto label;
						}
						else
						{
							Console.WriteLine(Math.Round(firstNumber / secondNumber, 4));
						}
						break;
					case "^":
						Console.WriteLine(Math.Round(Math.Pow(firstNumber, secondNumber),4));
						break;
					default:
						Console.WriteLine("Wrong action!");
						break;
				}
				
			label:
				Console.WriteLine("Calculate again?('N' if you don`t want)");
				running = Console.ReadLine();
				
				if (running != "N")
					continue;
				else
					break;
			}
			Console.ReadKey(true);
		}
	}
}