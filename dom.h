#import <vector>
#import <string>
#import <map>
#import <memory>

namespace tb {

struct Node {
    virtual void Dump() = 0;
};

struct TextNode : public Node {
    std::string text;

    TextNode(const std::string& text) : text(text) {
    }

    void Dump() override;
};

struct ElementNode : public Node {
    std::vector<std::shared_ptr<Node>> children;
    std::string tag;
    std::map<std::string, std::string> attributes;

    ElementNode(const std::string& tag) : tag(tag) {
    }

    void AddChild(std::shared_ptr<Node> node) {
        children.push_back(node);
    }

    void Dump() override;

    void DumpChildren();
};

}

extern void TestNode();