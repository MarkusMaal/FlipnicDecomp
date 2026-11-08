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

// Function: entry_001fe3a8
// Address: 0x1fe3a8 - 0x1fe3b0
void entry_001fe3a8_0x1fe3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe3a8_0x1fe3a8");
#endif

    ctx->pc = 0x1fe3a8u;

    // 0x1fe3a8: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1FE3A8u;
    {
        const bool branch_taken_0x1fe3a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3A8u;
        // 0x1fe3ac: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3a8) {
            ctx->pc = 0x1FE3D4u;
            return;
        }
    }
    ctx->pc = 0x1FE3B0u;
}
