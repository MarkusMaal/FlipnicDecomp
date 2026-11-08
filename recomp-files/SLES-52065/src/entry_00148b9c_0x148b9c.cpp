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

// Function: entry_00148b9c
// Address: 0x148b9c - 0x148bbc
void entry_00148b9c_0x148b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148b9c_0x148b9c");
#endif

    switch (ctx->pc) {
        case 0x148bacu: goto label_148bac;
        default: break;
    }

    ctx->pc = 0x148b9cu;

label_148b9c:
    // 0x148b9c: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x148b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x148ba0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x148ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x148ba4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x148BA4u;
    SET_GPR_U32(ctx, 31, 0x148BACu);
    ctx->pc = 0x148BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148BA4u;
    // 0x148ba8: 0x24440130  addiu       $a0, $v0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x148BA4u, 0x148BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148BACu;
label_148bac:
    // 0x148bac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x148bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x148bb0: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x148bb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x148bb4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x148BB4u;
    {
        const bool branch_taken_0x148bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BB4u;
        // 0x148bb8: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148bb4) {
            ctx->pc = 0x148B9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148b9c;
        }
    }
    ctx->pc = 0x148BBCu;
}
