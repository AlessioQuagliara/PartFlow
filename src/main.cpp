#include "crow.h"
#include <iostream>
#include <cstdlib>
#include <pqxx/pqxx>

int main(){

    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        crow::mustache::context ctx;
        return crow::mustache::load("index.html").render(ctx);
    });

    CROW_ROUTE(app, "/login")([](){
        crow::mustache::context ctx;
        return crow::mustache::load("login.html").render(ctx);
    });

    app.port(8080).multithreaded().run();
}