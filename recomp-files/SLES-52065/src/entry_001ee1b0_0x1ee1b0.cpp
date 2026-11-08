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

// Function: entry_001ee1b0
// Address: 0x1ee1b0 - 0x1ee1d0
void entry_001ee1b0_0x1ee1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee1b0_0x1ee1b0");
#endif

    switch (ctx->pc) {
        case 0x1ee1c8u: goto label_1ee1c8;
        default: break;
    }

    ctx->pc = 0x1ee1b0u;

label_1ee1b0:
    // 0x1ee1b0: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1ee1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1ee1b4:
    // 0x1ee1b4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1ee1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ee1b8:
    // 0x1ee1b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1ee1bc:
    if (ctx->pc == 0x1EE1BCu) {
        ctx->pc = 0x1EE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1B8u;
        // 0x1ee1bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1C0u;
        goto label_1ee1c0;
    }
    ctx->pc = 0x1EE1B8u;
    {
        const bool branch_taken_0x1ee1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee1b8) {
            ctx->pc = 0x1EE1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE1B8u;
            // 0x1ee1bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE1ECu;
            return;
        }
    }
    ctx->pc = 0x1EE1C0u;
label_1ee1c0:
    // 0x1ee1c0: 0x40f809  jalr        $v0
label_1ee1c4:
    if (ctx->pc == 0x1EE1C4u) {
        ctx->pc = 0x1EE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1C0u;
        // 0x1ee1c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1C8u;
        goto label_1ee1c8;
    }
    ctx->pc = 0x1EE1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE1C8u);
        ctx->pc = 0x1EE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1C0u;
        // 0x1ee1c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE1C0u, 0x1EE1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE1C8u;
label_1ee1c8:
    // 0x1ee1c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ee1cc:
    if (ctx->pc == 0x1EE1CCu) {
        ctx->pc = 0x1EE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1C8u;
        // 0x1ee1cc: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1D0u;
        goto label_fallthrough_0x1ee1c8;
    }
    ctx->pc = 0x1EE1C8u;
    {
        const bool branch_taken_0x1ee1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1C8u;
        // 0x1ee1cc: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1c8) {
            ctx->pc = 0x1EE1E8u;
            return;
        }
    }
label_fallthrough_0x1ee1c8:
    ctx->pc = 0x1EE1D0u;
}
