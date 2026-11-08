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

// Function: entry_00160b7c
// Address: 0x160b7c - 0x160b8c
void entry_00160b7c_0x160b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b7c_0x160b7c");
#endif

    ctx->pc = 0x160b7cu;

    // 0x160b7c: 0x0  nop
    ctx->pc = 0x160b7cu;
    // NOP
    // 0x160b80: 0x94082a  slt         $at, $a0, $s4
    ctx->pc = 0x160b80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160b84: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x160B84u;
    {
        const bool branch_taken_0x160b84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x160b84) {
            ctx->pc = 0x160BA8u;
            return;
        }
    }
    ctx->pc = 0x160B8Cu;
}
