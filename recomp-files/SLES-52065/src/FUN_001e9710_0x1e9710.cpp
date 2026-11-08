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

// Function: FUN_001e9710
// Address: 0x1e9710 - 0x1e9748
void FUN_001e9710_0x1e9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9710_0x1e9710");
#endif

    switch (ctx->pc) {
        case 0x1e9710u: goto label_1e9710;
        case 0x1e9714u: goto label_1e9714;
        case 0x1e9718u: goto label_1e9718;
        case 0x1e971cu: goto label_1e971c;
        case 0x1e9720u: goto label_1e9720;
        case 0x1e9724u: goto label_1e9724;
        case 0x1e9728u: goto label_1e9728;
        case 0x1e972cu: goto label_1e972c;
        case 0x1e9730u: goto label_1e9730;
        case 0x1e9734u: goto label_1e9734;
        case 0x1e9738u: goto label_1e9738;
        case 0x1e973cu: goto label_1e973c;
        case 0x1e9740u: goto label_1e9740;
        case 0x1e9744u: goto label_1e9744;
        default: break;
    }

    ctx->pc = 0x1e9710u;

label_1e9710:
    // 0x1e9710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e9714:
    // 0x1e9714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e9718:
    // 0x1e9718: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e9718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e971c:
    // 0x1e971c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1e9720:
    if (ctx->pc == 0x1E9720u) {
        ctx->pc = 0x1E9724u;
        goto label_1e9724;
    }
    ctx->pc = 0x1E971Cu;
    {
        const bool branch_taken_0x1e971c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e971c) {
            ctx->pc = 0x1E973Cu;
            goto label_1e973c;
        }
    }
    ctx->pc = 0x1E9724u;
label_1e9724:
    // 0x1e9724: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1e9724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e9728:
    // 0x1e9728: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1e972c:
    if (ctx->pc == 0x1E972Cu) {
        ctx->pc = 0x1E9730u;
        goto label_1e9730;
    }
    ctx->pc = 0x1E9728u;
    {
        const bool branch_taken_0x1e9728 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9728) {
            ctx->pc = 0x1E973Cu;
            goto label_1e973c;
        }
    }
    ctx->pc = 0x1E9730u;
label_1e9730:
    // 0x1e9730: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e9730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e9734:
    // 0x1e9734: 0xc0f809  jalr        $a2
label_1e9738:
    if (ctx->pc == 0x1E9738u) {
        ctx->pc = 0x1E9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9734u;
        // 0x1e9738: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E973Cu;
        goto label_1e973c;
    }
    ctx->pc = 0x1E9734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1E973Cu);
        ctx->pc = 0x1E9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9734u;
        // 0x1e9738: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9734u, 0x1E973Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E973Cu;
label_1e973c:
    // 0x1e973c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9740:
    // 0x1e9740: 0x3e00008  jr          $ra
label_1e9744:
    if (ctx->pc == 0x1E9744u) {
        ctx->pc = 0x1E9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9740u;
        // 0x1e9744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9748u;
        goto label_fallthrough_0x1e9740;
    }
    ctx->pc = 0x1E9740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9740u;
        // 0x1e9744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e9740:
    ctx->pc = 0x1E9748u;
}
