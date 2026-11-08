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

// Function: FUN_0011dcb0
// Address: 0x11dcb0 - 0x11dd10
void FUN_0011dcb0_0x11dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011dcb0_0x11dcb0");
#endif

    switch (ctx->pc) {
        case 0x11dcccu: goto label_11dccc;
        case 0x11dcdcu: goto label_11dcdc;
        default: break;
    }

    ctx->pc = 0x11dcb0u;

    // 0x11dcb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11dcb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11dcb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11dcbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11dcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11dcc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11dcc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcc4: 0x8c900100  lw          $s0, 0x100($a0)
    ctx->pc = 0x11dcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x11dcc8: 0x0  nop
    ctx->pc = 0x11dcc8u;
    // NOP
label_11dccc:
    // 0x11dccc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11DCCCu;
    {
        const bool branch_taken_0x11dccc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCCCu;
        // 0x11dcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dccc) {
            ctx->pc = 0x11DCF4u;
            goto label_11dcf4;
        }
    }
    ctx->pc = 0x11DCD4u;
    // 0x11dcd4: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11DCD4u;
    SET_GPR_U32(ctx, 31, 0x11DCDCu);
    ctx->pc = 0x11DCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCD4u;
    // 0x11dcd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11DCD4u, 0x11DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCDCu;
label_11dcdc:
    // 0x11dcdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DCDCu;
    {
        const bool branch_taken_0x11dcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11dcdc) {
            ctx->pc = 0x11DCECu;
            goto label_11dcec;
        }
    }
    ctx->pc = 0x11DCE4u;
    // 0x11dce4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11DCE4u;
    {
        const bool branch_taken_0x11dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCE4u;
        // 0x11dce8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dce4) {
            ctx->pc = 0x11DCFCu;
            goto label_11dcfc;
        }
    }
    ctx->pc = 0x11DCECu;
label_11dcec:
    // 0x11dcec: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x11DCECu;
    {
        const bool branch_taken_0x11dcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCECu;
        // 0x11dcf0: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcec) {
            ctx->pc = 0x11DCCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dccc;
        }
    }
    ctx->pc = 0x11DCF4u;
label_11dcf4:
    // 0x11dcf4: 0x0  nop
    ctx->pc = 0x11dcf4u;
    // NOP
    // 0x11dcf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11dcf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dcfc:
    // 0x11dcfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11dcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dd00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11dd00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dd04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11dd04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dd08: 0x3e00008  jr          $ra
    ctx->pc = 0x11DD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD08u;
        // 0x11dd0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DD10u;
}
