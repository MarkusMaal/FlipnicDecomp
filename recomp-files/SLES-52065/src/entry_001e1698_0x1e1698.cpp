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

// Function: entry_001e1698
// Address: 0x1e1698 - 0x1e16a8
void entry_001e1698_0x1e1698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1698_0x1e1698");
#endif

    ctx->pc = 0x1e1698u;

    // 0x1e1698: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e1698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e169c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E169Cu;
    {
        const bool branch_taken_0x1e169c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E169Cu;
        // 0x1e16a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e169c) {
            ctx->pc = 0x1E16A8u;
            return;
        }
    }
    ctx->pc = 0x1E16A4u;
    // 0x1e16a4: 0xa203003a  sb          $v1, 0x3A($s0)
    ctx->pc = 0x1e16a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1e16a8u;
}
