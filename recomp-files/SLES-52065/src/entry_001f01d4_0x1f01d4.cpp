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

// Function: entry_001f01d4
// Address: 0x1f01d4 - 0x1f01dc
void entry_001f01d4_0x1f01d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f01d4_0x1f01d4");
#endif

    ctx->pc = 0x1f01d4u;

    // 0x1f01d4: 0x3230000f  andi        $s0, $s1, 0xF
    ctx->pc = 0x1f01d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x1f01d8: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1f01d8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f01dcu;
}
