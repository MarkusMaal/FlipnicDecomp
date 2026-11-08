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

// Function: entry_001e3c28
// Address: 0x1e3c28 - 0x1e3c6c
void entry_001e3c28_0x1e3c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3c28_0x1e3c28");
#endif

    switch (ctx->pc) {
        case 0x1e3c3cu: goto label_1e3c3c;
        case 0x1e3c4cu: goto label_1e3c4c;
        default: break;
    }

    ctx->pc = 0x1e3c28u;

label_1e3c28:
    // 0x1e3c28: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1e3c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1e3c2c:
    // 0x1e3c2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3c30:
    // 0x1e3c30: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e3c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e3c34:
    // 0x1e3c34: 0x320f809  jalr        $t9
label_1e3c38:
    if (ctx->pc == 0x1E3C38u) {
        ctx->pc = 0x1E3C3Cu;
        goto label_1e3c3c;
    }
    ctx->pc = 0x1E3C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3C3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3C34u, 0x1E3C3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3C3Cu;
label_1e3c3c:
    // 0x1e3c3c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e3c40:
    if (ctx->pc == 0x1E3C40u) {
        ctx->pc = 0x1E3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C3Cu;
        // 0x1e3c40: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C44u;
        goto label_1e3c44;
    }
    ctx->pc = 0x1E3C3Cu;
    {
        const bool branch_taken_0x1e3c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C3Cu;
        // 0x1e3c40: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c3c) {
            ctx->pc = 0x1E3C6Cu;
            return;
        }
    }
    ctx->pc = 0x1E3C44u;
label_1e3c44:
    // 0x1e3c44: 0xc07a704  jal         func_1E9C10
label_1e3c48:
    if (ctx->pc == 0x1E3C48u) {
        ctx->pc = 0x1E3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C44u;
        // 0x1e3c48: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C4Cu;
        goto label_1e3c4c;
    }
    ctx->pc = 0x1E3C44u;
    SET_GPR_U32(ctx, 31, 0x1E3C4Cu);
    ctx->pc = 0x1E3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C44u;
    // 0x1e3c48: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E3C44u, 0x1E3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C4Cu;
label_1e3c4c:
    // 0x1e3c4c: 0x0  nop
    ctx->pc = 0x1e3c4cu;
    // NOP
label_1e3c50:
    // 0x1e3c50: 0x0  nop
    ctx->pc = 0x1e3c50u;
    // NOP
label_1e3c54:
    // 0x1e3c54: 0x0  nop
    ctx->pc = 0x1e3c54u;
    // NOP
label_1e3c58:
    // 0x1e3c58: 0x0  nop
    ctx->pc = 0x1e3c58u;
    // NOP
label_1e3c5c:
    // 0x1e3c5c: 0x0  nop
    ctx->pc = 0x1e3c5cu;
    // NOP
label_1e3c60:
    // 0x1e3c60: 0x0  nop
    ctx->pc = 0x1e3c60u;
    // NOP
label_1e3c64:
    // 0x1e3c64: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e3c68:
    if (ctx->pc == 0x1E3C68u) {
        ctx->pc = 0x1E3C6Cu;
        goto label_fallthrough_0x1e3c64;
    }
    ctx->pc = 0x1E3C64u;
    {
        const bool branch_taken_0x1e3c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3c64) {
            ctx->pc = 0x1E3C4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3c4c;
        }
    }
label_fallthrough_0x1e3c64:
    ctx->pc = 0x1E3C6Cu;
}
