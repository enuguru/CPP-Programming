
#include <iostream>
using namespace std;

class modem
{
    public:
      virtual void send_data() = 0;
      virtual void receive_data() = 0;
};

class dial_up_modem : public modem
{
    public:
      virtual void send_data()
      { 
          cout << "\n" << "This is the dial_up_modem send_data() being called";
      }
      virtual void receive_data()
      { 
          cout << "\n" << "This is the dial_up_modem receive_data() being called" << "\n";
      }
};

class broadband_modem : public modem
{
    public:
      virtual void send_data()
      { 
          cout << "\n" << "This is the broadband_modem send_data() being called";
      }
      virtual void receive_data()
      { 
          cout << "\n" << "This is the broadband_modem receive_send_data() being called" << "\n";
      }
};


class WiFi_modem : public modem
{
    public:
      virtual void send_data()
      { 
          cout << "\n" << "This is the WiFi_modem send_data() being called";
      }
      virtual void receive_data()
      { 
          cout << "\n" << "This is the WiFi_modem receive_data() being called" << "\n";
      }
};


class ThreeG_modem : public modem
{
    public:
      virtual void send_data()
      { 
          cout << "\n" << "This is the ThreeG_modem send_data() being called";
      }
      virtual void receive_data()
      { 
          cout << "\n" << "This is the ThreeG_modem receive_send_data() being called" << "\n";
      }
};


int main()
{
//  WiFi_modem objone;
  ThreeG_modem objone;
  broadband_modem objtwo;
  modem &refvar = objtwo;
  refvar.send_data();
  refvar.receive_data();
  return 0;
}    
