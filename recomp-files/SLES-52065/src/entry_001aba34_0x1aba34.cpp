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

// Function: entry_001aba34
// Address: 0x1aba34 - 0x1aba3c
void entry_001aba34_0x1aba34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aba34_0x1aba34");
#endif

    ctx->pc = 0x1aba34u;

    // 0x1aba34: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1ABA34u;
    {
        const bool branch_taken_0x1aba34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA34u;
        // 0x1aba38: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba34) {
            ctx->pc = 0x1ABB7Cu;
            return;
        }
    }
    ctx->pc = 0x1ABA3Cu;
}
