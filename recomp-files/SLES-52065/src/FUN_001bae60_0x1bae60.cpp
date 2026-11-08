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

// Function: FUN_001bae60
// Address: 0x1bae60 - 0x1baedc
void FUN_001bae60_0x1bae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bae60_0x1bae60");
#endif

    switch (ctx->pc) {
        case 0x1bae74u: goto label_1bae74;
        default: break;
    }

    ctx->pc = 0x1bae60u;

    // 0x1bae60: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x1bae60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bae64: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BAE64u;
    {
        const bool branch_taken_0x1bae64 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE64u;
        // 0x1bae68: 0x24a90004  addiu       $t1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae64) {
            ctx->pc = 0x1BAEA0u;
            goto label_1baea0;
        }
    }
    ctx->pc = 0x1BAE6Cu;
    // 0x1bae6c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1bae6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bae70: 0x0  nop
    ctx->pc = 0x1bae70u;
    // NOP
label_1bae74:
    // 0x1bae74: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1bae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1bae78: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x1bae78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1bae7c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAE7Cu;
    {
        const bool branch_taken_0x1bae7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bae7c) {
            ctx->pc = 0x1BAE90u;
            goto label_1bae90;
        }
    }
    ctx->pc = 0x1BAE84u;
    // 0x1bae84: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1bae84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAE88u;
    {
        const bool branch_taken_0x1bae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE88u;
        // 0x1bae8c: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae88) {
            ctx->pc = 0x1BAE98u;
            goto label_1bae98;
        }
    }
    ctx->pc = 0x1BAE90u;
label_1bae90:
    // 0x1bae90: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x1bae90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1bae94: 0x0  nop
    ctx->pc = 0x1bae94u;
    // NOP
label_1bae98:
    // 0x1bae98: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BAE98u;
    {
        const bool branch_taken_0x1bae98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bae98) {
            ctx->pc = 0x1BAE74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bae74;
        }
    }
    ctx->pc = 0x1BAEA0u;
label_1baea0:
    // 0x1baea0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1baea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1baea4: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAEA4u;
    {
        const bool branch_taken_0x1baea4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEA4u;
        // 0x1baea8: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baea4) {
            ctx->pc = 0x1BAEC4u;
            goto label_1baec4;
        }
    }
    ctx->pc = 0x1BAEACu;
    // 0x1baeac: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1baeacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1baeb0: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x1baeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1baeb4: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x1baeb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1baeb8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAEB8u;
    {
        const bool branch_taken_0x1baeb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baeb8) {
            ctx->pc = 0x1BAED0u;
            goto label_1baed0;
        }
    }
    ctx->pc = 0x1BAEC0u;
    // 0x1baec0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1baec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1baec4:
    // 0x1baec4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1baec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baec8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAEC8u;
    {
        const bool branch_taken_0x1baec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEC8u;
        // 0x1baecc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baec8) {
            ctx->pc = 0x1BAED4u;
            goto label_1baed4;
        }
    }
    ctx->pc = 0x1BAED0u;
label_1baed0:
    // 0x1baed0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1baed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_1baed4:
    // 0x1baed4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAEDCu;
}
