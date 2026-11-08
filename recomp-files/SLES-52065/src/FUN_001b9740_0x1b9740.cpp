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

// Function: FUN_001b9740
// Address: 0x1b9740 - 0x1b979c
void FUN_001b9740_0x1b9740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b9740_0x1b9740");
#endif

    switch (ctx->pc) {
        case 0x1b9758u: goto label_1b9758;
        case 0x1b9764u: goto label_1b9764;
        case 0x1b976cu: goto label_1b976c;
        case 0x1b9774u: goto label_1b9774;
        case 0x1b9780u: goto label_1b9780;
        default: break;
    }

    ctx->pc = 0x1b9740u;

    // 0x1b9740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b9748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b974c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b974cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9750: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B9750u;
    SET_GPR_U32(ctx, 31, 0x1B9758u);
    ctx->pc = 0x1B9754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9750u;
    // 0x1b9754: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B9750u, 0x1B9758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9758u;
label_1b9758:
    // 0x1b9758: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b9758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b975c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B975Cu;
    {
        const bool branch_taken_0x1b975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B975Cu;
        // 0x1b9760: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b975c) {
            ctx->pc = 0x1B9774u;
            goto label_1b9774;
        }
    }
    ctx->pc = 0x1B9764u;
label_1b9764:
    // 0x1b9764: 0xc06e5ec  jal         func_1B97B0
    ctx->pc = 0x1B9764u;
    SET_GPR_U32(ctx, 31, 0x1B976Cu);
    ctx->pc = 0x1B9768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9764u;
    // 0x1b9768: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97B0u, 0x1B9764u, 0x1B976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B976Cu;
label_1b976c:
    // 0x1b976c: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B976Cu;
    SET_GPR_U32(ctx, 31, 0x1B9774u);
    ctx->pc = 0x1B9770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B976Cu;
    // 0x1b9770: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B976Cu, 0x1B9774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9774u;
label_1b9774:
    // 0x1b9774: 0x0  nop
    ctx->pc = 0x1b9774u;
    // NOP
    // 0x1b9778: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B9778u;
    SET_GPR_U32(ctx, 31, 0x1B9780u);
    ctx->pc = 0x1B977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9778u;
    // 0x1b977c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B9778u, 0x1B9780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9780u;
label_1b9780:
    // 0x1b9780: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b9780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b9784: 0x1462fff7  bne         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B9784u;
    {
        const bool branch_taken_0x1b9784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b9784) {
            ctx->pc = 0x1B9764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9764;
        }
    }
    ctx->pc = 0x1B978Cu;
    // 0x1b978c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b978cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9794: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9794u;
        // 0x1b9798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B979Cu;
}
