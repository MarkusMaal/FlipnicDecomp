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

// Function: entry_0010ba74
// Address: 0x10ba74 - 0x10ba84
void entry_0010ba74_0x10ba74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ba74_0x10ba74");
#endif

    ctx->pc = 0x10ba74u;

    // 0x10ba74: 0x0  nop
    ctx->pc = 0x10ba74u;
    // NOP
    // 0x10ba78: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x10ba78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10ba7c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x10BA7Cu;
    {
        const bool branch_taken_0x10ba7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ba7c) {
            ctx->pc = 0x10BA44u;
            return;
        }
    }
    ctx->pc = 0x10BA84u;
}
