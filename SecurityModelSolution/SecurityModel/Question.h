using namespace System;
using namespace System::Collections::Generic; 

namespace SecurityModel {
    public ref class Question {
    public:
        String^ question;
        String^ Answer;
        Question(String^ question, String^ answer) {
            this->question = question;
            Answer = answer;
        }
    };
}