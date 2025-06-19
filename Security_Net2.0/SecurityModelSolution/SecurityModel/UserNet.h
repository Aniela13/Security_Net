using namespace System;


namespace SecurityModel {
    public ref class UserNet {
    public:
        String^ UserName;
        int Id;
        String^ Password;

        UserNet() {}
        UserNet(String^ userName, String^ password) {
            UserName = userName;
            Password = password;
        }
        virtual void Register();

        virtual void Login();
    };
}