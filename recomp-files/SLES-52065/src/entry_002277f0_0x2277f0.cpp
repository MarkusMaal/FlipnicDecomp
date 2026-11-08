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

// Function: entry_002277f0
// Address: 0x2277f0 - 0x227800
void entry_002277f0_0x2277f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002277f0_0x2277f0");
#endif

    ctx->pc = 0x2277f0u;

    // 0x2277f0: 0x83838794  lb          $v1, -0x786C($gp)
    ctx->pc = 0x2277f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936468)));
    // 0x2277f4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2277F4u;
    {
        const bool branch_taken_0x2277f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2277F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277F4u;
        // 0x2277f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2277f4) {
            ctx->pc = 0x227800u;
            return;
        }
    }
    ctx->pc = 0x2277FCu;
    // 0x2277fc: 0xa3838794  sb          $v1, -0x786C($gp)
    ctx->pc = 0x2277fcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936468), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x227800u;
}
