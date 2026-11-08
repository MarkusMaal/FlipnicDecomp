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

// Function: entry_001e45b0
// Address: 0x1e45b0 - 0x1e45f4
void entry_001e45b0_0x1e45b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e45b0_0x1e45b0");
#endif

    switch (ctx->pc) {
        case 0x1e45c4u: goto label_1e45c4;
        case 0x1e45d4u: goto label_1e45d4;
        default: break;
    }

    ctx->pc = 0x1e45b0u;

label_1e45b0:
    // 0x1e45b0: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x1e45b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1e45b4:
    // 0x1e45b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e45b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e45b8:
    // 0x1e45b8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e45b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e45bc:
    // 0x1e45bc: 0x320f809  jalr        $t9
label_1e45c0:
    if (ctx->pc == 0x1E45C0u) {
        ctx->pc = 0x1E45C4u;
        goto label_1e45c4;
    }
    ctx->pc = 0x1E45BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E45C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E45BCu, 0x1E45C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E45C4u;
label_1e45c4:
    // 0x1e45c4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e45c8:
    if (ctx->pc == 0x1E45C8u) {
        ctx->pc = 0x1E45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45C4u;
        // 0x1e45c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45CCu;
        goto label_1e45cc;
    }
    ctx->pc = 0x1E45C4u;
    {
        const bool branch_taken_0x1e45c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45C4u;
        // 0x1e45c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45c4) {
            ctx->pc = 0x1E45F4u;
            return;
        }
    }
    ctx->pc = 0x1E45CCu;
label_1e45cc:
    // 0x1e45cc: 0xc07a704  jal         func_1E9C10
label_1e45d0:
    if (ctx->pc == 0x1E45D0u) {
        ctx->pc = 0x1E45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45CCu;
        // 0x1e45d0: 0x27c40080  addiu       $a0, $fp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45D4u;
        goto label_1e45d4;
    }
    ctx->pc = 0x1E45CCu;
    SET_GPR_U32(ctx, 31, 0x1E45D4u);
    ctx->pc = 0x1E45D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E45CCu;
    // 0x1e45d0: 0x27c40080  addiu       $a0, $fp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E45CCu, 0x1E45D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E45D4u;
label_1e45d4:
    // 0x1e45d4: 0x0  nop
    ctx->pc = 0x1e45d4u;
    // NOP
label_1e45d8:
    // 0x1e45d8: 0x0  nop
    ctx->pc = 0x1e45d8u;
    // NOP
label_1e45dc:
    // 0x1e45dc: 0x0  nop
    ctx->pc = 0x1e45dcu;
    // NOP
label_1e45e0:
    // 0x1e45e0: 0x0  nop
    ctx->pc = 0x1e45e0u;
    // NOP
label_1e45e4:
    // 0x1e45e4: 0x0  nop
    ctx->pc = 0x1e45e4u;
    // NOP
label_1e45e8:
    // 0x1e45e8: 0x0  nop
    ctx->pc = 0x1e45e8u;
    // NOP
label_1e45ec:
    // 0x1e45ec: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e45f0:
    if (ctx->pc == 0x1E45F0u) {
        ctx->pc = 0x1E45F4u;
        goto label_fallthrough_0x1e45ec;
    }
    ctx->pc = 0x1E45ECu;
    {
        const bool branch_taken_0x1e45ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e45ec) {
            ctx->pc = 0x1E45D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e45d4;
        }
    }
label_fallthrough_0x1e45ec:
    ctx->pc = 0x1E45F4u;
}
