#include <iostream>
#include <httplib.h>

int main()
{
    httplib::Server server;
    // separate that by handlers
    server.Get("/", [](const httplib::Request &, httplib::Response &res) {
        res.set_content("hello guys", "text/plain");
    });

    std::cout << "Serving application on port 8000";
    server.listen("0.0.0.0", 8000);
}
