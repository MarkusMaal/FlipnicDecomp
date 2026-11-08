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

// Function: entry_001708e0
// Address: 0x1708e0 - 0x1708e8
void entry_001708e0_0x1708e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001708e0_0x1708e0");
#endif

    ctx->pc = 0x1708e0u;

    // 0x1708e0: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x1708e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x1708e4: 0x2508f500  addiu       $t0, $t0, -0xB00
    ctx->pc = 0x1708e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964480));
    ctx->pc = 0x1708e8u;
}
