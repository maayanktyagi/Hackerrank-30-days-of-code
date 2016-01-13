class Grade :  public Student{
    private:
         int score; 
    public:
    Grade(string fname,string lname,int p,int score):Student(fname,lname,p) {this->score=score;}
    char calculate(){
        char Grade;
        if( score < 40 )
            
        {Grade='D';}
            else if(score>=40&&score<60)
            {Grade='B';}
            else if(score>=60&&score<75)
            {Grade='A';}
            else if (score>=75&&score<90)
            {Grade='E';}
            else if(score>=90&&score<=100)
            {Grade='O';}
                return Grade;
    }
};
