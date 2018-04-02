# -Student-achievement-management-system
class Student
{
	public:
		void input(void);
		void show();
		void search();
		void change();
		void add();
		void permutation();
		void del();	
		void writefile();
		void insertion();
		void readfile(); 
		
	private:
		int num;
		static int n;	
		double chinese;
		double math;
		double english;
		double totlai;
		char name[60];
};
