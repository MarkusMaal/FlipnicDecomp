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

// Function: entry_00138c5c
// Address: 0x138c5c - 0x138c74
void entry_00138c5c_0x138c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138c5c_0x138c5c");
#endif

    ctx->pc = 0x138c5cu;

    // 0x138c5c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x138C5Cu;
    {
        const bool branch_taken_0x138c5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x138c5c) {
            ctx->pc = 0x138C74u;
            return;
        }
    }
    ctx->pc = 0x138C64u;
    // 0x138c64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x138c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x138c68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x138C68u;
    {
        const bool branch_taken_0x138c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C68u;
        // 0x138c6c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c68) {
            ctx->pc = 0x138C74u;
            return;
        }
    }
    ctx->pc = 0x138C70u;
    // 0x138c70: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x138c70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    ctx->pc = 0x138c74u;
}
