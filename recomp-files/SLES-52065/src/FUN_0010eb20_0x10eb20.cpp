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

// Function: FUN_0010eb20
// Address: 0x10eb20 - 0x10eb68
void FUN_0010eb20_0x10eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010eb20_0x10eb20");
#endif

    switch (ctx->pc) {
        case 0x10eb20u: goto label_10eb20;
        case 0x10eb24u: goto label_10eb24;
        case 0x10eb28u: goto label_10eb28;
        case 0x10eb2cu: goto label_10eb2c;
        case 0x10eb30u: goto label_10eb30;
        case 0x10eb34u: goto label_10eb34;
        case 0x10eb38u: goto label_10eb38;
        case 0x10eb3cu: goto label_10eb3c;
        case 0x10eb40u: goto label_10eb40;
        case 0x10eb44u: goto label_10eb44;
        case 0x10eb48u: goto label_10eb48;
        case 0x10eb4cu: goto label_10eb4c;
        case 0x10eb50u: goto label_10eb50;
        case 0x10eb54u: goto label_10eb54;
        case 0x10eb58u: goto label_10eb58;
        case 0x10eb5cu: goto label_10eb5c;
        case 0x10eb60u: goto label_10eb60;
        case 0x10eb64u: goto label_10eb64;
        default: break;
    }

    ctx->pc = 0x10eb20u;

label_10eb20:
    // 0x10eb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10eb24:
    // 0x10eb24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10eb28:
    // 0x10eb28: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_10eb2c:
    if (ctx->pc == 0x10EB2Cu) {
        ctx->pc = 0x10EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB28u;
        // 0x10eb2c: 0xac8501d4  sw          $a1, 0x1D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB30u;
        goto label_10eb30;
    }
    ctx->pc = 0x10EB28u;
    {
        const bool branch_taken_0x10eb28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB28u;
        // 0x10eb2c: 0xac8501d4  sw          $a1, 0x1D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb28) {
            ctx->pc = 0x10EB48u;
            goto label_10eb48;
        }
    }
    ctx->pc = 0x10EB30u;
label_10eb30:
    // 0x10eb30: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10eb30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10eb34:
    // 0x10eb34: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10eb34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10eb38:
    // 0x10eb38: 0x320f809  jalr        $t9
label_10eb3c:
    if (ctx->pc == 0x10EB3Cu) {
        ctx->pc = 0x10EB40u;
        goto label_10eb40;
    }
    ctx->pc = 0x10EB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10EB40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EB38u, 0x10EB40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EB40u;
label_10eb40:
    // 0x10eb40: 0x10000007  b           . + 4 + (0x7 << 2)
label_10eb44:
    if (ctx->pc == 0x10EB44u) {
        ctx->pc = 0x10EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB40u;
        // 0x10eb44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB48u;
        goto label_10eb48;
    }
    ctx->pc = 0x10EB40u;
    {
        const bool branch_taken_0x10eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB40u;
        // 0x10eb44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb40) {
            ctx->pc = 0x10EB60u;
            goto label_10eb60;
        }
    }
    ctx->pc = 0x10EB48u;
label_10eb48:
    // 0x10eb48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10eb4c:
    // 0x10eb4c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_10eb50:
    if (ctx->pc == 0x10EB50u) {
        ctx->pc = 0x10EB54u;
        goto label_10eb54;
    }
    ctx->pc = 0x10EB4Cu;
    {
        const bool branch_taken_0x10eb4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x10eb4c) {
            ctx->pc = 0x10EB5Cu;
            goto label_10eb5c;
        }
    }
    ctx->pc = 0x10EB54u;
label_10eb54:
    // 0x10eb54: 0xc043adc  jal         func_10EB70
label_10eb58:
    if (ctx->pc == 0x10EB58u) {
        ctx->pc = 0x10EB5Cu;
        goto label_10eb5c;
    }
    ctx->pc = 0x10EB54u;
    SET_GPR_U32(ctx, 31, 0x10EB5Cu);
    ctx->pc = 0x10EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EB70u, 0x10EB54u, 0x10EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB5Cu;
label_10eb5c:
    // 0x10eb5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10eb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10eb60:
    // 0x10eb60: 0x3e00008  jr          $ra
label_10eb64:
    if (ctx->pc == 0x10EB64u) {
        ctx->pc = 0x10EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB60u;
        // 0x10eb64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB68u;
        goto label_fallthrough_0x10eb60;
    }
    ctx->pc = 0x10EB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB60u;
        // 0x10eb64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10eb60:
    ctx->pc = 0x10EB68u;
}
