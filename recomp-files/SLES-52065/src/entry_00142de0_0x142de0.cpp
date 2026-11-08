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

// Function: entry_00142de0
// Address: 0x142de0 - 0x142dec
void entry_00142de0_0x142de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142de0_0x142de0");
#endif

    ctx->pc = 0x142de0u;

    // 0x142de0: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x142DE0u;
    {
        const bool branch_taken_0x142de0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x142de0) {
            ctx->pc = 0x142DECu;
            return;
        }
    }
    ctx->pc = 0x142DE8u;
    // 0x142de8: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x142de8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x142decu;
}
