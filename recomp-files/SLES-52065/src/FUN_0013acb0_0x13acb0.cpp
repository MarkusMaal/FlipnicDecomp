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

// Function: FUN_0013acb0
// Address: 0x13acb0 - 0x13ad2c
void FUN_0013acb0_0x13acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013acb0_0x13acb0");
#endif

    switch (ctx->pc) {
        case 0x13acc4u: goto label_13acc4;
        default: break;
    }

    ctx->pc = 0x13acb0u;

    // 0x13acb0: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x13acb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13acb4: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x13ACB4u;
    {
        const bool branch_taken_0x13acb4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACB4u;
        // 0x13acb8: 0x24a90004  addiu       $t1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13acb4) {
            ctx->pc = 0x13ACF0u;
            goto label_13acf0;
        }
    }
    ctx->pc = 0x13ACBCu;
    // 0x13acbc: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x13acbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13acc0: 0x0  nop
    ctx->pc = 0x13acc0u;
    // NOP
label_13acc4:
    // 0x13acc4: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x13acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x13acc8: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x13acc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13accc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13ACCCu;
    {
        const bool branch_taken_0x13accc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13accc) {
            ctx->pc = 0x13ACE0u;
            goto label_13ace0;
        }
    }
    ctx->pc = 0x13ACD4u;
    // 0x13acd4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x13acd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13acd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13ACD8u;
    {
        const bool branch_taken_0x13acd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACD8u;
        // 0x13acdc: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13acd8) {
            ctx->pc = 0x13ACE8u;
            goto label_13ace8;
        }
    }
    ctx->pc = 0x13ACE0u;
label_13ace0:
    // 0x13ace0: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x13ace0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x13ace4: 0x0  nop
    ctx->pc = 0x13ace4u;
    // NOP
label_13ace8:
    // 0x13ace8: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13ACE8u;
    {
        const bool branch_taken_0x13ace8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ace8) {
            ctx->pc = 0x13ACC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13acc4;
        }
    }
    ctx->pc = 0x13ACF0u;
label_13acf0:
    // 0x13acf0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x13acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13acf4: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13ACF4u;
    {
        const bool branch_taken_0x13acf4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x13ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACF4u;
        // 0x13acf8: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13acf4) {
            ctx->pc = 0x13AD14u;
            goto label_13ad14;
        }
    }
    ctx->pc = 0x13ACFCu;
    // 0x13acfc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x13acfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13ad00: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x13ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x13ad04: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x13ad04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13ad08: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13AD08u;
    {
        const bool branch_taken_0x13ad08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ad08) {
            ctx->pc = 0x13AD20u;
            goto label_13ad20;
        }
    }
    ctx->pc = 0x13AD10u;
    // 0x13ad10: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x13ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_13ad14:
    // 0x13ad14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13ad14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13AD18u;
    {
        const bool branch_taken_0x13ad18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD18u;
        // 0x13ad1c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad18) {
            ctx->pc = 0x13AD24u;
            goto label_13ad24;
        }
    }
    ctx->pc = 0x13AD20u;
label_13ad20:
    // 0x13ad20: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x13ad20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_13ad24:
    // 0x13ad24: 0x3e00008  jr          $ra
    ctx->pc = 0x13AD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AD2Cu;
}
