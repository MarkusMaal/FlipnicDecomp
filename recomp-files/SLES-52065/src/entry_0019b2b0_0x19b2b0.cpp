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

// Function: entry_0019b2b0
// Address: 0x19b2b0 - 0x19b2d8
void entry_0019b2b0_0x19b2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b2b0_0x19b2b0");
#endif

    ctx->pc = 0x19b2b0u;

    // 0x19b2b0: 0x8e220700  lw          $v0, 0x700($s1)
    ctx->pc = 0x19b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x19b2b4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x19b2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19b2b8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x19B2B8u;
    {
        const bool branch_taken_0x19b2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2B8u;
        // 0x19b2bc: 0x2322021  addu        $a0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2b8) {
            ctx->pc = 0x19B248u;
            return;
        }
    }
    ctx->pc = 0x19B2C0u;
    // 0x19b2c0: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x19b2c4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B2C4u;
    {
        const bool branch_taken_0x19b2c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19b2c4) {
            ctx->pc = 0x19B2D8u;
            return;
        }
    }
    ctx->pc = 0x19B2CCu;
    // 0x19b2cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b2d0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x19B2D0u;
    {
        const bool branch_taken_0x19b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2D0u;
        // 0x19b2d4: 0xae220328  sw          $v0, 0x328($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2d0) {
            ctx->pc = 0x19B3C8u;
            return;
        }
    }
    ctx->pc = 0x19B2D8u;
}
