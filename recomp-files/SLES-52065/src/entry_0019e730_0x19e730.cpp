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

// Function: entry_0019e730
// Address: 0x19e730 - 0x19e75c
void entry_0019e730_0x19e730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e730_0x19e730");
#endif

    switch (ctx->pc) {
        case 0x19e754u: goto label_19e754;
        default: break;
    }

    ctx->pc = 0x19e730u;

    // 0x19e730: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x19e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x19e734: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x19e734u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19e738: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x19E738u;
    {
        const bool branch_taken_0x19e738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E738u;
        // 0x19e73c: 0x2329821  addu        $s3, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e738) {
            ctx->pc = 0x19E6A4u;
            return;
        }
    }
    ctx->pc = 0x19E740u;
    // 0x19e740: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x19E740u;
    {
        const bool branch_taken_0x19e740 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e740) {
            ctx->pc = 0x19E778u;
            return;
        }
    }
    ctx->pc = 0x19E748u;
    // 0x19e748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e74c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19E74Cu;
    SET_GPR_U32(ctx, 31, 0x19E754u);
    ctx->pc = 0x19E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E74Cu;
    // 0x19e750: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19E74Cu, 0x19E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E754u;
label_19e754:
    // 0x19e754: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19E754u;
    {
        const bool branch_taken_0x19e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e754) {
            ctx->pc = 0x19E778u;
            return;
        }
    }
    ctx->pc = 0x19E75Cu;
}
