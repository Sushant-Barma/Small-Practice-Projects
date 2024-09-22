using System;

namespace Code
{
    abstract class Professions
    {
        public abstract string Name { get; set; }
        public abstract string Position { get; set; }
        public abstract string Experience_Years { get; set; }
        public abstract void Info();
    }

    class Software_Developer: Professions
    {
        public override string Name { get; set; }
        public override string Position { get; set; }
        public override string Experience_Years { get; set; }
        public override void Info()
        {
            Console.WriteLine($"\n--------------------------------------------------\nName: {this.Name}\nPosition: {this.Position}\nExperience Years: {this.Experience_Years}\n--------------------------------------------------\n");
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            var software_dev1 = new Software_Developer
            {
                Name = "Carl",
                Position = "Junior Developer",
                Experience_Years = "1 Year"
            };

            var software_dev2 = new Software_Developer
            {
                Name = "Jack",
                Position = "Senior Developer",
                Experience_Years = "3 Years"
            };

            var software_dev3 = new Software_Developer
            {
                Name = "Jaiden",
                Position = "Senior Developer",
                Experience_Years = "5 Years"
            };

            software_dev1.Info();
            software_dev2.Info();
            software_dev3.Info();

            Console.ReadKey();
        }
    }
}