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

// Function: entry_001df9a0
// Address: 0x1df9a0 - 0x1df9d8
void entry_001df9a0_0x1df9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df9a0_0x1df9a0");
#endif

    switch (ctx->pc) {
        case 0x1df9acu: goto label_1df9ac;
        case 0x1df9bcu: goto label_1df9bc;
        case 0x1df9ccu: goto label_1df9cc;
        default: break;
    }

    ctx->pc = 0x1df9a0u;

    // 0x1df9a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9a4: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF9A4u;
    SET_GPR_U32(ctx, 31, 0x1DF9ACu);
    ctx->pc = 0x1DF9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9A4u;
    // 0x1df9a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF9A4u, 0x1DF9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9ACu;
label_1df9ac:
    // 0x1df9ac: 0xde250078  ld          $a1, 0x78($s1)
    ctx->pc = 0x1df9acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1df9b0: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1df9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1df9b4: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1DF9B4u;
    SET_GPR_U32(ctx, 31, 0x1DF9BCu);
    ctx->pc = 0x1DF9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9B4u;
    // 0x1df9b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1DF9B4u, 0x1DF9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9BCu;
label_1df9bc:
    // 0x1df9bc: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x1df9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x1df9c0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1df9c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1df9c4: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF9C4u;
    SET_GPR_U32(ctx, 31, 0x1DF9CCu);
    ctx->pc = 0x1DF9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9C4u;
    // 0x1df9c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF9C4u, 0x1DF9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9CCu;
label_1df9cc:
    // 0x1df9cc: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1df9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1df9d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1DF9D0u;
    {
        const bool branch_taken_0x1df9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9D0u;
        // 0x1df9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9d0) {
            ctx->pc = 0x1DFA40u;
            return;
        }
    }
    ctx->pc = 0x1DF9D8u;
}
