using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prac2
{

 interface IStudent
        {
            string getStudent();
            string getPass();
        }

        class Student : IStudent
        {
            private int studentAge { get; set; }
            private string studentName { get; set; }


            public string StudentName
            {
                get
                {
                    return studentName;
                }
                set
                {
                    studentName = value;
                }
            }



            public int StudentAge
            {
                get
                {
                    return studentAge;
                }
                set
                {
                    if (value > 9 && value < 81)
                    {
                        studentAge = value;
                    }
                    else
                    {
                        studentAge = 0;
                    }
                }
            }

            public Student()
            {

            }


            public Student(int age)
            {
                studentAge = age;
            }

            public Student(string name)
            {
                studentName = name;
            }


            public Student(int age, string name)
            {
                studentAge = age;
                studentName = name;
            }

            public string getStudent()
            {
                return "Student Name: " + studentName + " is: " + studentAge + " years old.";
            }

            public string getPass()
            {
                string cut = studentName.Substring(0, 3);
                string age = studentAge.ToString();

                int sum = 0;
                for (int k = 0; k < age.Length; k++)
                {
                    string character = age.Substring(k, 1);
                    sum += Convert.ToUInt16(character);
                }

                return cut + sum;
            }

        }
    class StudentPasswords
    {

       

        static void Main(string[] args)
        {

            string name = Console.ReadLine();
            string age = Console.ReadLine();
            int intAge;
            if (int.TryParse(age, out intAge) == false)
            {
                intAge = -1;
            }
           
            Student one = new Student(intAge, name);
            System.Console.WriteLine(one.getStudent());
            one.StudentAge = 18;
            System.Console.WriteLine(one.StudentAge);
            System.Console.WriteLine(one.getStudent());
            System.Console.WriteLine(one.getPass());

            Student[] compStudents = new Student[3];
            input(compStudents);
            display(compStudents);

            System.Console.ReadLine();
            
           // one.setstudentName() = "kivesh";

        }


        public static void input(Student[] students)
        {
            for(int i=0; i< students.Length;i++)
            {
                Console.Write("Enter students name: ");
                 string name = Console.ReadLine();
                Console.Write("Enter students age: ");
                string age = Console.ReadLine();
                int intAge;
                if (int.TryParse(age, out intAge) == false)
                {
                    intAge = -1;
                }
                students[i] = new Student(intAge, name);
                

            }
        }


        public static void display(Student[] students)
        {
            for (int i = 0; i < students.Length; i++)
            {

                System.Console.WriteLine(students[i].getStudent());

                System.Console.WriteLine(students[i].getPass());
            }
        }
    }
}
