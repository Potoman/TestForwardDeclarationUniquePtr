#include <memory>

#include "ttest.h"

void destroy(TTest * ptr) {
    // Here the destructor used be unique_ptr deleter.
};

// Global variable of our forward declaration :
TTest * g_test = nullptr;

int main(int argc, char const *argv[]) {

    // Compilation here success.
    // Without destroy, the unique_ptr are going to use a sizeof on g_test
    // and so the build fail.
    std::unique_ptr<TTest, void(*)(TTest*)> m_test(g_test, destroy);

    return 0;
}
