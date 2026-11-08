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

// Function: entry_0013c9a0
// Address: 0x13c9a0 - 0x13c9ac
void entry_0013c9a0_0x13c9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c9a0_0x13c9a0");
#endif

    ctx->pc = 0x13c9a0u;

    // 0x13c9a0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x13C9A0u;
    {
        const bool branch_taken_0x13c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c9a0) {
            ctx->pc = 0x13CB0Cu;
            return;
        }
    }
    ctx->pc = 0x13C9A8u;
    // 0x13c9a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x13c9acu;
}
