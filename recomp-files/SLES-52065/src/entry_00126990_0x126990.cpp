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

// Function: entry_00126990
// Address: 0x126990 - 0x1269b4
void entry_00126990_0x126990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126990_0x126990");
#endif

    switch (ctx->pc) {
        case 0x1269a0u: goto label_1269a0;
        default: break;
    }

    ctx->pc = 0x126990u;

label_126990:
    // 0x126990: 0x8ea200f0  lw          $v0, 0xF0($s5)
    ctx->pc = 0x126990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x126994: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x126994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x126998: 0xc049a98  jal         func_126A60
    ctx->pc = 0x126998u;
    SET_GPR_U32(ctx, 31, 0x1269A0u);
    ctx->pc = 0x12699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126998u;
    // 0x12699c: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A60u, 0x126998u, 0x1269A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269A0u;
label_1269a0:
    // 0x1269a0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1269a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1269a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1269a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1269a8: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x1269a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1269ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1269ACu;
    {
        const bool branch_taken_0x1269ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1269B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269ACu;
        // 0x1269b0: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269ac) {
            ctx->pc = 0x126990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126990;
        }
    }
    ctx->pc = 0x1269B4u;
}
