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

// Function: entry_0020154c
// Address: 0x20154c - 0x20155c
void entry_0020154c_0x20154c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020154c_0x20154c");
#endif

    ctx->pc = 0x20154cu;

    // 0x20154c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20154Cu;
    {
        const bool branch_taken_0x20154c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20154Cu;
        // 0x201550: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20154c) {
            ctx->pc = 0x201564u;
            return;
        }
    }
    ctx->pc = 0x201554u;
    // 0x201554: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x201554u;
    {
        const bool branch_taken_0x201554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201554u;
        // 0x201558: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201554) {
            ctx->pc = 0x20156Cu;
            return;
        }
    }
    ctx->pc = 0x20155Cu;
}
