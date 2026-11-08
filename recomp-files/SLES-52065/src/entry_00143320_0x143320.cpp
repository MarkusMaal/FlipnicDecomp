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

// Function: entry_00143320
// Address: 0x143320 - 0x143358
void entry_00143320_0x143320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143320_0x143320");
#endif

    switch (ctx->pc) {
        case 0x143348u: goto label_143348;
        default: break;
    }

    ctx->pc = 0x143320u;

label_143320:
    // 0x143320: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x143320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x143324: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x143324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x143328: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x143328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x14332c: 0x2111818  mult        $v1, $s0, $s1
    ctx->pc = 0x14332cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x143330: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x143330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x143334: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x143334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x143338: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x143338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14333c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14333cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x143340: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x143340u;
    SET_GPR_U32(ctx, 31, 0x143348u);
    ctx->pc = 0x143344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143340u;
    // 0x143344: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x143340u, 0x143348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143348u;
label_143348:
    // 0x143348: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x143348u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14334c: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x14334cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x143350: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x143350u;
    {
        const bool branch_taken_0x143350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x143350) {
            ctx->pc = 0x143320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143320;
        }
    }
    ctx->pc = 0x143358u;
}
