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

// Function: entry_00104f5c
// Address: 0x104f5c - 0x104f68
void entry_00104f5c_0x104f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104f5c_0x104f5c");
#endif

    ctx->pc = 0x104f5cu;

    // 0x104f5c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x104F5Cu;
    {
        const bool branch_taken_0x104f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F5Cu;
        // 0x104f60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f5c) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104F64u;
    // 0x104f64: 0x24040260  addiu       $a0, $zero, 0x260
    ctx->pc = 0x104f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->pc = 0x104f68u;
}
