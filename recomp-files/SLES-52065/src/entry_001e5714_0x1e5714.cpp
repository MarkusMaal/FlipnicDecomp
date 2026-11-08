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

// Function: entry_001e5714
// Address: 0x1e5714 - 0x1e572c
void entry_001e5714_0x1e5714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5714_0x1e5714");
#endif

    ctx->pc = 0x1e5714u;

    // 0x1e5714: 0x0  nop
    ctx->pc = 0x1e5714u;
    // NOP
    // 0x1e5718: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e571c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E571Cu;
    {
        const bool branch_taken_0x1e571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e571c) {
            ctx->pc = 0x1E572Cu;
            return;
        }
    }
    ctx->pc = 0x1E5724u;
    // 0x1e5724: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E5724u;
    {
        const bool branch_taken_0x1e5724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5724u;
        // 0x1e5728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5724) {
            ctx->pc = 0x1E5750u;
            return;
        }
    }
    ctx->pc = 0x1E572Cu;
}
