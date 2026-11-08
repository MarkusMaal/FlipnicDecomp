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

// Function: entry_0011d790
// Address: 0x11d790 - 0x11d7c4
void entry_0011d790_0x11d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d790_0x11d790");
#endif

    switch (ctx->pc) {
        case 0x11d7b0u: goto label_11d7b0;
        case 0x11d7bcu: goto label_11d7bc;
        default: break;
    }

    ctx->pc = 0x11d790u;

    // 0x11d790: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x11d790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x11d794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d798: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x11d798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x11d79c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11d7a0: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x11d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    // 0x11d7a4: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x11d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x11d7a8: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11D7A8u;
    SET_GPR_U32(ctx, 31, 0x11D7B0u);
    ctx->pc = 0x11D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7A8u;
    // 0x11d7ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11D7A8u, 0x11D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7B0u;
label_11d7b0:
    // 0x11d7b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7b4: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D7B4u;
    SET_GPR_U32(ctx, 31, 0x11D7BCu);
    ctx->pc = 0x11D7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7B4u;
    // 0x11d7b8: 0x27a50370  addiu       $a1, $sp, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D7B4u, 0x11D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7BCu;
label_11d7bc:
    // 0x11d7bc: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x11D7BCu;
    {
        const bool branch_taken_0x11d7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d7bc) {
            ctx->pc = 0x11DA5Cu;
            return;
        }
    }
    ctx->pc = 0x11D7C4u;
}
