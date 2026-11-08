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

// Function: entry_001df9d8
// Address: 0x1df9d8 - 0x1df9e8
void entry_001df9d8_0x1df9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df9d8_0x1df9d8");
#endif

    ctx->pc = 0x1df9d8u;

    // 0x1df9d8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df9dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF9DCu;
    {
        const bool branch_taken_0x1df9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9DCu;
        // 0x1df9e0: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9dc) {
            ctx->pc = 0x1DF9F0u;
            return;
        }
    }
    ctx->pc = 0x1DF9E4u;
    // 0x1df9e4: 0x0  nop
    ctx->pc = 0x1df9e4u;
    // NOP
    ctx->pc = 0x1df9e8u;
}
