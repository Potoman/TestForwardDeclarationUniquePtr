#include <memory>

#include "ttest.h"

void destroy(TTest * ptr) {
};

TTest * g_test = nullptr;

int main(int argc, char const *argv[]) {
    std::unique_ptr<TTest, void(*)(TTest*)> m_test(g_test, destroy);
    return 0;
}
