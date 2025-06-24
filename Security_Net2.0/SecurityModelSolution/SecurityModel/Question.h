using namespace System;
using namespace System::Collections::Generic; 

namespace SecurityModel {
    public ref class Question {
    public:
        int ID;
        String^ question;
        String^ Answer;
        bool FAQ;
        String^ Status;
        Question() {}
        Question(int id, String^ question, String^ answer, bool faq, String^ status) {
            ID = id;
            this->question = question;
            Answer = answer;
            FAQ = faq;
            Status = status;
        }
    };
}