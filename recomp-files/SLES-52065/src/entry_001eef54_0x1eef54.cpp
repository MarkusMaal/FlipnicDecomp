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

// Function: entry_001eef54
// Address: 0x1eef54 - 0x1eef60
void entry_001eef54_0x1eef54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eef54_0x1eef54");
#endif

    ctx->pc = 0x1eef54u;

    // 0x1eef54: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1eef54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1eef58: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EEF58u;
    {
        const bool branch_taken_0x1eef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef58) {
            ctx->pc = 0x1EEF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEF58u;
            // 0x1eef5c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEF38u;
            return;
        }
    }
    ctx->pc = 0x1EEF60u;
}
