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

// Function: entry_001041bc
// Address: 0x1041bc - 0x1041c8
void entry_001041bc_0x1041bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001041bc_0x1041bc");
#endif

    ctx->pc = 0x1041bcu;

    // 0x1041bc: 0x10000416  b           . + 4 + (0x416 << 2)
    ctx->pc = 0x1041BCu;
    {
        const bool branch_taken_0x1041bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041BCu;
        // 0x1041c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041bc) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x1041C4u;
    // 0x1041c4: 0x24040260  addiu       $a0, $zero, 0x260
    ctx->pc = 0x1041c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->pc = 0x1041c8u;
}
