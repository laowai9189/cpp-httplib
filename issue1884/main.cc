#include <httplib.h>
#include <iostream>

using namespace std;

int main(void) {
  cout << "### cpp-httplib client test..." << std::endl;
  if (auto res = httplib::Client("server:80").Get("/")) {
    cout << res->status << endl;
    cout << res->get_header_value("Content-Type") << endl;
    cout << res->body << endl;
  } else {
    cout << res.error() << endl;
  }

  return 0;
}
