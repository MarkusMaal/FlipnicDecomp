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

// Function: entry_00127c64
// Address: 0x127c64 - 0x127c74
void entry_00127c64_0x127c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127c64_0x127c64");
#endif

    ctx->pc = 0x127c64u;

    // 0x127c64: 0x0  nop
    ctx->pc = 0x127c64u;
    // NOP
    // 0x127c68: 0xc8182b  sltu        $v1, $a2, $t0
    ctx->pc = 0x127c68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x127c6c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x127C6Cu;
    {
        const bool branch_taken_0x127c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x127c6c) {
            ctx->pc = 0x127C48u;
            return;
        }
    }
    ctx->pc = 0x127C74u;
}
