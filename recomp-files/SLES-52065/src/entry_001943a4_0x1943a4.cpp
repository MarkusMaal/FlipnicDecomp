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

// Function: entry_001943a4
// Address: 0x1943a4 - 0x1943ac
void entry_001943a4_0x1943a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001943a4_0x1943a4");
#endif

    ctx->pc = 0x1943a4u;

    // 0x1943a4: 0x10000673  b           . + 4 + (0x673 << 2)
    ctx->pc = 0x1943A4u;
    {
        const bool branch_taken_0x1943a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943A4u;
        // 0x1943a8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943a4) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x1943ACu;
}
