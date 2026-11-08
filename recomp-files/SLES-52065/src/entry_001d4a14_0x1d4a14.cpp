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

// Function: entry_001d4a14
// Address: 0x1d4a14 - 0x1d4a4c
void entry_001d4a14_0x1d4a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4a14_0x1d4a14");
#endif

    ctx->pc = 0x1d4a14u;

    // 0x1d4a14: 0x8e040248  lw          $a0, 0x248($s0)
    ctx->pc = 0x1d4a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x1d4a18: 0x8e020244  lw          $v0, 0x244($s0)
    ctx->pc = 0x1d4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x1d4a1c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1d4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d4a20: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x1d4a20u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4a24: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1d4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d4a28: 0x2a430000  slti        $v1, $s2, 0x0
    ctx->pc = 0x1d4a28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d4a2c: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x1d4a2cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1d4a30: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4A30u;
    {
        const bool branch_taken_0x1d4a30 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1D4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A30u;
        // 0x1d4a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a30) {
            ctx->pc = 0x1D4A4Cu;
            return;
        }
    }
    ctx->pc = 0x1D4A38u;
    // 0x1d4a38: 0x8e060230  lw          $a2, 0x230($s0)
    ctx->pc = 0x1d4a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1d4a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d4a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4a40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1d4a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a44: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D4A44u;
    SET_GPR_U32(ctx, 31, 0x1D4A4Cu);
    ctx->pc = 0x1D4A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A44u;
    // 0x1d4a48: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D4A44u, 0x1D4A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A4Cu;
}
