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

// Function: FUN_001a6840
// Address: 0x1a6840 - 0x1a6888
void FUN_001a6840_0x1a6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6840_0x1a6840");
#endif

    switch (ctx->pc) {
        case 0x1a6840u: goto label_1a6840;
        case 0x1a6844u: goto label_1a6844;
        case 0x1a6848u: goto label_1a6848;
        case 0x1a684cu: goto label_1a684c;
        case 0x1a6850u: goto label_1a6850;
        case 0x1a6854u: goto label_1a6854;
        case 0x1a6858u: goto label_1a6858;
        case 0x1a685cu: goto label_1a685c;
        case 0x1a6860u: goto label_1a6860;
        case 0x1a6864u: goto label_1a6864;
        case 0x1a6868u: goto label_1a6868;
        case 0x1a686cu: goto label_1a686c;
        case 0x1a6870u: goto label_1a6870;
        case 0x1a6874u: goto label_1a6874;
        case 0x1a6878u: goto label_1a6878;
        case 0x1a687cu: goto label_1a687c;
        case 0x1a6880u: goto label_1a6880;
        case 0x1a6884u: goto label_1a6884;
        default: break;
    }

    ctx->pc = 0x1a6840u;

label_1a6840:
    // 0x1a6840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a6844:
    // 0x1a6844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a6848:
    // 0x1a6848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a684c:
    // 0x1a684c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a684cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6850:
    // 0x1a6850: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a6850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6854:
    // 0x1a6854: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1a6858:
    if (ctx->pc == 0x1A6858u) {
        ctx->pc = 0x1A685Cu;
        goto label_1a685c;
    }
    ctx->pc = 0x1A6854u;
    {
        const bool branch_taken_0x1a6854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6854) {
            ctx->pc = 0x1A6878u;
            goto label_1a6878;
        }
    }
    ctx->pc = 0x1A685Cu;
label_1a685c:
    // 0x1a685c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a685cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6860:
    // 0x1a6860: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a6860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a6864:
    // 0x1a6864: 0x320f809  jalr        $t9
label_1a6868:
    if (ctx->pc == 0x1A6868u) {
        ctx->pc = 0x1A6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6864u;
        // 0x1a6868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A686Cu;
        goto label_1a686c;
    }
    ctx->pc = 0x1A6864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A686Cu);
        ctx->pc = 0x1A6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6864u;
        // 0x1a6868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6864u, 0x1A686Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A686Cu;
label_1a686c:
    // 0x1a686c: 0xc04be08  jal         func_12F820
label_1a6870:
    if (ctx->pc == 0x1A6870u) {
        ctx->pc = 0x1A6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A686Cu;
        // 0x1a6870: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6874u;
        goto label_1a6874;
    }
    ctx->pc = 0x1A686Cu;
    SET_GPR_U32(ctx, 31, 0x1A6874u);
    ctx->pc = 0x1A6870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A686Cu;
    // 0x1a6870: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x1A686Cu, 0x1A6874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6874u;
label_1a6874:
    // 0x1a6874: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a6874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a6878:
    // 0x1a6878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a687c:
    // 0x1a687c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a687cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6880:
    // 0x1a6880: 0x3e00008  jr          $ra
label_1a6884:
    if (ctx->pc == 0x1A6884u) {
        ctx->pc = 0x1A6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6880u;
        // 0x1a6884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6888u;
        goto label_fallthrough_0x1a6880;
    }
    ctx->pc = 0x1A6880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6880u;
        // 0x1a6884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6880:
    ctx->pc = 0x1A6888u;
}
