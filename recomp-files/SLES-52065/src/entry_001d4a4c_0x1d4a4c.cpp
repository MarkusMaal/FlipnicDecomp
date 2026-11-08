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

// Function: entry_001d4a4c
// Address: 0x1d4a4c - 0x1d4a84
void entry_001d4a4c_0x1d4a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4a4c_0x1d4a4c");
#endif

    ctx->pc = 0x1d4a4cu;

    // 0x1d4a4c: 0x642001b  bltzl       $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D4A4Cu;
    {
        const bool branch_taken_0x1d4a4c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1d4a4c) {
            ctx->pc = 0x1D4A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4A4Cu;
            // 0x1d4a50: 0x8e0202d4  lw          $v0, 0x2D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4ABCu;
            return;
        }
    }
    ctx->pc = 0x1D4A54u;
    // 0x1d4a54: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1d4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d4a58: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D4A58u;
    {
        const bool branch_taken_0x1d4a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A58u;
        // 0x1d4a5c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a58) {
            ctx->pc = 0x1D4AB0u;
            return;
        }
    }
    ctx->pc = 0x1D4A60u;
    // 0x1d4a60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d4a64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d4a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d4a68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4A68u;
    {
        const bool branch_taken_0x1d4a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A68u;
        // 0x1d4a6c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a68) {
            ctx->pc = 0x1D4A84u;
            return;
        }
    }
    ctx->pc = 0x1D4A70u;
    // 0x1d4a70: 0x8e060240  lw          $a2, 0x240($s0)
    ctx->pc = 0x1d4a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1d4a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d4a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4a7c: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D4A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D4A84u);
    ctx->pc = 0x1D4A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A7Cu;
    // 0x1d4a80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D4A7Cu, 0x1D4A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A84u;
}
