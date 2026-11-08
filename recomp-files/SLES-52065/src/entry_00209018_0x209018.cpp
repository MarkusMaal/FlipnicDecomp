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

// Function: entry_00209018
// Address: 0x209018 - 0x209030
void entry_00209018_0x209018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209018_0x209018");
#endif

    ctx->pc = 0x209018u;

    // 0x209018: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209018u;
    {
        const bool branch_taken_0x209018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209018u;
        // 0x20901c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209018) {
            ctx->pc = 0x209030u;
            return;
        }
    }
    ctx->pc = 0x209020u;
    // 0x209020: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x209020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x209024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x209024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209028: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x209028u;
    {
        const bool branch_taken_0x209028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209028u;
        // 0x20902c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209028) {
            ctx->pc = 0x2090B8u;
            return;
        }
    }
    ctx->pc = 0x209030u;
}
