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

// Function: entry_001eebe0
// Address: 0x1eebe0 - 0x1eebf8
void entry_001eebe0_0x1eebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eebe0_0x1eebe0");
#endif

    ctx->pc = 0x1eebe0u;

    // 0x1eebe0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EEBE0u;
    {
        const bool branch_taken_0x1eebe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eebe0) {
            ctx->pc = 0x1EEC18u;
            return;
        }
    }
    ctx->pc = 0x1EEBE8u;
    // 0x1eebe8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1eebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eebec: 0x50710009  beql        $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EEBECu;
    {
        const bool branch_taken_0x1eebec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1eebec) {
            ctx->pc = 0x1EEBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEBECu;
            // 0x1eebf0: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEC14u;
            return;
        }
    }
    ctx->pc = 0x1EEBF4u;
    // 0x1eebf4: 0x0  nop
    ctx->pc = 0x1eebf4u;
    // NOP
    ctx->pc = 0x1eebf8u;
}
