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

// Function: entry_0015b8e8
// Address: 0x15b8e8 - 0x15b904
void entry_0015b8e8_0x15b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b8e8_0x15b8e8");
#endif

    ctx->pc = 0x15b8e8u;

    // 0x15b8e8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x15b8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b8ec: 0x82030024  lb          $v1, 0x24($s0)
    ctx->pc = 0x15b8ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x15b8f0: 0xa6230214  sh          $v1, 0x214($s1)
    ctx->pc = 0x15b8f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 532), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b8f4: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x15b8f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x15b8f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B8F8u;
    {
        const bool branch_taken_0x15b8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8F8u;
        // 0x15b8fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b8f8) {
            ctx->pc = 0x15B904u;
            return;
        }
    }
    ctx->pc = 0x15B900u;
    // 0x15b900: 0xa6230214  sh          $v1, 0x214($s1)
    ctx->pc = 0x15b900u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 532), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15b904u;
}
