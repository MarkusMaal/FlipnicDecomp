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

// Function: entry_00144324
// Address: 0x144324 - 0x144334
void entry_00144324_0x144324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144324_0x144324");
#endif

    ctx->pc = 0x144324u;

    // 0x144324: 0x0  nop
    ctx->pc = 0x144324u;
    // NOP
    // 0x144328: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x144328u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14432c: 0x1420fff8  bnez        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14432Cu;
    {
        const bool branch_taken_0x14432c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14432c) {
            ctx->pc = 0x144310u;
            return;
        }
    }
    ctx->pc = 0x144334u;
}
