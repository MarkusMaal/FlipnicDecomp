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

// Function: FUN_001d2740
// Address: 0x1d2740 - 0x1d2798
void FUN_001d2740_0x1d2740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2740_0x1d2740");
#endif

    ctx->pc = 0x1d2740u;

    // 0x1d2740: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1d2740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1d2744: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d2744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2748: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2748u;
    {
        const bool branch_taken_0x1d2748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2748) {
            ctx->pc = 0x1D276Cu;
            goto label_1d276c;
        }
    }
    ctx->pc = 0x1D2750u;
    // 0x1d2750: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d2750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d2754: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d2754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d2758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d275c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d275cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2764: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D2764u;
    {
        const bool branch_taken_0x1d2764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2764u;
        // 0x1d2768: 0xac650020  sw          $a1, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2764) {
            ctx->pc = 0x1D2790u;
            goto label_1d2790;
        }
    }
    ctx->pc = 0x1D276Cu;
label_1d276c:
    // 0x1d276c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1d276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1d2770: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2770u;
    {
        const bool branch_taken_0x1d2770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2770u;
        // 0x1d2774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2770) {
            ctx->pc = 0x1D2790u;
            goto label_1d2790;
        }
    }
    ctx->pc = 0x1D2778u;
    // 0x1d2778: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d2778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d277c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d277cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d2780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2784: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2788: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d278c: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1d278cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_1d2790:
    // 0x1d2790: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2798u;
}
