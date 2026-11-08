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

// Function: entry_0013cba0
// Address: 0x13cba0 - 0x13cbac
void entry_0013cba0_0x13cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cba0_0x13cba0");
#endif

    ctx->pc = 0x13cba0u;

    // 0x13cba0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13CBA0u;
    {
        const bool branch_taken_0x13cba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cba0) {
            ctx->pc = 0x13CBACu;
            return;
        }
    }
    ctx->pc = 0x13CBA8u;
    // 0x13cba8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13cba8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13cbacu;
}
