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

// Function: entry_002277d0
// Address: 0x2277d0 - 0x2277e0
void entry_002277d0_0x2277d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002277d0_0x2277d0");
#endif

    ctx->pc = 0x2277d0u;

    // 0x2277d0: 0x8383878c  lb          $v1, -0x7874($gp)
    ctx->pc = 0x2277d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936460)));
    // 0x2277d4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2277D4u;
    {
        const bool branch_taken_0x2277d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2277D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277D4u;
        // 0x2277d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2277d4) {
            ctx->pc = 0x2277E0u;
            return;
        }
    }
    ctx->pc = 0x2277DCu;
    // 0x2277dc: 0xa383878c  sb          $v1, -0x7874($gp)
    ctx->pc = 0x2277dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936460), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2277e0u;
}
