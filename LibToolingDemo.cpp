#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendAction.h"
#include "clang/Tooling/Tooling.h"
#include "clang/Driver/Options.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "llvm/Support/CommandLine.h"
#include <iostream>
#include "clang/Lex/HeaderSearch.h"
#include "clang/Lex/Preprocessor.h"
static llvm::cl::OptionCategory OptsCategory("LibToolingDemo");

using namespace clang;
using namespace clang::tooling;
using namespace llvm;
using namespace std;

class FuncVisitor : public RecursiveASTVisitor<FuncVisitor> {
public:
    bool VisitObjCMessageExpr(ObjCMessageExpr *Msg) {
        Selector Sel = Msg->getSelector();
        std::string SelName = Sel.getAsString();
        std::cout << "Found Objective-C method call: " << SelName << std::endl;
        return true;
    }
};

class MyASTConsumer : public clang::ASTConsumer {
public:
    explicit MyASTConsumer(clang::ASTContext* context) : context_(context) {}

    virtual void HandleTranslationUnit(ASTContext &Context) override {
        std::cout << "HandleTranslationUnit。" << std::endl;
        FuncVisitor Visitor;
        Visitor.TraverseDecl(Context.getTranslationUnitDecl());
    }

private:
    clang::ASTContext* context_;
};

class LibToolingDemo : public clang::ASTFrontendAction {
public:
    LibToolingDemo() {}

    void EndSourceFileAction() override {
        std::cout << "End(test LibToolingDemo)\n";
    }

    std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(clang::CompilerInstance& compiler, llvm::StringRef  inFile) override {
        return std::make_unique<MyASTConsumer>(&compiler.getASTContext());
    }
};

int main(int argc, const char** argv) {
    auto op = CommonOptionsParser::create(argc, argv, OptsCategory);
    ClangTool Tool(op->getCompilations(), op->getSourcePathList());
    int result = Tool.run(newFrontendActionFactory<LibToolingDemo>().get());
    return result;
}
