using namespace System;
using namespace System::Collections::Generic; 

namespace SecurityModel {
    public ref class Question {
    public:
        int ID;
        property String^ question;
        property String^ Answer;
        property bool FAQ;
        property String^ Status;
        Question() {}
        Question(int id, String^ question, String^ answer) {
            ID = id;
            this->question = question;
            Answer = answer;
            FAQ = false;
            Status = nullptr;
        }
        Question(int id, String^ question) {
            ID = id;
            this->question = question;
            Answer = "Por definir...";
  
        }
    };
}