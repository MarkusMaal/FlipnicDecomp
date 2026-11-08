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

// Function: entry_001ccccc
// Address: 0x1ccccc - 0x1cccd8
void entry_001ccccc_0x1ccccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccccc_0x1ccccc");
#endif

    ctx->pc = 0x1cccccu;

    // 0x1ccccc: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCCCCu;
    {
        const bool branch_taken_0x1ccccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccccc) {
            ctx->pc = 0x1CCCD8u;
            return;
        }
    }
    ctx->pc = 0x1CCCD4u;
    // 0x1cccd4: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1cccd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1cccd8u;
}
