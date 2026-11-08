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

// Function: entry_001f370c
// Address: 0x1f370c - 0x1f3714
void entry_001f370c_0x1f370c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f370c_0x1f370c");
#endif

    ctx->pc = 0x1f370cu;

    // 0x1f370c: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F370Cu;
    {
        const bool branch_taken_0x1f370c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f370c) {
            ctx->pc = 0x1F3710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F370Cu;
            // 0x1f3710: 0x8e22fb80  lw          $v0, -0x480($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3720u;
            return;
        }
    }
    ctx->pc = 0x1F3714u;
}
