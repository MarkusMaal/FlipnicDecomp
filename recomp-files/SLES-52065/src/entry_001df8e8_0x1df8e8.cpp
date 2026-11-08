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

// Function: entry_001df8e8
// Address: 0x1df8e8 - 0x1df8f8
void entry_001df8e8_0x1df8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df8e8_0x1df8e8");
#endif

    ctx->pc = 0x1df8e8u;

    // 0x1df8e8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df8ec: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1DF8ECu;
    {
        const bool branch_taken_0x1df8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8ECu;
        // 0x1df8f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8ec) {
            ctx->pc = 0x1DF9F0u;
            return;
        }
    }
    ctx->pc = 0x1DF8F4u;
    // 0x1df8f4: 0x0  nop
    ctx->pc = 0x1df8f4u;
    // NOP
    ctx->pc = 0x1df8f8u;
}
