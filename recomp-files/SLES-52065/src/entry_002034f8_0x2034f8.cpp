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

// Function: entry_002034f8
// Address: 0x2034f8 - 0x203538
void entry_002034f8_0x2034f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002034f8_0x2034f8");
#endif

    switch (ctx->pc) {
        case 0x203508u: goto label_203508;
        case 0x20351cu: goto label_20351c;
        default: break;
    }

    ctx->pc = 0x2034f8u;

    // 0x2034f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2034f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2034fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2034fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203500: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x203500u;
    SET_GPR_U32(ctx, 31, 0x203508u);
    ctx->pc = 0x203504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203500u;
    // 0x203504: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x203500u, 0x203508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203508u;
label_203508:
    // 0x203508: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x203508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20350c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20350cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203510: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x203510u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203514: 0xc081daa  jal         func_2076A8
    ctx->pc = 0x203514u;
    SET_GPR_U32(ctx, 31, 0x20351Cu);
    ctx->pc = 0x203518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203514u;
    // 0x203518: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076A8u, 0x203514u, 0x20351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20351Cu;
label_20351c:
    // 0x20351c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x20351cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x203520: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x203520u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x203524: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x203524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203528: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x203528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x20352c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x20352Cu;
    {
        const bool branch_taken_0x20352c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20352Cu;
        // 0x203530: 0x24574dd1  addiu       $s7, $v0, 0x4DD1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20352c) {
            ctx->pc = 0x203584u;
            return;
        }
    }
    ctx->pc = 0x203534u;
    // 0x203534: 0x0  nop
    ctx->pc = 0x203534u;
    // NOP
    ctx->pc = 0x203538u;
}
