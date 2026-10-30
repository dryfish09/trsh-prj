// me when loving someone:
#include <print>
#include <string>
void log_info(const std::string& input) {
    std::println("INFO: {}", input);
}
void log_error(const std::string& input, const std::string& type) {
    std::println("{}: {}", type, input);
}
void log(const std::string& input, const std::string& type_or_nameof_proc) {
    std::println("{}: {}", type_or_nameof_proc, input);
}
int main() {
    log_info("preparing to go to school");
    log_info("go to school... done");
    log_info("oh my god, my \"crush\", she so beautiful!");
    log_info("saying hello... done");
    log_error("she ignores me", "FATAL");
    log_info("preparing dependencies for first subject");
    log_info("listening teacher");
    log("looking for her actions", "EYE");
    log_info("lesson ended, \"we\" have 5 minutes for rest");
    log("going out of class", "feet");
    log_info("she also here!");
    // repeat until... idk?
    return 0;
}
