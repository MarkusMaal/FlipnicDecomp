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

// Function: entry_0017e7a0
// Address: 0x17e7a0 - 0x17e7b8
void entry_0017e7a0_0x17e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e7a0_0x17e7a0");
#endif

    ctx->pc = 0x17e7a0u;

    // 0x17e7a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17e7a4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E7A4u;
    {
        const bool branch_taken_0x17e7a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7A4u;
        // 0x17e7a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7a4) {
            ctx->pc = 0x17E7B8u;
            return;
        }
    }
    ctx->pc = 0x17E7ACu;
    // 0x17e7ac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17e7b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17E7B0u;
    {
        const bool branch_taken_0x17e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7B0u;
        // 0x17e7b4: 0x2442f8c8  addiu       $v0, $v0, -0x738 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7b0) {
            ctx->pc = 0x17E7E8u;
            return;
        }
    }
    ctx->pc = 0x17E7B8u;
}
