using System;

namespace Code
{
    abstract class Professions
    {
        public abstract string name { get; set; }
        public abstract string pos { get; set; }
        public abstract int expYrs { get; set; }
        public abstract string mainLng { get; set; }
        public abstract void Info();
    }

    class Software_Developer: Professions
    {
        public override string name { get; set; }
        public override string pos { get; set; }
        public override int expYrs { get; set; }
        public override string mainLng { get; set; }
        public override void Info()
        {
            Console.WriteLine($"\n--------------------------------------------------\nName: {this.name}\nPosition: {this.pos}\nExperience Years: {this.expYrs}\nMain Programming Language: {this.mainLng}\n--------------------------------------------------\n");
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            var software_dev1 = new Software_Developer
            {
                name = "Carl",
                pos = "Junior Developer",
                expYrs = 2,
                mainLng = "Java"
            };

            var software_dev2 = new Software_Developer
            {
                name = "Jack",
                pos = "Junior Developer",
                expYrs = 2,
                mainLng = "JavaScript"
            };

            var software_dev3 = new Software_Developer
            {
                name = "Jaiden",
                pos = "Senior Developer",
                expYrs = 5,
                mainLng = "C++"
            };

            software_dev1.Info();
            software_dev2.Info();
            software_dev3.Info();

            Console.ReadKey();
        }
    }
}
