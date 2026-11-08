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

// Function: entry_001df8f8
// Address: 0x1df8f8 - 0x1df908
void entry_001df8f8_0x1df8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df8f8_0x1df8f8");
#endif

    ctx->pc = 0x1df8f8u;

    // 0x1df8f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df8fc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1df8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1df900: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1DF900u;
    {
        const bool branch_taken_0x1df900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF900u;
        // 0x1df904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df900) {
            ctx->pc = 0x1DF9F0u;
            return;
        }
    }
    ctx->pc = 0x1DF908u;
}
