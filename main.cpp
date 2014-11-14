#import "dom.h"

using namespace std;

void TestNode() {
    tb::ElementNode html("html");
    html.AddChild(make_shared<tb::ElementNode>("head"));
    html.AddChild(make_shared<tb::ElementNode>("body"));

    html.Dump();
}

int main() {
    TestNode();
    return 0;
}