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

// Function: entry_001e4f08
// Address: 0x1e4f08 - 0x1e4f18
void entry_001e4f08_0x1e4f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4f08_0x1e4f08");
#endif

    ctx->pc = 0x1e4f08u;

    // 0x1e4f08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4f0c: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4F0Cu;
    {
        const bool branch_taken_0x1e4f0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4f0c) {
            ctx->pc = 0x1E4F18u;
            return;
        }
    }
    ctx->pc = 0x1E4F14u;
    // 0x1e4f14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e4f18u;
}
