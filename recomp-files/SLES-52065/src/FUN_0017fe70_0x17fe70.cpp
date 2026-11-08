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

// Function: FUN_0017fe70
// Address: 0x17fe70 - 0x17feac
void FUN_0017fe70_0x17fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017fe70_0x17fe70");
#endif

    switch (ctx->pc) {
        case 0x17fe84u: goto label_17fe84;
        default: break;
    }

    ctx->pc = 0x17fe70u;

    // 0x17fe70: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x17fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17fe74: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FE74u;
    {
        const bool branch_taken_0x17fe74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE74u;
        // 0x17fe78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe74) {
            ctx->pc = 0x17FE98u;
            goto label_17fe98;
        }
    }
    ctx->pc = 0x17FE7Cu;
    // 0x17fe7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17FE7Cu;
    {
        const bool branch_taken_0x17fe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE7Cu;
        // 0x17fe80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe7c) {
            ctx->pc = 0x17FEA4u;
            goto label_17fea4;
        }
    }
    ctx->pc = 0x17FE84u;
label_17fe84:
    // 0x17fe84: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FE84u;
    {
        const bool branch_taken_0x17fe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fe84) {
            ctx->pc = 0x17FE90u;
            goto label_17fe90;
        }
    }
    ctx->pc = 0x17FE8Cu;
    // 0x17fe8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17fe90:
    // 0x17fe90: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x17fe90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x17fe94: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x17fe94u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_17fe98:
    // 0x17fe98: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x17fe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x17fe9c: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17FE9Cu;
    {
        const bool branch_taken_0x17fe9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE9Cu;
        // 0x17fea0: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe9c) {
            ctx->pc = 0x17FE84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fe84;
        }
    }
    ctx->pc = 0x17FEA4u;
label_17fea4:
    // 0x17fea4: 0x3e00008  jr          $ra
    ctx->pc = 0x17FEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FEACu;
}
