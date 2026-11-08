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

// Function: entry_00138740
// Address: 0x138740 - 0x138748
void entry_00138740_0x138740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138740_0x138740");
#endif

    ctx->pc = 0x138740u;

    // 0x138740: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x138740u;
    {
        const bool branch_taken_0x138740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138740u;
        // 0x138744: 0x62f023  subu        $fp, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138740) {
            ctx->pc = 0x138774u;
            return;
        }
    }
    ctx->pc = 0x138748u;
}
