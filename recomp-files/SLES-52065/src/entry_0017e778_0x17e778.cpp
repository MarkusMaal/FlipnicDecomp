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

// Function: entry_0017e778
// Address: 0x17e778 - 0x17e790
void entry_0017e778_0x17e778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e778_0x17e778");
#endif

    ctx->pc = 0x17e778u;

    // 0x17e778: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e77c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E77Cu;
    {
        const bool branch_taken_0x17e77c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E77Cu;
        // 0x17e780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e77c) {
            ctx->pc = 0x17E790u;
            return;
        }
    }
    ctx->pc = 0x17E784u;
    // 0x17e784: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17e784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17e788: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E788u;
    {
        const bool branch_taken_0x17e788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E788u;
        // 0x17e78c: 0x2442f8c8  addiu       $v0, $v0, -0x738 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e788) {
            ctx->pc = 0x17E798u;
            return;
        }
    }
    ctx->pc = 0x17E790u;
}
