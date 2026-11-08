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

// Function: entry_001ac2d4
// Address: 0x1ac2d4 - 0x1ac2f0
void entry_001ac2d4_0x1ac2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac2d4_0x1ac2d4");
#endif

    switch (ctx->pc) {
        case 0x1ac2e8u: goto label_1ac2e8;
        default: break;
    }

    ctx->pc = 0x1ac2d4u;

label_1ac2d4:
    // 0x1ac2d4: 0x8e2406e4  lw          $a0, 0x6E4($s1)
    ctx->pc = 0x1ac2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1764)));
label_1ac2d8:
    // 0x1ac2d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ac2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ac2dc:
    // 0x1ac2dc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ac2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ac2e0:
    // 0x1ac2e0: 0x320f809  jalr        $t9
label_1ac2e4:
    if (ctx->pc == 0x1AC2E4u) {
        ctx->pc = 0x1AC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E0u;
        // 0x1ac2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2E8u;
        goto label_1ac2e8;
    }
    ctx->pc = 0x1AC2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AC2E8u);
        ctx->pc = 0x1AC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E0u;
        // 0x1ac2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC2E0u, 0x1AC2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC2E8u;
label_1ac2e8:
    // 0x1ac2e8: 0xc063e14  jal         func_18F850
label_1ac2ec:
    if (ctx->pc == 0x1AC2ECu) {
        ctx->pc = 0x1AC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E8u;
        // 0x1ac2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2F0u;
        goto label_fallthrough_0x1ac2e8;
    }
    ctx->pc = 0x1AC2E8u;
    SET_GPR_U32(ctx, 31, 0x1AC2F0u);
    ctx->pc = 0x1AC2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2E8u;
    // 0x1ac2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC2E8u, 0x1AC2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1ac2e8:
    ctx->pc = 0x1AC2F0u;
}
