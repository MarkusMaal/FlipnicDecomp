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

// Function: entry_001df3c8
// Address: 0x1df3c8 - 0x1df3d0
void entry_001df3c8_0x1df3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df3c8_0x1df3c8");
#endif

    ctx->pc = 0x1df3c8u;

    // 0x1df3c8: 0x491c0  sll         $s2, $a0, 7
    ctx->pc = 0x1df3c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1df3cc: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1df3ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1df3d0u;
}
