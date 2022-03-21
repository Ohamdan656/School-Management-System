#include<iostream>
#include<string>
#include<cassert>
#include<iomanip>
#include<fstream>
using namespace std;
using namespace System::Data;
using namespace System::Data::SqlClient;
class Person{
private:
	string fname;
	string lname;
	string email;
	string gender;
	string contact;
	string address;
	string birth;
public:
	void set_fname(string fname1){ fname = fname1; }
	void set_lname(string lname1){ lname = lname1; }
	void set_email(string email1){ email = email1; }
	void set_gender(string gender1){ gender = gender1; }
	void set_contact(string contact1){ contact = contact1; }
	void set_address(string address1){ address = address1; }
	void set_birth(string date){ birth = date; }
	string get_fname(){ return fname; }
	string get_lname(){ return lname; }
	string get_email(){ return email; }
	string get_gender(){ return gender; }
	string get_contact(){ return contact; }
	string get_address(){ return address; }
	string get_birth(){ return birth; }
};
class Student :public Person{
private:
	string roll;
	string reg_date;
	string clas;
	string father;
	string mother;
	string father_pro;
	string mother_pro;
	string parent_contact;
	string blood;
	string fee;
public:
	Student(){}
	void set_roll(string roll1){ roll = roll1; }
	void set_reg_date(string date){ reg_date = date; }
	void set_clas(string clas1){ clas = clas1; }
	void set_father(string father1){ father = father1; }
	void set_mother(string mother1){ mother = mother1; }
	void set_father_pro(string pro){ father_pro = pro; }
	void set_mother_pro(string pro){ mother_pro = pro; }
	void set_parent_contact(string contact){ parent_contact = contact; }
	void set_blood(string blood1){ blood = blood1; }
	void set_fee(string fee1){ fee = fee1; }
	string get_roll(){ return roll; }
	string get_reg_date(){ return reg_date; }
	string get_clas(){ return clas; }
	string get_father(){ return father; }
	string get_mother(){ return mother; }
	string get_father_pro(){ return father_pro; }
	string get_mother_pro(){ return mother_pro; }
	string get_parent_contact(){ return parent_contact; }
	string get_blood(){ return blood; }
	string get_fee(){ return fee; }
	~Student(){}
};
class Teacher :public Person{
private:
	string join_date;
	string pass;
	string con_pass;
	string cnic;
	string qual;
	string salary;
public:
	Teacher(){}
	void set_join_date(string date){ join_date = date; }
	void set_pass(string pass1){ pass = pass1; }
	void set_con_pass(string con_pass1){ con_pass = con_pass1; }
	void set_cnic(string cnic1){ cnic = cnic1; }
	void set_qual(string qual1){ qual = qual1; }
	void set_salary(string salary1){ salary = salary1; }
	string get_join_date(){ return join_date; }
	string get_pass(){ return pass; }
	string get_con_pass(){ return con_pass; }
	string get_cnic(){ return cnic; }
	string get_qual(){ return qual; }
	string get_salary(){ return salary; }
	~Teacher(){}
};

class Course{
	string c_name;
	string code;
	string c_class;
	string parent_course;
	string teacher;
public:
	Course(){}
	void set_c_name(string name){ c_name = name; }
	void set_code(string code1){ code = code1; }
	void set_c_class(string clas){ c_class = clas; }
	void set_parent_course(string course){ parent_course = course; }
	void set_teacher(string teacher1){ teacher = teacher1; }
	string get_c_name(){ return c_name; }
	string get_code(){ return code; }
	string get_c_class(){ return c_class; }
	string get_parent_course(){ return parent_course; }
	string get_teacher(){ return teacher; }
	~Course(){}
};

class Administrator {
public:
	~Administrator(){}
	void add_teacher(Teacher &obj)
	{
		ofstream write;
		write.open("Teachers.txt", ios::app);
		if (!write)
			cout << "\nTeacher file NOT Opened ERROR!";
		else
		{
			write << endl;
			write << obj.get_cnic() << " ";
			write << obj.get_fname() << " ";
			write << obj.get_lname() << " ";
			write << obj.get_email() << " ";
			write << obj.get_gender() << " ";
			write << obj.get_contact() << " ";
			write << obj.get_birth() << " ";
			write << obj.get_join_date() << " ";
			write << obj.get_pass() << " ";
			write << obj.get_qual() << " ";
			write << obj.get_salary() << " ";
			write << obj.get_address() << " ";
		}
	}

	void add_student(Student &obj)
	{
		ofstream write;
		write.open("Students.txt", ios::app);
		if (!write)
			cout << "\nStudent file NOT Opened ERROR!";
		else
		{
			write << endl<<" ";
			write << obj.get_roll() << " ";
			write << obj.get_fname() << " ";
			write << obj.get_lname() << " ";
			write << obj.get_email() << " ";
			write << obj.get_reg_date() << " ";
			write << obj.get_clas() << " ";
			write << obj.get_gender() << " ";
			write << obj.get_contact() << " ";
			write << obj.get_father() << " ";
			write << obj.get_mother() << " ";
			write << obj.get_father_pro() << " ";
			write << obj.get_mother_pro() << " ";
			write << obj.get_parent_contact() << " ";
			write << obj.get_birth() << " ";
			write << obj.get_blood() << " ";
			write << obj.get_fee() << " ";
			write << obj.get_address() <<" "<< 0;
		}
		//SqlClient a = new SqlClient();
		
	//	MessageBox->Show("Data Inserted!!!");
		write.close();
	}
	void add_course(Course &obj)
	{
		ofstream write;
		write.open("Courses.txt",ios::app);
		if (!write)
			cout << "\nCourse file NOT Opened ERROR!";
		else
		{
			write << endl;
			write << obj.get_c_name() << " ";
			write << obj.get_code() << " ";
			write << obj.get_c_class() << " ";
			write << obj.get_parent_course();
		}
		write.close();
		
	}
	int view_students()
	{
		int size = 0;
		ifstream read;
		read.open("Students.txt");
		if (!read)
			cout << "\nStudents file NOT Opened!";
		else
		{
			string temp;
			while (!read.eof())
			{
				read >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp
					>> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp;
				size++;
			}
		}
		read.close();
		return size;
	}
	int view_teachers()
	{
		int size = 0;
		ifstream read;
		read.open("Teachers.txt");
		if (!read)
			cout << "\nTeachers file NOT Opened!";
		else
		{
			string temp;
			while (!read.eof())
			{
				read >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp >> temp
					>> temp >> temp >> temp >> temp;
				size++;
			}
		}
		read.close();
		return size;
	}
	int view_courses()
	{
		int size = 0;
		ifstream read;
		read.open("Courses.txt");
		if (!read)
			cout << "\nCourses file NOT Opened!";
		else
		{
			string temp;
			while (!read.eof())
			{
				read >> temp >> temp >> temp >> temp;
				size++;
			}
		}
		read.close();
		return size;
	}
	void assign_course_to_teacher(Course &obj)
	{
		ofstream write;
		write.open(obj.get_teacher(),ios::app);
		if (!write)
			cout << "\nAssigning Course file NOT Opened!";
		else
		{
			write << endl << obj.get_teacher() << " ";
			write << obj.get_c_name() << " ";
			write << obj.get_parent_course() << " ";
			write << obj.get_c_class();
		}
		write.close();
	}
};