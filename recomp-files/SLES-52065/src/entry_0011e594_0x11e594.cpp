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

// Function: entry_0011e594
// Address: 0x11e594 - 0x11e5d0
void entry_0011e594_0x11e594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e594_0x11e594");
#endif

    switch (ctx->pc) {
        case 0x11e5b8u: goto label_11e5b8;
        default: break;
    }

    ctx->pc = 0x11e594u;

    // 0x11e594: 0x0  nop
    ctx->pc = 0x11e594u;
    // NOP
    // 0x11e598: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x11e598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x11e59c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11e59cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e5a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5a4: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x11e5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x11e5a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5ac: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x11e5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e5b0: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11E5B0u;
    SET_GPR_U32(ctx, 31, 0x11E5B8u);
    ctx->pc = 0x11E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E5B0u;
    // 0x11e5b4: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11E5B0u, 0x11E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5B8u;
label_11e5b8:
    // 0x11e5b8: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x11e5b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e5bc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x11e5bcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x11e5c0: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E5C0u;
    {
        const bool branch_taken_0x11e5c0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x11e5c0) {
            ctx->pc = 0x11E5D0u;
            return;
        }
    }
    ctx->pc = 0x11E5C8u;
    // 0x11e5c8: 0xaf9183e0  sw          $s1, -0x7C20($gp)
    ctx->pc = 0x11e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935520), GPR_U32(ctx, 17));
    // 0x11e5cc: 0xff9083e8  sd          $s0, -0x7C18($gp)
    ctx->pc = 0x11e5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935528), GPR_U64(ctx, 16));
    ctx->pc = 0x11e5d0u;
}
