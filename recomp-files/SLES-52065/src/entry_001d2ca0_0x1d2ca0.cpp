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

// Function: entry_001d2ca0
// Address: 0x1d2ca0 - 0x1d2cc4
void entry_001d2ca0_0x1d2ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2ca0_0x1d2ca0");
#endif

    ctx->pc = 0x1d2ca0u;

    // 0x1d2ca0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d2ca4: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2CA4u;
    {
        const bool branch_taken_0x1d2ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d2ca4) {
            ctx->pc = 0x1D2CC4u;
            return;
        }
    }
    ctx->pc = 0x1D2CACu;
    // 0x1d2cac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2cb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2cb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2cb8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2cbc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D2CBCu;
    {
        const bool branch_taken_0x1d2cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CBCu;
        // 0x1d2cc0: 0xac660020  sw          $a2, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cbc) {
            ctx->pc = 0x1D2CECu;
            return;
        }
    }
    ctx->pc = 0x1D2CC4u;
}
