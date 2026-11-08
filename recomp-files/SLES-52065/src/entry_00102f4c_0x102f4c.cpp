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

// Function: entry_00102f4c
// Address: 0x102f4c - 0x102f5c
void entry_00102f4c_0x102f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f4c_0x102f4c");
#endif

    ctx->pc = 0x102f4cu;

    // 0x102f4c: 0x0  nop
    ctx->pc = 0x102f4cu;
    // NOP
    // 0x102f50: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x102f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x102f54: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x102F54u;
    {
        const bool branch_taken_0x102f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102f54) {
            ctx->pc = 0x102F14u;
            return;
        }
    }
    ctx->pc = 0x102F5Cu;
}
