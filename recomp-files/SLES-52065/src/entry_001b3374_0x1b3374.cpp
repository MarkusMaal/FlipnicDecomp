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

// Function: entry_001b3374
// Address: 0x1b3374 - 0x1b3390
void entry_001b3374_0x1b3374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3374_0x1b3374");
#endif

    ctx->pc = 0x1b3374u;

    // 0x1b3374: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x1b3374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1b3378: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1b3378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1b337c: 0x68082a  slt         $at, $v1, $t0
    ctx->pc = 0x1b337cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b3380: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3380u;
    {
        const bool branch_taken_0x1b3380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3380) {
            ctx->pc = 0x1B3390u;
            return;
        }
    }
    ctx->pc = 0x1B3388u;
    // 0x1b3388: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1b3388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b338c: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x1b338cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b3390u;
}
