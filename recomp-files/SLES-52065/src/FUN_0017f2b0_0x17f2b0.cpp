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

// Function: FUN_0017f2b0
// Address: 0x17f2b0 - 0x17f32c
void FUN_0017f2b0_0x17f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f2b0_0x17f2b0");
#endif

    switch (ctx->pc) {
        case 0x17f2c4u: goto label_17f2c4;
        default: break;
    }

    ctx->pc = 0x17f2b0u;

    // 0x17f2b0: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x17f2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17f2b4: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x17F2B4u;
    {
        const bool branch_taken_0x17f2b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2B4u;
        // 0x17f2b8: 0x24a90004  addiu       $t1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2b4) {
            ctx->pc = 0x17F2F0u;
            goto label_17f2f0;
        }
    }
    ctx->pc = 0x17F2BCu;
    // 0x17f2bc: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x17f2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17f2c0: 0x0  nop
    ctx->pc = 0x17f2c0u;
    // NOP
label_17f2c4:
    // 0x17f2c4: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x17f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x17f2c8: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x17f2c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x17f2cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F2CCu;
    {
        const bool branch_taken_0x17f2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f2cc) {
            ctx->pc = 0x17F2E0u;
            goto label_17f2e0;
        }
    }
    ctx->pc = 0x17F2D4u;
    // 0x17f2d4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f2d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17F2D8u;
    {
        const bool branch_taken_0x17f2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2D8u;
        // 0x17f2dc: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2d8) {
            ctx->pc = 0x17F2E8u;
            goto label_17f2e8;
        }
    }
    ctx->pc = 0x17F2E0u;
label_17f2e0:
    // 0x17f2e0: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x17f2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x17f2e4: 0x0  nop
    ctx->pc = 0x17f2e4u;
    // NOP
label_17f2e8:
    // 0x17f2e8: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17F2E8u;
    {
        const bool branch_taken_0x17f2e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f2e8) {
            ctx->pc = 0x17F2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f2c4;
        }
    }
    ctx->pc = 0x17F2F0u;
label_17f2f0:
    // 0x17f2f0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x17f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x17f2f4: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F2F4u;
    {
        const bool branch_taken_0x17f2f4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x17F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2F4u;
        // 0x17f2f8: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2f4) {
            ctx->pc = 0x17F314u;
            goto label_17f314;
        }
    }
    ctx->pc = 0x17F2FCu;
    // 0x17f2fc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x17f2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17f300: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x17f300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x17f304: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x17f304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17f308: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F308u;
    {
        const bool branch_taken_0x17f308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f308) {
            ctx->pc = 0x17F320u;
            goto label_17f320;
        }
    }
    ctx->pc = 0x17F310u;
    // 0x17f310: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x17f310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_17f314:
    // 0x17f314: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17f314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F318u;
    {
        const bool branch_taken_0x17f318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F318u;
        // 0x17f31c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f318) {
            ctx->pc = 0x17F324u;
            goto label_17f324;
        }
    }
    ctx->pc = 0x17F320u;
label_17f320:
    // 0x17f320: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x17f320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_17f324:
    // 0x17f324: 0x3e00008  jr          $ra
    ctx->pc = 0x17F324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F32Cu;
}
