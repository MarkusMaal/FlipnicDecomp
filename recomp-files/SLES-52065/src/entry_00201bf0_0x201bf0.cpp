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

// Function: entry_00201bf0
// Address: 0x201bf0 - 0x201bf8
void entry_00201bf0_0x201bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201bf0_0x201bf0");
#endif

    ctx->pc = 0x201bf0u;

    // 0x201bf0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x201BF0u;
    {
        const bool branch_taken_0x201bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BF0u;
        // 0x201bf4: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bf0) {
            ctx->pc = 0x201BD0u;
            return;
        }
    }
    ctx->pc = 0x201BF8u;
}
