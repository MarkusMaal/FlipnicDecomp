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

// Function: entry_00115c94
// Address: 0x115c94 - 0x115cac
void entry_00115c94_0x115c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115c94_0x115c94");
#endif

    ctx->pc = 0x115c94u;

    // 0x115c94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115C94u;
    {
        const bool branch_taken_0x115c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C94u;
        // 0x115c98: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c94) {
            ctx->pc = 0x115CACu;
            return;
        }
    }
    ctx->pc = 0x115C9Cu;
    // 0x115c9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115ca0: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115CA0u;
    {
        const bool branch_taken_0x115ca0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x115CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CA0u;
        // 0x115ca4: 0x151040  sll         $v0, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ca0) {
            ctx->pc = 0x115CB0u;
            return;
        }
    }
    ctx->pc = 0x115CA8u;
    // 0x115ca8: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x115ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    ctx->pc = 0x115cacu;
}
