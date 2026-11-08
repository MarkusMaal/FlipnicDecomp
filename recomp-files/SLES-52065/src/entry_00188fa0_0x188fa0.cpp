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

// Function: entry_00188fa0
// Address: 0x188fa0 - 0x188fac
void entry_00188fa0_0x188fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188fa0_0x188fa0");
#endif

    ctx->pc = 0x188fa0u;

    // 0x188fa0: 0xd0082a  slt         $at, $a2, $s0
    ctx->pc = 0x188fa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x188fa4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x188FA4u;
    {
        const bool branch_taken_0x188fa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188fa4) {
            ctx->pc = 0x188FC8u;
            return;
        }
    }
    ctx->pc = 0x188FACu;
}
