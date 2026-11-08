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

// Function: entry_0019632c
// Address: 0x19632c - 0x196344
void entry_0019632c_0x19632c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019632c_0x19632c");
#endif

    ctx->pc = 0x19632cu;

    // 0x19632c: 0x8e620670  lw          $v0, 0x670($s3)
    ctx->pc = 0x19632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1648)));
    // 0x196330: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x196330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x196334: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x196334u;
    {
        const bool branch_taken_0x196334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x196334) {
            ctx->pc = 0x196348u;
            return;
        }
    }
    ctx->pc = 0x19633Cu;
    // 0x19633c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19633Cu;
    {
        const bool branch_taken_0x19633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19633Cu;
        // 0x196340: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19633c) {
            ctx->pc = 0x196348u;
            return;
        }
    }
    ctx->pc = 0x196344u;
}
