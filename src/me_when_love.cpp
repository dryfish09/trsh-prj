// me when loving someone:
#include <print>
#include <string>
void log_info(const std::string& input) {
    std::println("INFO: {}", input);
}
void log_error(const std::string& input, const std::string& type) {
    std::println("{}: {}", type, input);
}
int main() {
    log_info("preparing to go to school");
    log_info("go to school... done");
    log_info("oh my god, my \"crush\", she so beautiful!");
    log_info("saying hello... done");
    log_error("she ignores my", "FATAL");
    log_info("preparing dependencies for first subject");
    // idk
    return 0;
}
