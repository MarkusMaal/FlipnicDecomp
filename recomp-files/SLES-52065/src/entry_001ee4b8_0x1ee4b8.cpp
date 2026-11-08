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

// Function: entry_001ee4b8
// Address: 0x1ee4b8 - 0x1ee4c8
void entry_001ee4b8_0x1ee4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee4b8_0x1ee4b8");
#endif

    ctx->pc = 0x1ee4b8u;

    // 0x1ee4b8: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1EE4B8u;
    {
        const bool branch_taken_0x1ee4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4b8) {
            ctx->pc = 0x1EE4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE4B8u;
            // 0x1ee4bc: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE4E4u;
            return;
        }
    }
    ctx->pc = 0x1EE4C0u;
    // 0x1ee4c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ee4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee4c4: 0x0  nop
    ctx->pc = 0x1ee4c4u;
    // NOP
    ctx->pc = 0x1ee4c8u;
}
