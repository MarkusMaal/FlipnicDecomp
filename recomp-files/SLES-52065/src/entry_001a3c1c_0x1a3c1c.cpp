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

// Function: entry_001a3c1c
// Address: 0x1a3c1c - 0x1a3c58
void entry_001a3c1c_0x1a3c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3c1c_0x1a3c1c");
#endif

    ctx->pc = 0x1a3c1cu;

    // 0x1a3c1c: 0x8e24067c  lw          $a0, 0x67C($s1)
    ctx->pc = 0x1a3c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
    // 0x1a3c20: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a3c20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a3c24: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A3C24u;
    {
        const bool branch_taken_0x1a3c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c24) {
            ctx->pc = 0x1A3C84u;
            return;
        }
    }
    ctx->pc = 0x1A3C2Cu;
    // 0x1a3c2c: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x1a3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x1a3c30: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1a3c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a3c34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3C34u;
    {
        const bool branch_taken_0x1a3c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c34) {
            ctx->pc = 0x1A3C58u;
            return;
        }
    }
    ctx->pc = 0x1A3C3Cu;
    // 0x1a3c3c: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x1a3c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c44: 0x8e270680  lw          $a3, 0x680($s1)
    ctx->pc = 0x1a3c44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
    // 0x1a3c48: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1a3c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a3c4c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a3c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a3c50: 0xc064f7c  jal         func_193DF0
    ctx->pc = 0x1A3C50u;
    SET_GPR_U32(ctx, 31, 0x1A3C58u);
    ctx->pc = 0x1A3C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C50u;
    // 0x1a3c54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1A3C50u, 0x1A3C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C58u;
}
