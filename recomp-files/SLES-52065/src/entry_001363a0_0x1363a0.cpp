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

// Function: entry_001363a0
// Address: 0x1363a0 - 0x1363ac
void entry_001363a0_0x1363a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001363a0_0x1363a0");
#endif

    ctx->pc = 0x1363a0u;

    // 0x1363a0: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1363A0u;
    {
        const bool branch_taken_0x1363a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1363A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363A0u;
        // 0x1363a4: 0x3c023fff  lui         $v0, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363a0) {
            ctx->pc = 0x1363DCu;
            return;
        }
    }
    ctx->pc = 0x1363A8u;
    // 0x1363a8: 0x3c011fff  lui         $at, 0x1FFF
    ctx->pc = 0x1363a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8191 << 16));
    ctx->pc = 0x1363acu;
}
