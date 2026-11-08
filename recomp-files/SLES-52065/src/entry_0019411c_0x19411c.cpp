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

// Function: entry_0019411c
// Address: 0x19411c - 0x19412c
void entry_0019411c_0x19411c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019411c_0x19411c");
#endif

    ctx->pc = 0x19411cu;

    // 0x19411c: 0x0  nop
    ctx->pc = 0x19411cu;
    // NOP
    // 0x194120: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x194120u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x194124: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x194124u;
    {
        const bool branch_taken_0x194124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194124) {
            ctx->pc = 0x1940D0u;
            return;
        }
    }
    ctx->pc = 0x19412Cu;
}
