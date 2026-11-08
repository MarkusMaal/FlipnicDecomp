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

// Function: entry_00208720
// Address: 0x208720 - 0x208738
void entry_00208720_0x208720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208720_0x208720");
#endif

    ctx->pc = 0x208720u;

    // 0x208720: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208720u;
    {
        const bool branch_taken_0x208720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208720u;
        // 0x208724: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208720) {
            ctx->pc = 0x208738u;
            return;
        }
    }
    ctx->pc = 0x208728u;
    // 0x208728: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x208728u;
    {
        const bool branch_taken_0x208728 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x20872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208728u;
        // 0x20872c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208728) {
            ctx->pc = 0x208718u;
            return;
        }
    }
    ctx->pc = 0x208730u;
    // 0x208730: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208730u;
    {
        const bool branch_taken_0x208730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208730u;
        // 0x208734: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208730) {
            ctx->pc = 0x208750u;
            return;
        }
    }
    ctx->pc = 0x208738u;
}
