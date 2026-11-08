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

// Function: FUN_0011b1b0
// Address: 0x11b1b0 - 0x11b224
void FUN_0011b1b0_0x11b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b1b0_0x11b1b0");
#endif

    switch (ctx->pc) {
        case 0x11b1c8u: goto label_11b1c8;
        case 0x11b1d4u: goto label_11b1d4;
        case 0x11b200u: goto label_11b200;
        case 0x11b210u: goto label_11b210;
        default: break;
    }

    ctx->pc = 0x11b1b0u;

    // 0x11b1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b1b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b1bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1c0: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11B1C0u;
    SET_GPR_U32(ctx, 31, 0x11B1C8u);
    ctx->pc = 0x11B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B1C0u;
    // 0x11b1c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11B1C0u, 0x11B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B1C8u;
label_11b1c8:
    // 0x11b1c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1cc: 0x8f8283c4  lw          $v0, -0x7C3C($gp)
    ctx->pc = 0x11b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935492)));
    // 0x11b1d0: 0x0  nop
    ctx->pc = 0x11b1d0u;
    // NOP
label_11b1d4:
    // 0x11b1d4: 0x0  nop
    ctx->pc = 0x11b1d4u;
    // NOP
    // 0x11b1d8: 0x0  nop
    ctx->pc = 0x11b1d8u;
    // NOP
    // 0x11b1dc: 0x0  nop
    ctx->pc = 0x11b1dcu;
    // NOP
    // 0x11b1e0: 0x0  nop
    ctx->pc = 0x11b1e0u;
    // NOP
    // 0x11b1e4: 0x0  nop
    ctx->pc = 0x11b1e4u;
    // NOP
    // 0x11b1e8: 0x1051fffa  beq         $v0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11B1E8u;
    {
        const bool branch_taken_0x11b1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x11b1e8) {
            ctx->pc = 0x11B1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b1d4;
        }
    }
    ctx->pc = 0x11B1F0u;
    // 0x11b1f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1f4: 0x262500f8  addiu       $a1, $s1, 0xF8
    ctx->pc = 0x11b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    // 0x11b1f8: 0xc046dc0  jal         func_11B700
    ctx->pc = 0x11B1F8u;
    SET_GPR_U32(ctx, 31, 0x11B200u);
    ctx->pc = 0x11B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B1F8u;
    // 0x11b1fc: 0xae2000fc  sw          $zero, 0xFC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B700u, 0x11B1F8u, 0x11B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B200u;
label_11b200:
    // 0x11b200: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B200u;
    {
        const bool branch_taken_0x11b200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b200) {
            ctx->pc = 0x11B210u;
            goto label_11b210;
        }
    }
    ctx->pc = 0x11B208u;
    // 0x11b208: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11B208u;
    SET_GPR_U32(ctx, 31, 0x11B210u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11B208u, 0x11B210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B210u;
label_11b210:
    // 0x11b210: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11b214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11b218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b21c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B21Cu;
        // 0x11b220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B224u;
}
