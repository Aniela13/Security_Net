using namespace System;
using namespace System::Collections::Generic; 

namespace SecurityModel {
    public ref class Question {
    public:
        int Id;
        property String^ question;
        property String^ Answer;
        property bool IsFAQ;
        property String^ Status;
        Question() {}
        Question(String^ question, String^ answer, bool faq) {
            this->question = question;
            Answer = answer;
            IsFAQ = faq ;
            Status = "Vigente";
        }
    };
}