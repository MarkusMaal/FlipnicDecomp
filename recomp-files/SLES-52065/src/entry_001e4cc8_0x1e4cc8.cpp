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

// Function: entry_001e4cc8
// Address: 0x1e4cc8 - 0x1e4d0c
void entry_001e4cc8_0x1e4cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4cc8_0x1e4cc8");
#endif

    switch (ctx->pc) {
        case 0x1e4cdcu: goto label_1e4cdc;
        case 0x1e4cecu: goto label_1e4cec;
        default: break;
    }

    ctx->pc = 0x1e4cc8u;

label_1e4cc8:
    // 0x1e4cc8: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1e4cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1e4ccc:
    // 0x1e4ccc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4cd0:
    // 0x1e4cd0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4cd4:
    // 0x1e4cd4: 0x320f809  jalr        $t9
label_1e4cd8:
    if (ctx->pc == 0x1E4CD8u) {
        ctx->pc = 0x1E4CDCu;
        goto label_1e4cdc;
    }
    ctx->pc = 0x1E4CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4CDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4CD4u, 0x1E4CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4CDCu;
label_1e4cdc:
    // 0x1e4cdc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e4ce0:
    if (ctx->pc == 0x1E4CE0u) {
        ctx->pc = 0x1E4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CDCu;
        // 0x1e4ce0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CE4u;
        goto label_1e4ce4;
    }
    ctx->pc = 0x1E4CDCu;
    {
        const bool branch_taken_0x1e4cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CDCu;
        // 0x1e4ce0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4cdc) {
            ctx->pc = 0x1E4D0Cu;
            return;
        }
    }
    ctx->pc = 0x1E4CE4u;
label_1e4ce4:
    // 0x1e4ce4: 0xc07a704  jal         func_1E9C10
label_1e4ce8:
    if (ctx->pc == 0x1E4CE8u) {
        ctx->pc = 0x1E4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CE4u;
        // 0x1e4ce8: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CECu;
        goto label_1e4cec;
    }
    ctx->pc = 0x1E4CE4u;
    SET_GPR_U32(ctx, 31, 0x1E4CECu);
    ctx->pc = 0x1E4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CE4u;
    // 0x1e4ce8: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E4CE4u, 0x1E4CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CECu;
label_1e4cec:
    // 0x1e4cec: 0x0  nop
    ctx->pc = 0x1e4cecu;
    // NOP
label_1e4cf0:
    // 0x1e4cf0: 0x0  nop
    ctx->pc = 0x1e4cf0u;
    // NOP
label_1e4cf4:
    // 0x1e4cf4: 0x0  nop
    ctx->pc = 0x1e4cf4u;
    // NOP
label_1e4cf8:
    // 0x1e4cf8: 0x0  nop
    ctx->pc = 0x1e4cf8u;
    // NOP
label_1e4cfc:
    // 0x1e4cfc: 0x0  nop
    ctx->pc = 0x1e4cfcu;
    // NOP
label_1e4d00:
    // 0x1e4d00: 0x0  nop
    ctx->pc = 0x1e4d00u;
    // NOP
label_1e4d04:
    // 0x1e4d04: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e4d08:
    if (ctx->pc == 0x1E4D08u) {
        ctx->pc = 0x1E4D0Cu;
        goto label_fallthrough_0x1e4d04;
    }
    ctx->pc = 0x1E4D04u;
    {
        const bool branch_taken_0x1e4d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d04) {
            ctx->pc = 0x1E4CECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4cec;
        }
    }
label_fallthrough_0x1e4d04:
    ctx->pc = 0x1E4D0Cu;
}
