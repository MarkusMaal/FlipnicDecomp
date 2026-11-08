#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0020adb4
// Address: 0x20adb4 - 0x20adbc
void entry_0020adb4_0x20adb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020adb4_0x20adb4");
#endif

    ctx->pc = 0x20adb4u;

    // 0x20adb4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20adb8: 0x24845e50  addiu       $a0, $a0, 0x5E50
    ctx->pc = 0x20adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24144));
    ctx->pc = 0x20adbcu;
}
