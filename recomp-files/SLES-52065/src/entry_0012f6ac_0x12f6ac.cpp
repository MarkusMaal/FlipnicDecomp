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

// Function: entry_0012f6ac
// Address: 0x12f6ac - 0x12f6bc
void entry_0012f6ac_0x12f6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f6ac_0x12f6ac");
#endif

    ctx->pc = 0x12f6acu;

    // 0x12f6ac: 0x0  nop
    ctx->pc = 0x12f6acu;
    // NOP
    // 0x12f6b0: 0x296082a  slt         $at, $s4, $s6
    ctx->pc = 0x12f6b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x12f6b4: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x12F6B4u;
    {
        const bool branch_taken_0x12f6b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f6b4) {
            ctx->pc = 0x12F6FCu;
            return;
        }
    }
    ctx->pc = 0x12F6BCu;
}
