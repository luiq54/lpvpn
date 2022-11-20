#include <discord_game_sdk.h>
// #include <MemoryModule.h>
#include <dlfcn.h>

#include "rc.h"

typedef enum EDiscordResult (*DiscordCreateFunc)(DiscordVersion version, struct DiscordCreateParams* params, struct IDiscordCore** result);

enum EDiscordResult DiscordCreate(DiscordVersion version, struct DiscordCreateParams* params, struct IDiscordCore** result) {
    // auto file = lpvpn::fs.open();
    // auto module = MemoryLoadLibrary(file.begin());
    auto module = dlopen("discord_game_sdk.dll", RTLD_LAZY);
    DiscordCreateFunc func = (DiscordCreateFunc)dlsym(module, "DiscordCreate");
    return func(version, params, result);
}
