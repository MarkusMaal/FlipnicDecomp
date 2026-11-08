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

// Function: entry_0012f2b8
// Address: 0x12f2b8 - 0x12f2c4
void entry_0012f2b8_0x12f2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f2b8_0x12f2b8");
#endif

    ctx->pc = 0x12f2b8u;

    // 0x12f2b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f2bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12F2BCu;
    {
        const bool branch_taken_0x12f2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2BCu;
        // 0x12f2c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2bc) {
            ctx->pc = 0x12F318u;
            return;
        }
    }
    ctx->pc = 0x12F2C4u;
}
