#include <array>
#include <string>
#include <iostream>

const std::string Keywords[84] = {"alignas",      "alignof",
                                  "and",          "and_eq",
                                  "asm",          "auto",
                                  "bitand",       "bitor",
                                  "bool",         "break",
                                  "case",         "catch",
                                  "char",         "char16_t",
                                  "char32_t",     "class",
                                  "compl",        "const",
                                  "constexpr",    "const_cast",
                                  "continue",     "decltype",
                                  "default",      "delete",
                                  "do",           "double",
                                  "dynamic_cast", "else",
                                  "enum",         "explicit",
                                  "export",       "extern",
                                  "false",        "float",
                                  "for",          "friend",
                                  "goto",         "if",
                                  "inline",       "int",
                                  "long",         "mutable",
                                  "namespace",    "new",
                                  "noexcept",     "not",
                                  "not_eq",       "nullptr",
                                  "operator",     "or",
                                  "or_eq",        "private",
                                  "protected",    "public",
                                  "register",     "reinterpret_cast",
                                  "return",       "short",
                                  "signed",       "sizeof",
                                  "static",       "static_assert",
                                  "static_cast",  "struct",
                                  "switch",       "template",
                                  "this",         "thread_local",
                                  "throw",        "true",
                                  "try",          "typedef",
                                  "typeid",       "typename",
                                  "union",        "unsigned",
                                  "using",        "virtual",
                                  "void",         "volatile",
                                  "wchar_t",      "while",
                                  "xor",          "xor_eq"};

void PrintKeyword(std::string keyword) { std::cout << keyword << std::endl; }

std::string TypeKeyword() {
        std::string typed;
        std::cin >> typed;
        return typed;
}

int main() {
        for (auto keyword : Keywords) {
                std::string typed = "";
                while (typed != keyword) {
                        PrintKeyword(keyword);
                        typed = TypeKeyword();
                }
        }

        return 0;
}
