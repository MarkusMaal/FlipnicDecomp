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

// Function: FUN_0017f730
// Address: 0x17f730 - 0x17f778
void FUN_0017f730_0x17f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f730_0x17f730");
#endif

    switch (ctx->pc) {
        case 0x17f754u: goto label_17f754;
        default: break;
    }

    ctx->pc = 0x17f730u;

    // 0x17f730: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x17f730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17f734: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x17f734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f738: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x17f738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x17f73c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17f740: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17f740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17f744: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x17f744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17f748: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x17f748u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17f74c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F74Cu;
    {
        const bool branch_taken_0x17f74c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f74c) {
            ctx->pc = 0x17F770u;
            goto label_17f770;
        }
    }
    ctx->pc = 0x17F754u;
label_17f754:
    // 0x17f754: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x17f754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x17f758: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x17f758u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17f75c: 0x0  nop
    ctx->pc = 0x17f75cu;
    // NOP
    // 0x17f760: 0x0  nop
    ctx->pc = 0x17f760u;
    // NOP
    // 0x17f764: 0x0  nop
    ctx->pc = 0x17f764u;
    // NOP
    // 0x17f768: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17F768u;
    {
        const bool branch_taken_0x17f768 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f768) {
            ctx->pc = 0x17F754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f754;
        }
    }
    ctx->pc = 0x17F770u;
label_17f770:
    // 0x17f770: 0x3e00008  jr          $ra
    ctx->pc = 0x17F770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F770u;
        // 0x17f774: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F778u;
}
