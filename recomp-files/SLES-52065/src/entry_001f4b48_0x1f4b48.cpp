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

// Function: entry_001f4b48
// Address: 0x1f4b48 - 0x1f4b70
void entry_001f4b48_0x1f4b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4b48_0x1f4b48");
#endif

    switch (ctx->pc) {
        case 0x1f4b50u: goto label_1f4b50;
        case 0x1f4b60u: goto label_1f4b60;
        default: break;
    }

    ctx->pc = 0x1f4b48u;

label_1f4b48:
    // 0x1f4b48: 0xc07d2a8  jal         func_1F4AA0
    ctx->pc = 0x1F4B48u;
    SET_GPR_U32(ctx, 31, 0x1F4B50u);
    ctx->pc = 0x1F4B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B48u;
    // 0x1f4b4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4AA0u, 0x1F4B48u, 0x1F4B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B50u;
label_1f4b50:
    // 0x1f4b50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f4b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4b54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b58: 0xc07d292  jal         func_1F4A48
    ctx->pc = 0x1F4B58u;
    SET_GPR_U32(ctx, 31, 0x1F4B60u);
    ctx->pc = 0x1F4B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B58u;
    // 0x1f4b5c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4A48u, 0x1F4B58u, 0x1F4B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B60u;
label_1f4b60:
    // 0x1f4b60: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1f4b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f4b64: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F4B64u;
    {
        const bool branch_taken_0x1f4b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b64) {
            ctx->pc = 0x1F4B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4B64u;
            // 0x1f4b68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4b48;
        }
    }
    ctx->pc = 0x1F4B6Cu;
    // 0x1f4b6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f4b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f4b70u;
}
