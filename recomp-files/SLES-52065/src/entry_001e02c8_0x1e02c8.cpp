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

// Function: entry_001e02c8
// Address: 0x1e02c8 - 0x1e02f8
void entry_001e02c8_0x1e02c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e02c8_0x1e02c8");
#endif

    switch (ctx->pc) {
        case 0x1e02d4u: goto label_1e02d4;
        case 0x1e02e4u: goto label_1e02e4;
        case 0x1e02f4u: goto label_1e02f4;
        default: break;
    }

    ctx->pc = 0x1e02c8u;

    // 0x1e02c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e02c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02cc: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E02CCu;
    SET_GPR_U32(ctx, 31, 0x1E02D4u);
    ctx->pc = 0x1E02D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02CCu;
    // 0x1e02d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E02CCu, 0x1E02D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02D4u;
label_1e02d4:
    // 0x1e02d4: 0xde250078  ld          $a1, 0x78($s1)
    ctx->pc = 0x1e02d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1e02d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e02d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02dc: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1E02DCu;
    SET_GPR_U32(ctx, 31, 0x1E02E4u);
    ctx->pc = 0x1E02E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02DCu;
    // 0x1e02e0: 0xfe220040  sd          $v0, 0x40($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1E02DCu, 0x1E02E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02E4u;
label_1e02e4:
    // 0x1e02e4: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x1e02e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x1e02e8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1e02e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1e02ec: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E02ECu;
    SET_GPR_U32(ctx, 31, 0x1E02F4u);
    ctx->pc = 0x1E02F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02ECu;
    // 0x1e02f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E02ECu, 0x1E02F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02F4u;
label_1e02f4:
    // 0x1e02f4: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1e02f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    ctx->pc = 0x1e02f8u;
}
