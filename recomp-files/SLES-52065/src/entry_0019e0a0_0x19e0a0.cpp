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

// Function: entry_0019e0a0
// Address: 0x19e0a0 - 0x19e0b0
void entry_0019e0a0_0x19e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e0a0_0x19e0a0");
#endif

    ctx->pc = 0x19e0a0u;

    // 0x19e0a0: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x19E0A0u;
    {
        const bool branch_taken_0x19e0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e0a0) {
            ctx->pc = 0x19E128u;
            return;
        }
    }
    ctx->pc = 0x19E0A8u;
    // 0x19e0a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19e0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e0ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19e0acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19e0b0u;
}
