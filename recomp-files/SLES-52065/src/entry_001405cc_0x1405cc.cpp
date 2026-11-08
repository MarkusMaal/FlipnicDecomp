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

// Function: entry_001405cc
// Address: 0x1405cc - 0x1405e4
void entry_001405cc_0x1405cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001405cc_0x1405cc");
#endif

    ctx->pc = 0x1405ccu;

    // 0x1405cc: 0x0  nop
    ctx->pc = 0x1405ccu;
    // NOP
    // 0x1405d0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x1405d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1405d4: 0x0  nop
    ctx->pc = 0x1405d4u;
    // NOP
    // 0x1405d8: 0x0  nop
    ctx->pc = 0x1405d8u;
    // NOP
    // 0x1405dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1405DCu;
    {
        const bool branch_taken_0x1405dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1405dc) {
            ctx->pc = 0x1405C8u;
            return;
        }
    }
    ctx->pc = 0x1405E4u;
}
