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

// Function: entry_001600fc
// Address: 0x1600fc - 0x160114
void entry_001600fc_0x1600fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001600fc_0x1600fc");
#endif

    ctx->pc = 0x1600fcu;

    // 0x1600fc: 0x0  nop
    ctx->pc = 0x1600fcu;
    // NOP
    // 0x160100: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x160100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x160104: 0x8083002c  lb          $v1, 0x2C($a0)
    ctx->pc = 0x160104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x160108: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x160108u;
    {
        const bool branch_taken_0x160108 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x16010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160108u;
        // 0x16010c: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160108) {
            ctx->pc = 0x160114u;
            return;
        }
    }
    ctx->pc = 0x160110u;
    // 0x160110: 0xa083002c  sb          $v1, 0x2C($a0)
    ctx->pc = 0x160110u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x160114u;
}
