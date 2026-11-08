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

// Function: entry_0015123c
// Address: 0x15123c - 0x151254
void entry_0015123c_0x15123c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015123c_0x15123c");
#endif

    ctx->pc = 0x15123cu;

    // 0x15123c: 0x0  nop
    ctx->pc = 0x15123cu;
    // NOP
    // 0x151240: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x151240u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x151244: 0x0  nop
    ctx->pc = 0x151244u;
    // NOP
    // 0x151248: 0x0  nop
    ctx->pc = 0x151248u;
    // NOP
    // 0x15124c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15124Cu;
    {
        const bool branch_taken_0x15124c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15124c) {
            ctx->pc = 0x151238u;
            return;
        }
    }
    ctx->pc = 0x151254u;
}
