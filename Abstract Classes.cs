using System;

namespace Code
{
    //Declaring an abstract class called "Professions"
    abstract class Professions
    {
        //An abstract variable for storing name of the person
        public abstract string name { get; set; } //Using "get;" "set;" accessors

        //An abstract variable for storing position of the following profession
        public abstract string pos { get; set; } //Using "get;" "set;" accessors

        //An abstract variable for storing Experience Years for the area of that profession
        public abstract int expYrs { get; set; } //Using "get;" "set;" accessors

        //An abstract method for showing the following person's details (aka Info)
        public abstract void Info();
    }

    //Declaring a class "SoftwareDeveloper" representing Software Developers, inheriting the abstract class "Professions"
    class SoftwareDeveloper: Professions
    {
        public override string name { get; set; } //Overriding the abstract class's "name" variable
        public override string pos { get; set; } //Overriding the abstract class's "pos" variable
        public override int expYrs { get; set; } //Overriding the abstract class's "expYrs" variable
        public string mainLng { get; set; } //A variable to store the main programming language that the software developers knows the most
        
        //Ovveriding the "Info()" method of "Professions" abstract class
        public override void Info()
        {
            //Displaying the software dev's Name, Position, Experience Years, and Main Programming Language that the developer knows the most
            Console.WriteLine($"\n--------------------------------------------------\nName: {this.name}\nPosition: {this.pos}\nExperience Years: {this.expYrs}\nMain Programming Language: {this.mainLng}\n--------------------------------------------------\n");
        }
    }

    //Main class
    class Program
    {
        //Main Method where the main code is executed
        static void Main(string[] args)
        {
            //Initialling 3 software developer objects, assigning their data along with initializing objects with the help of "get; set;" accessors
            var softwareDev1 = new SoftwareDeveloper
            {
                name = "Carl",
                pos = "Junior Developer",
                expYrs = 2,
                mainLng = "Java"
            };

            var softwareDev2 = new SoftwareDeveloper
            {
                name = "Jack",
                pos = "Junior Developer",
                expYrs = 2,
                mainLng = "JavaScript"
            };

            var softwareDev3 = new SoftwareDeveloper
            {
                name = "Jaiden",
                pos = "Senior Developer",
                expYrs = 5,
                mainLng = "C++"
            };

            //Calling the "Info()" method that displays the dev's details 
            softwareDev1.Info();
            softwareDev2.Info();
            softwareDev3.Info();

            //Waiting for user to press any key to continue...
            Console.ReadKey();
        }
    }
}
