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

// Function: entry_001380d8
// Address: 0x1380d8 - 0x1380e8
void entry_001380d8_0x1380d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001380d8_0x1380d8");
#endif

    ctx->pc = 0x1380d8u;

    // 0x1380d8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1380d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1380dc: 0x8c55005c  lw          $s5, 0x5C($v0)
    ctx->pc = 0x1380dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1380e0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1380E0u;
    {
        const bool branch_taken_0x1380e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380E0u;
        // 0x1380e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380e0) {
            ctx->pc = 0x1381FCu;
            return;
        }
    }
    ctx->pc = 0x1380E8u;
}
