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

// Function: FUN_0011add0
// Address: 0x11add0 - 0x11ae3c
void FUN_0011add0_0x11add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011add0_0x11add0");
#endif

    switch (ctx->pc) {
        case 0x11ae08u: goto label_11ae08;
        case 0x11ae1cu: goto label_11ae1c;
        case 0x11ae24u: goto label_11ae24;
        default: break;
    }

    ctx->pc = 0x11add0u;

    // 0x11add0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11add4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11add8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11addc: 0x808203c4  lb          $v0, 0x3C4($a0)
    ctx->pc = 0x11addcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 964)));
    // 0x11ade0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11ADE0u;
    {
        const bool branch_taken_0x11ade0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADE0u;
        // 0x11ade4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ade0) {
            ctx->pc = 0x11ADF0u;
            goto label_11adf0;
        }
    }
    ctx->pc = 0x11ADE8u;
    // 0x11ade8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11ADE8u;
    {
        const bool branch_taken_0x11ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADE8u;
        // 0x11adec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ade8) {
            ctx->pc = 0x11AE2Cu;
            goto label_11ae2c;
        }
    }
    ctx->pc = 0x11ADF0u;
label_11adf0:
    // 0x11adf0: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x11adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
    // 0x11adf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11adf8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11ADF8u;
    {
        const bool branch_taken_0x11adf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADF8u;
        // 0x11adfc: 0x260503c4  addiu       $a1, $s0, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adf8) {
            ctx->pc = 0x11AE14u;
            goto label_11ae14;
        }
    }
    ctx->pc = 0x11AE00u;
    // 0x11ae00: 0xc046dc0  jal         func_11B700
    ctx->pc = 0x11AE00u;
    SET_GPR_U32(ctx, 31, 0x11AE08u);
    ctx->pc = 0x11AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE00u;
    // 0x11ae04: 0x260500f4  addiu       $a1, $s0, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B700u, 0x11AE00u, 0x11AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE08u;
label_11ae08:
    // 0x11ae08: 0xa20003c4  sb          $zero, 0x3C4($s0)
    ctx->pc = 0x11ae08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 964), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ae0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11AE0Cu;
    {
        const bool branch_taken_0x11ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE0Cu;
        // 0x11ae10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae0c) {
            ctx->pc = 0x11AE2Cu;
            goto label_11ae2c;
        }
    }
    ctx->pc = 0x11AE14u;
label_11ae14:
    // 0x11ae14: 0xc046dd4  jal         func_11B750
    ctx->pc = 0x11AE14u;
    SET_GPR_U32(ctx, 31, 0x11AE1Cu);
    ctx->pc = 0x11AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE14u;
    // 0x11ae18: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x11AE14u, 0x11AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE1Cu;
label_11ae1c:
    // 0x11ae1c: 0xc040150  jal         func_100540
    ctx->pc = 0x11AE1Cu;
    SET_GPR_U32(ctx, 31, 0x11AE24u);
    ctx->pc = 0x11AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE1Cu;
    // 0x11ae20: 0x8e040528  lw          $a0, 0x528($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11AE1Cu, 0x11AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE24u;
label_11ae24:
    // 0x11ae24: 0xa20003c4  sb          $zero, 0x3C4($s0)
    ctx->pc = 0x11ae24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 964), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ae28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ae2c:
    // 0x11ae2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ae2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ae30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ae30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ae34: 0x3e00008  jr          $ra
    ctx->pc = 0x11AE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE34u;
        // 0x11ae38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AE3Cu;
}
