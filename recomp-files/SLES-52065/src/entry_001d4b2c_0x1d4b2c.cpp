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

// Function: entry_001d4b2c
// Address: 0x1d4b2c - 0x1d4b64
void entry_001d4b2c_0x1d4b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4b2c_0x1d4b2c");
#endif

    switch (ctx->pc) {
        case 0x1d4b40u: goto label_1d4b40;
        default: break;
    }

    ctx->pc = 0x1d4b2cu;

    // 0x1d4b2c: 0x8e060230  lw          $a2, 0x230($s0)
    ctx->pc = 0x1d4b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1d4b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b34: 0x8e070234  lw          $a3, 0x234($s0)
    ctx->pc = 0x1d4b34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x1d4b38: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D4B38u;
    SET_GPR_U32(ctx, 31, 0x1D4B40u);
    ctx->pc = 0x1D4B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B38u;
    // 0x1d4b3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D4B38u, 0x1D4B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B40u;
label_1d4b40:
    // 0x1d4b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b44: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d4b48: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d4b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d4b4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b50: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d4b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1d4b54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4B54u;
    {
        const bool branch_taken_0x1d4b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B54u;
        // 0x1d4b58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b54) {
            ctx->pc = 0x1D4B64u;
            return;
        }
    }
    ctx->pc = 0x1D4B5Cu;
    // 0x1d4b5c: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D4B5Cu;
    SET_GPR_U32(ctx, 31, 0x1D4B64u);
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D4B5Cu, 0x1D4B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B64u;
}
