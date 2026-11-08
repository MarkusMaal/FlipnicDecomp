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

// Function: FUN_001cc630
// Address: 0x1cc630 - 0x1cc674
void FUN_001cc630_0x1cc630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc630_0x1cc630");
#endif

    switch (ctx->pc) {
        case 0x1cc650u: goto label_1cc650;
        case 0x1cc660u: goto label_1cc660;
        default: break;
    }

    ctx->pc = 0x1cc630u;

    // 0x1cc630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc634: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc63c: 0x24052770  addiu       $a1, $zero, 0x2770
    ctx->pc = 0x1cc63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10096));
    // 0x1cc640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc644: 0x8c30ca84  lw          $s0, -0x357C($at)
    ctx->pc = 0x1cc644u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cc648: 0xc045bcc  jal         func_116F30
    ctx->pc = 0x1CC648u;
    SET_GPR_U32(ctx, 31, 0x1CC650u);
    ctx->pc = 0x1CC64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC648u;
    // 0x1cc64c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116F30u, 0x1CC648u, 0x1CC650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC650u;
label_1cc650:
    // 0x1cc650: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1cc650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1cc654: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1cc654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1cc658: 0xc045bcc  jal         func_116F30
    ctx->pc = 0x1CC658u;
    SET_GPR_U32(ctx, 31, 0x1CC660u);
    ctx->pc = 0x1CC65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC658u;
    // 0x1cc65c: 0x24052774  addiu       $a1, $zero, 0x2774 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116F30u, 0x1CC658u, 0x1CC660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC660u;
label_1cc660:
    // 0x1cc660: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1cc660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1cc664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc66c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC66Cu;
        // 0x1cc670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC674u;
}
