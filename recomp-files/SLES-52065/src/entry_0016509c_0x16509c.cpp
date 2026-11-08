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

// Function: entry_0016509c
// Address: 0x16509c - 0x1650b0
void entry_0016509c_0x16509c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016509c_0x16509c");
#endif

    ctx->pc = 0x16509cu;

    // 0x16509c: 0x0  nop
    ctx->pc = 0x16509cu;
    // NOP
    // 0x1650a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1650a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1650a4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1650a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1650a8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1650A8u;
    {
        const bool branch_taken_0x1650a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650a8) {
            ctx->pc = 0x165170u;
            return;
        }
    }
    ctx->pc = 0x1650B0u;
}
