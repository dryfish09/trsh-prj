
#include <iostream>

#if defined(__APPLE__)
#  include <TargetConditionals.h>
#endif

int main() {
#if defined(_WIN32) && !defined(_WIN64)
    std::cout << "running on 32-bit Windows. Respect, you're a living museum. "
                 "Hope today has no windows updates!\n";
#elif defined(_WIN32)
    std::cout << "running on windows, have a good day, user! "
                 "I hope today has no windows updates\n";
#elif defined(__ANDROID__)
    std::cout << "hi Android! Your phone is probably running Stockfish at depth 30 "
                 "in the background while you scroll memes.\n";
#elif defined(__linux__) && defined(__EMSCRIPTEN__)
    std::cout << "hello from WebAssembly! You compiled Linux to run in a browser, "
                 "and now Stockfish runs in a tab. Why? Because you can. Respect.\n";
#elif defined(__MVS__)   // IBM z/OS
    std::cout << "hi z/OS! You're a mainframe that refuses to die. "
                 "Stockfish would need a JCL deck just to say hello.\n";
#elif defined(__QNX__)
    std::cout << "hi QNX! You're in cars, trains, and medical devices. "
                 "Stockfish in your car's ECU would be hilarious.\n";
#elif defined(__VXWORKS__)
    std::cout << "hi VxWorks! You're in Mars rovers and fighter jets. "
                 "Stockfish probably would not help the rover, but it would look cool.\n";
#elif defined(__rtems__)
    std::cout << "hi RTEMS! Real-time, space-grade, and still compiling C++. "
                 "Stockfish at 1 Hz would be a philosophical experience.\n";
#elif defined(__ZEPHYR__)
    std::cout << "hi Zephyr! You run on tiny IoT chips and somehow have a C++ compiler. "
                 "Stockfish would need more RAM, but nice try.\n";
#elif defined(__Plan9__) || defined(__plan9__)
    std::cout << "hi Plan 9! Your preprocessor is 'simple but adequate', "
                 "and Stockfish is probably wondering what a 'file descriptor' even is here.\n";
#elif defined(__FreeBSD__)
    std::cout << "hi FreeBSD! You're the sysadmin's sysadmin. Your uptime is older "
                 "than Stockfish's source tree.\n";
#elif defined(__OpenBSD__)
    std::cout << "hi OpenBSD! Secure by default, funny by accident. "
                 "Your mascot has more charisma than most OSes, and Stockfish still compiles.\n";
#elif defined(__NetBSD__)
    std::cout << "hi NetBSD! You run on a toaster, a fridge, and probably my old router. "
                 "Portability is your personality, and Stockfish will happily run on all of them.\n";
#elif defined(__DragonFly__)
    std::cout << "hi DragonFly BSD! You forked from FreeBSD to do cool kernel things, "
                 "and somehow Stockfish still builds. Impressive.\n";
#elif defined(__sun) || defined(__SVR4)
    std::cout << "hi Solaris! You're still alive? That's genuinely impressive. "
                 "Say hi to ZFS for me, and good luck compiling modern Stockfish.\n";
#elif defined(__HAIKU__)
    std::cout << "hi Haiku! BeOS never died, it just went indie. "
                 "Your UI is prettier than most modern distros, and Stockfish runs on it.\n";
#elif defined(__MENUETOS__)   // macro giả định, phải tự define
    std::cout << "hi MenuetOS! You're written entirely in assembly, so this C++ code "
                 "is already a miracle. Stockfish in FASM? Now that's a challenge.\n";
#elif defined(__TURING_MACHINE__)   // macro tự define để troll
    std::cout << "hi Turing machine! The C preprocessor isn't Turing-complete, "
                 "so this branch is technically a lie. But respect for trying.\n";
#elif defined(__wasm__) || defined(__wasm32__) || defined(__wasm64__)
    std::cout << "hi WebAssembly! You're fast, sandboxed, and everywhere. "
                 "JavaScript is jealous, and Stockfish WASM is terrifying.\n";
#elif defined(ARDUINO) || defined(__AVR__) || defined(__arm__) || defined(__xtensa__) || defined(__MSP430__)
    std::cout << "hi microcontroller! You have 2KB of RAM and still run this. "
                 "Stockfish needs a bit more, but your blink sketch is elite.\n";
#elif defined(__x86_64__) && defined(__unix__)
    std::cout << "hi generic Unix on x86_64! You're the 'it compiles, ship it' of OSes. "
                 "Stockfish runs here too, obviously.\n";
#elif defined(__linux__)
    std::cout << "hi cute linux, i think your author isn't funny. "
                 "Also, Stockfish thanks you for the free CPU cycles.\n";
#elif defined(__APPLE__) && TARGET_OS_IPHONE
    std::cout << "hi iPhone! You paid for the walled garden, now enjoy the flowers. "
                 "Android and Stockfish say hi.\n";
#elif defined(__APPLE__)
    std::cout << "hi, let's eat some apple! Google and Microsoft ecosystem is better, "
                 "ready for Android or Windows? Stockfish runs fine on all of them, by the way.\n";
#else
    std::cout << "I don't know what you are, but have a good day! "
                 "Maybe you're a Turing machine, maybe you're a fridge. Either way, respect. "
                 "Stockfish would probably still find a way to run.\n";
#endif
    return 0;
}
