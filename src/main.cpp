#include "crow.h"

int main(){

    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        crow::mustache::context ctx;
        return crow::mustache::load("index.html").render(ctx);
    });

    CROW_ROUTE(app, "/login")([](){
        auto page = crow::mustache::load_text("login.html");
        return page;
    });

    app.port(8080).multithreaded().run();
}