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

// Function: FUN_0013d530
// Address: 0x13d530 - 0x13d564
void FUN_0013d530_0x13d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d530_0x13d530");
#endif

    switch (ctx->pc) {
        case 0x13d530u: goto label_13d530;
        case 0x13d534u: goto label_13d534;
        case 0x13d538u: goto label_13d538;
        case 0x13d53cu: goto label_13d53c;
        case 0x13d540u: goto label_13d540;
        case 0x13d544u: goto label_13d544;
        case 0x13d548u: goto label_13d548;
        case 0x13d54cu: goto label_13d54c;
        case 0x13d550u: goto label_13d550;
        case 0x13d554u: goto label_13d554;
        case 0x13d558u: goto label_13d558;
        case 0x13d55cu: goto label_13d55c;
        case 0x13d560u: goto label_13d560;
        default: break;
    }

    ctx->pc = 0x13d530u;

label_13d530:
    // 0x13d530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_13d534:
    // 0x13d534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13d538:
    // 0x13d538: 0xac850168  sw          $a1, 0x168($a0)
    ctx->pc = 0x13d538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 5));
label_13d53c:
    // 0x13d53c: 0xac86016c  sw          $a2, 0x16C($a0)
    ctx->pc = 0x13d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 364), GPR_U32(ctx, 6));
label_13d540:
    // 0x13d540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d544:
    // 0x13d544: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13d544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d548:
    // 0x13d548: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x13d548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_13d54c:
    // 0x13d54c: 0x320f809  jalr        $t9
label_13d550:
    if (ctx->pc == 0x13D550u) {
        ctx->pc = 0x13D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D54Cu;
        // 0x13d550: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D554u;
        goto label_13d554;
    }
    ctx->pc = 0x13D54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D554u);
        ctx->pc = 0x13D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D54Cu;
        // 0x13d550: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D54Cu, 0x13D554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D554u;
label_13d554:
    // 0x13d554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d558:
    // 0x13d558: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d55c:
    // 0x13d55c: 0x3e00008  jr          $ra
label_13d560:
    if (ctx->pc == 0x13D560u) {
        ctx->pc = 0x13D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D55Cu;
        // 0x13d560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D564u;
        goto label_fallthrough_0x13d55c;
    }
    ctx->pc = 0x13D55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D55Cu;
        // 0x13d560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13d55c:
    ctx->pc = 0x13D564u;
}
