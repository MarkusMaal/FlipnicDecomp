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

// Function: entry_001f87b8
// Address: 0x1f87b8 - 0x1f87e0
void entry_001f87b8_0x1f87b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f87b8_0x1f87b8");
#endif

    ctx->pc = 0x1f87b8u;

    // 0x1f87b8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1f87b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1f87bc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1f87bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1f87c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f87c4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F87C4u;
    {
        const bool branch_taken_0x1f87c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f87c4) {
            ctx->pc = 0x1F87C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F87C4u;
            // 0x1f87c8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8804u;
            return;
        }
    }
    ctx->pc = 0x1F87CCu;
    // 0x1f87cc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1f87ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f87d0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F87D0u;
    {
        const bool branch_taken_0x1f87d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87D0u;
        // 0x1f87d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f87d0) {
            ctx->pc = 0x1F8800u;
            return;
        }
    }
    ctx->pc = 0x1F87D8u;
    // 0x1f87d8: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x1f87d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1f87dc: 0x0  nop
    ctx->pc = 0x1f87dcu;
    // NOP
    ctx->pc = 0x1f87e0u;
}
