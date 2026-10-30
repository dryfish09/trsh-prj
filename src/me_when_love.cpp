// me when loving someone:
#include <print>
#include <string>
void log_info(const std::string& input) {
    std::println("INFO: {}", input);
}
void log_error(const std::string& input, const std::string type) {
    std::println("{}: {}", type, input);
}
int main() {
    log_info("preparing to go to school");
    log_error("Idk whqt can I do next", "FATAL");
    return 1;
}
