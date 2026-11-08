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

// Function: entry_001adb44
// Address: 0x1adb44 - 0x1adb4c
void entry_001adb44_0x1adb44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adb44_0x1adb44");
#endif

    ctx->pc = 0x1adb44u;

    // 0x1adb44: 0x8e2307f0  lw          $v1, 0x7F0($s1)
    ctx->pc = 0x1adb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
    // 0x1adb48: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1adb48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1adb4cu;
}
