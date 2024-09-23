using System;

namespace Code
{
    //Declaing an Employee class
    class Employee
    {
        public Employee(string name, int age, int id) //Declaing our Constructor for this class
        {
            this.name = name; //Taking value for "name" string variable
            this.age = age; //Taking value for "age" int variable
            this.id = id; //Taking value for "id" int variable
        }

        public void Info() //Declaring a method called "Info()" that displays the details of the asked employee
        {
            Console.WriteLine($"\n--------------------------------------------------\nEmployee's Details:\n\nName: {this.name}\nAge: {this.age}\nId: {this.id}\n--------------------------------------------------\n");
        }
    }

    class Pro
    {
        static void Main(string[] args)
        {
            //Initializing 5 Employee Objects with properties already assigned with the help of Constructors
            var emp1 = new Employee("Carl", 24, 432132);
            var emp2 = new Employee("Jack", 24, 432132);
            var emp3 = new Employee("Denis", 24, 432132);
            var emp4 = new Employee("Jaiden", 24, 432132);
            var emp5 = new Employee("Mark", 24, 432132);

            //Displaying the details of the employees using "Info()" method declared inside "Employee" class
            emp1.Info();
            emp2.Info();
            emp3.Info();
            emp4.Info();
            emp5.Info();

            //Waiting for user to press any key to continue...
            Console.ReadKey();
        }
    }
}
