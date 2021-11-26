#include "iostream"
#include "workflow/WFHttpServer.h"
#include "controller/router.h"

int main() {
    auto server = new WFHttpServer([](WFHttpTask *task) {
        auto res = process(task->get_req());
        task->get_resp()->append_output_body(res->to_string());

        switch (res->get_code()) {
            case -1:
                task->get_resp()->set_status_code("404");
                break;
        }

        delete res;
    });

    server->start(8233);
    server->wait_finish();

    delete server;
    return 0;
}
