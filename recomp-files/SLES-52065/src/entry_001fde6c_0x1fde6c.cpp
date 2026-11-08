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

// Function: entry_001fde6c
// Address: 0x1fde6c - 0x1fde8c
void entry_001fde6c_0x1fde6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fde6c_0x1fde6c");
#endif

    ctx->pc = 0x1fde6cu;

    // 0x1fde6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDE6Cu;
    {
        const bool branch_taken_0x1fde6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE6Cu;
        // 0x1fde70: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde6c) {
            ctx->pc = 0x1FDE90u;
            return;
        }
    }
    ctx->pc = 0x1FDE74u;
    // 0x1fde74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fde74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fde78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDE78u;
    {
        const bool branch_taken_0x1fde78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fde78) {
            ctx->pc = 0x1FDE90u;
            return;
        }
    }
    ctx->pc = 0x1FDE80u;
    // 0x1fde80: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1fde80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fde84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDE84u;
    {
        const bool branch_taken_0x1fde84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE84u;
        // 0x1fde88: 0x242902d  daddu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde84) {
            ctx->pc = 0x1FDE90u;
            return;
        }
    }
    ctx->pc = 0x1FDE8Cu;
}
