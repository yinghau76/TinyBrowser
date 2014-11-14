#import <iostream>
#import "dom.h"

using std::cout;
using std::endl;

namespace tb {

void ElementNode::Dump() {
    cout << tag << endl;
    DumpChildren();
}

void ElementNode::DumpChildren() {
    for (auto c: children) {
        c->Dump();
    }
}

void TextNode::Dump() {
    cout << text << endl;
}

}

