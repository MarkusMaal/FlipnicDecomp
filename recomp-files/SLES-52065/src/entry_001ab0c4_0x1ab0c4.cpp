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

// Function: entry_001ab0c4
// Address: 0x1ab0c4 - 0x1ab0e0
void entry_001ab0c4_0x1ab0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab0c4_0x1ab0c4");
#endif

    switch (ctx->pc) {
        case 0x1ab0d8u: goto label_1ab0d8;
        default: break;
    }

    ctx->pc = 0x1ab0c4u;

label_1ab0c4:
    // 0x1ab0c4: 0x8e8406e4  lw          $a0, 0x6E4($s4)
    ctx->pc = 0x1ab0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1764)));
label_1ab0c8:
    // 0x1ab0c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ab0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ab0cc:
    // 0x1ab0cc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ab0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ab0d0:
    // 0x1ab0d0: 0x320f809  jalr        $t9
label_1ab0d4:
    if (ctx->pc == 0x1AB0D4u) {
        ctx->pc = 0x1AB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0D0u;
        // 0x1ab0d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0D8u;
        goto label_1ab0d8;
    }
    ctx->pc = 0x1AB0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB0D8u);
        ctx->pc = 0x1AB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0D0u;
        // 0x1ab0d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB0D0u, 0x1AB0D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB0D8u;
label_1ab0d8:
    // 0x1ab0d8: 0xc063e14  jal         func_18F850
label_1ab0dc:
    if (ctx->pc == 0x1AB0DCu) {
        ctx->pc = 0x1AB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0D8u;
        // 0x1ab0dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0E0u;
        goto label_fallthrough_0x1ab0d8;
    }
    ctx->pc = 0x1AB0D8u;
    SET_GPR_U32(ctx, 31, 0x1AB0E0u);
    ctx->pc = 0x1AB0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0D8u;
    // 0x1ab0dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB0D8u, 0x1AB0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1ab0d8:
    ctx->pc = 0x1AB0E0u;
}
