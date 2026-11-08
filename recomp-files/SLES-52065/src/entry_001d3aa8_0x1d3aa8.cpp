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

// Function: entry_001d3aa8
// Address: 0x1d3aa8 - 0x1d3acc
void entry_001d3aa8_0x1d3aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3aa8_0x1d3aa8");
#endif

    switch (ctx->pc) {
        case 0x1d3ab0u: goto label_1d3ab0;
        default: break;
    }

    ctx->pc = 0x1d3aa8u;

    // 0x1d3aa8: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x1D3AA8u;
    SET_GPR_U32(ctx, 31, 0x1D3AB0u);
    ctx->pc = 0x1D3AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AA8u;
    // 0x1d3aac: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x1D3AA8u, 0x1D3AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AB0u;
label_1d3ab0:
    // 0x1d3ab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d3ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ab4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1d3ab4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3ab8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1d3ab8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1d3abc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1d3abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d3ac0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1d3ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d3ac4: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x1d3ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d3ac8: 0xf08021  addu        $s0, $a3, $s0
    ctx->pc = 0x1d3ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    ctx->pc = 0x1d3accu;
}
