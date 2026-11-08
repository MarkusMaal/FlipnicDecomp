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

// Function: FUN_0014d020
// Address: 0x14d020 - 0x14d09c
void FUN_0014d020_0x14d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014d020_0x14d020");
#endif

    switch (ctx->pc) {
        case 0x14d040u: goto label_14d040;
        case 0x14d05cu: goto label_14d05c;
        case 0x14d074u: goto label_14d074;
        case 0x14d088u: goto label_14d088;
        default: break;
    }

    ctx->pc = 0x14d020u;

    // 0x14d020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14d024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14d024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14d028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d02c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d034: 0x8c8400b0  lw          $a0, 0xB0($a0)
    ctx->pc = 0x14d034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x14d038: 0xc052324  jal         func_148C90
    ctx->pc = 0x14D038u;
    SET_GPR_U32(ctx, 31, 0x14D040u);
    ctx->pc = 0x14D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D038u;
    // 0x14d03c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148C90u, 0x14D038u, 0x14D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D040u;
label_14d040:
    // 0x14d040: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x14d040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x14d044: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x14d044u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14d048: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x14d048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x14d04c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14d050: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x14d050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14d054: 0xc052330  jal         func_148CC0
    ctx->pc = 0x14D054u;
    SET_GPR_U32(ctx, 31, 0x14D05Cu);
    ctx->pc = 0x14D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D054u;
    // 0x14d058: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148CC0u, 0x14D054u, 0x14D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D05Cu;
label_14d05c:
    // 0x14d05c: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x14d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x14d060: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x14d060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x14d064: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14d064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14d068: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x14d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14d06c: 0xc052330  jal         func_148CC0
    ctx->pc = 0x14D06Cu;
    SET_GPR_U32(ctx, 31, 0x14D074u);
    ctx->pc = 0x14D070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D06Cu;
    // 0x14d070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148CC0u, 0x14D06Cu, 0x14D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D074u;
label_14d074:
    // 0x14d074: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x14d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x14d078: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14d078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14d07c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x14d07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14d080: 0xc05232c  jal         func_148CB0
    ctx->pc = 0x14D080u;
    SET_GPR_U32(ctx, 31, 0x14D088u);
    ctx->pc = 0x14D084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D080u;
    // 0x14d084: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148CB0u, 0x14D080u, 0x14D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D088u;
label_14d088:
    // 0x14d088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14d088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d08c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d094: 0x3e00008  jr          $ra
    ctx->pc = 0x14D094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D094u;
        // 0x14d098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D09Cu;
}
