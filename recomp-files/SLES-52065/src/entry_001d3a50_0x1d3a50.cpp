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

// Function: entry_001d3a50
// Address: 0x1d3a50 - 0x1d3aa8
void entry_001d3a50_0x1d3a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3a50_0x1d3a50");
#endif

    switch (ctx->pc) {
        case 0x1d3a88u: goto label_1d3a88;
        default: break;
    }

    ctx->pc = 0x1d3a50u;

    // 0x1d3a50: 0x10a6004c  beq         $a1, $a2, . + 4 + (0x4C << 2)
    ctx->pc = 0x1D3A50u;
    {
        const bool branch_taken_0x1d3a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1D3A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A50u;
        // 0x1d3a54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a50) {
            ctx->pc = 0x1D3B84u;
            return;
        }
    }
    ctx->pc = 0x1D3A58u;
    // 0x1d3a58: 0x12a03c  dsll32      $s4, $s2, 0
    ctx->pc = 0x1d3a58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1d3a5c: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x1d3a5cu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x1d3a60: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1d3a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1d3a64: 0xae340010  sw          $s4, 0x10($s1)
    ctx->pc = 0x1d3a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
    // 0x1d3a68: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x1d3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1d3a6c: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1d3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1d3a70: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1d3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x1d3a74: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1d3a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3a78: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3A78u;
    {
        const bool branch_taken_0x1d3a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A78u;
        // 0x1d3a7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a78) {
            ctx->pc = 0x1D3AA8u;
            return;
        }
    }
    ctx->pc = 0x1D3A80u;
    // 0x1d3a80: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x1D3A80u;
    SET_GPR_U32(ctx, 31, 0x1D3A88u);
    ctx->pc = 0x1D3A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3A80u;
    // 0x1d3a84: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x1D3A80u, 0x1D3A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A88u;
label_1d3a88:
    // 0x1d3a88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d3a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d3a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3a90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d3a90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d3a94: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1d3a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d3a98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d3a9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D3A9Cu;
    {
        const bool branch_taken_0x1d3a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A9Cu;
        // 0x1d3aa0: 0x3a28021  addu        $s0, $sp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a9c) {
            ctx->pc = 0x1D3ACCu;
            return;
        }
    }
    ctx->pc = 0x1D3AA4u;
    // 0x1d3aa4: 0x0  nop
    ctx->pc = 0x1d3aa4u;
    // NOP
    ctx->pc = 0x1d3aa8u;
}
