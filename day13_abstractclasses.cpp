//Write MyBook class
class MyBook : protected Book{
    int price;
    public:
    MyBook(string title,string author,int price):Book(title,author) {this->price=price;};
        void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
