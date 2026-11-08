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

// Function: entry_0011b818
// Address: 0x11b818 - 0x11b824
void entry_0011b818_0x11b818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b818_0x11b818");
#endif

    ctx->pc = 0x11b818u;

    // 0x11b818: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x11b818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b81c: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x11B81Cu;
    {
        const bool branch_taken_0x11b81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B81Cu;
        // 0x11b820: 0x8e310038  lw          $s1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b81c) {
            ctx->pc = 0x11B78Cu;
            return;
        }
    }
    ctx->pc = 0x11B824u;
}
