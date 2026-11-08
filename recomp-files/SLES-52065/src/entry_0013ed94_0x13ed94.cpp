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

// Function: entry_0013ed94
// Address: 0x13ed94 - 0x13eda8
void entry_0013ed94_0x13ed94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ed94_0x13ed94");
#endif

    ctx->pc = 0x13ed94u;

    // 0x13ed94: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x13ed94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x13ed98: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13ED98u;
    {
        const bool branch_taken_0x13ed98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED98u;
        // 0x13ed9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed98) {
            ctx->pc = 0x13EDA8u;
            return;
        }
    }
    ctx->pc = 0x13EDA0u;
    // 0x13eda0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x13EDA0u;
    {
        const bool branch_taken_0x13eda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eda0) {
            ctx->pc = 0x13EDF8u;
            return;
        }
    }
    ctx->pc = 0x13EDA8u;
}
