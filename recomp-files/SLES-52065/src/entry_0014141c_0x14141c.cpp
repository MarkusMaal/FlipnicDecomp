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

// Function: entry_0014141c
// Address: 0x14141c - 0x141438
void entry_0014141c_0x14141c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014141c_0x14141c");
#endif

    ctx->pc = 0x14141cu;

label_14141c:
    // 0x14141c: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x14141cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x141420: 0x276082b  sltu        $at, $s3, $s6
    ctx->pc = 0x141420u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x141424: 0x0  nop
    ctx->pc = 0x141424u;
    // NOP
    // 0x141428: 0x0  nop
    ctx->pc = 0x141428u;
    // NOP
    // 0x14142c: 0x0  nop
    ctx->pc = 0x14142cu;
    // NOP
    // 0x141430: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141430u;
    {
        const bool branch_taken_0x141430 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x141430) {
            ctx->pc = 0x14141Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14141c;
        }
    }
    ctx->pc = 0x141438u;
}
