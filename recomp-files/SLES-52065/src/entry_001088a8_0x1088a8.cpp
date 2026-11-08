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

// Function: entry_001088a8
// Address: 0x1088a8 - 0x1088c4
void entry_001088a8_0x1088a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001088a8_0x1088a8");
#endif

    ctx->pc = 0x1088a8u;

    // 0x1088a8: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1088A8u;
    {
        const bool branch_taken_0x1088a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1088a8) {
            ctx->pc = 0x1089A4u;
            return;
        }
    }
    ctx->pc = 0x1088B0u;
    // 0x1088b0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1088B0u;
    {
        const bool branch_taken_0x1088b0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1088B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088B0u;
        // 0x1088b4: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088b0) {
            ctx->pc = 0x1088C4u;
            return;
        }
    }
    ctx->pc = 0x1088B8u;
    // 0x1088b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1088B8u;
    {
        const bool branch_taken_0x1088b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1088BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088B8u;
        // 0x1088bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088b8) {
            ctx->pc = 0x1088DCu;
            return;
        }
    }
    ctx->pc = 0x1088C0u;
    // 0x1088c0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1088c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x1088c4u;
}
