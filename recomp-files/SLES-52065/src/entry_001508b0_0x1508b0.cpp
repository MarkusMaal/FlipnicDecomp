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

// Function: entry_001508b0
// Address: 0x1508b0 - 0x1508d4
void entry_001508b0_0x1508b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001508b0_0x1508b0");
#endif

    switch (ctx->pc) {
        case 0x1508bcu: goto label_1508bc;
        default: break;
    }

    ctx->pc = 0x1508b0u;

    // 0x1508b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1508b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1508b4: 0xc053cf4  jal         func_14F3D0
    ctx->pc = 0x1508B4u;
    SET_GPR_U32(ctx, 31, 0x1508BCu);
    ctx->pc = 0x1508B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508B4u;
    // 0x1508b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F3D0u, 0x1508B4u, 0x1508BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508BCu;
label_1508bc:
    // 0x1508bc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1508bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1508c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1508c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1508c4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1508C4u;
    {
        const bool branch_taken_0x1508c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1508C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508C4u;
        // 0x1508c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508c4) {
            ctx->pc = 0x1508D8u;
            return;
        }
    }
    ctx->pc = 0x1508CCu;
    // 0x1508cc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1508CCu;
    SET_GPR_U32(ctx, 31, 0x1508D4u);
    ctx->pc = 0x1508D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508CCu;
    // 0x1508d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1508CCu, 0x1508D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508D4u;
}
