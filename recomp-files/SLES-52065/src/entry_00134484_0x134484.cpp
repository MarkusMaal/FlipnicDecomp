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

// Function: entry_00134484
// Address: 0x134484 - 0x1344a8
void entry_00134484_0x134484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134484_0x134484");
#endif

    switch (ctx->pc) {
        case 0x134490u: goto label_134490;
        default: break;
    }

    ctx->pc = 0x134484u;

    // 0x134484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134488: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x134488u;
    SET_GPR_U32(ctx, 31, 0x134490u);
    ctx->pc = 0x13448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134488u;
    // 0x13448c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313B0u, 0x134488u, 0x134490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134490u;
label_134490:
    // 0x134490: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x134490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x134494: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x134494u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x134498: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134498u;
    {
        const bool branch_taken_0x134498 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134498u;
        // 0x13449c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134498) {
            ctx->pc = 0x1344ACu;
            return;
        }
    }
    ctx->pc = 0x1344A0u;
    // 0x1344a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1344A0u;
    SET_GPR_U32(ctx, 31, 0x1344A8u);
    ctx->pc = 0x1344A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344A0u;
    // 0x1344a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1344A0u, 0x1344A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344A8u;
}
