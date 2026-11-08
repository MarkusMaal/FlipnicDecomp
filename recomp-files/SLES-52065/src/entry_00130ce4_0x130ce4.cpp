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

// Function: entry_00130ce4
// Address: 0x130ce4 - 0x130d10
void entry_00130ce4_0x130ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130ce4_0x130ce4");
#endif

    ctx->pc = 0x130ce4u;

    // 0x130ce4: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x130ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x130ce8: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x130CE8u;
    {
        const bool branch_taken_0x130ce8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CE8u;
        // 0x130cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ce8) {
            ctx->pc = 0x130DA0u;
            return;
        }
    }
    ctx->pc = 0x130CF0u;
    // 0x130cf0: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x130cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130cf4: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x130CF4u;
    {
        const bool branch_taken_0x130cf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x130cf4) {
            ctx->pc = 0x130D40u;
            return;
        }
    }
    ctx->pc = 0x130CFCu;
    // 0x130cfc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130d00: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130D00u;
    {
        const bool branch_taken_0x130d00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D00u;
        // 0x130d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d00) {
            ctx->pc = 0x130D10u;
            return;
        }
    }
    ctx->pc = 0x130D08u;
    // 0x130d08: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130D08u;
    SET_GPR_U32(ctx, 31, 0x130D10u);
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x130D08u, 0x130D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D10u;
}
