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

// Function: entry_001fc920
// Address: 0x1fc920 - 0x1fc948
void entry_001fc920_0x1fc920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc920_0x1fc920");
#endif

    switch (ctx->pc) {
        case 0x1fc930u: goto label_1fc930;
        case 0x1fc944u: goto label_1fc944;
        default: break;
    }

    ctx->pc = 0x1fc920u;

    // 0x1fc920: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1fc920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1fc924: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1fc924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1fc928: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC928u;
    SET_GPR_U32(ctx, 31, 0x1FC930u);
    ctx->pc = 0x1FC92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC928u;
    // 0x1fc92c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC928u, 0x1FC930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC930u;
label_1fc930:
    // 0x1fc930: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1fc930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1fc934: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1fc934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1fc938: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc93c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC93Cu;
    SET_GPR_U32(ctx, 31, 0x1FC944u);
    ctx->pc = 0x1FC940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC93Cu;
    // 0x1fc940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC93Cu, 0x1FC944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC944u;
label_1fc944:
    // 0x1fc944: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fc944u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fc948u;
}
