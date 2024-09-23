using System;

namespace Code
{
    class Employee
    {
        public Employee(string name, int age, int id)
        {
            this.name = name;
            this.age = age;
            this.id = id;
        }

        public void Info()
        {
            Console.WriteLine($"\n--------------------------------------------------\nEmployee's Details:\n\nName: {this.name}\nAge: {this.age}\nId: {this.id}\n--------------------------------------------------\n");
        }
    }

    class Pro
    {
        static void Main(string[] args)
        {
            var emp1 = new Employee("Carl", 24, 432132);
            var emp2 = new Employee("Jack", 24, 432132);
            var emp3 = new Employee("Denis", 24, 432132);
            var emp4 = new Employee("Jaiden", 24, 432132);
            var emp5 = new Employee("Mark", 24, 432132);

            emp1.Info();
            emp2.Info();
            emp3.Info();
            emp4.Info();
            emp5.Info();

            Console.ReadKey();
        }
    }
}