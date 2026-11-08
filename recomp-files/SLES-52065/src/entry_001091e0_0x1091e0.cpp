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

// Function: entry_001091e0
// Address: 0x1091e0 - 0x1091f8
void entry_001091e0_0x1091e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001091e0_0x1091e0");
#endif

    ctx->pc = 0x1091e0u;

    // 0x1091e0: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1091E0u;
    {
        const bool branch_taken_0x1091e0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1091E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091E0u;
        // 0x1091e4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091e0) {
            ctx->pc = 0x1091FCu;
            return;
        }
    }
    ctx->pc = 0x1091E8u;
    // 0x1091e8: 0x846201ec  lh          $v0, 0x1EC($v1)
    ctx->pc = 0x1091e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 492)));
    // 0x1091ec: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1091ECu;
    {
        const bool branch_taken_0x1091ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1091ec) {
            ctx->pc = 0x1091F8u;
            return;
        }
    }
    ctx->pc = 0x1091F4u;
    // 0x1091f4: 0xa46201ee  sh          $v0, 0x1EE($v1)
    ctx->pc = 0x1091f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 494), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1091f8u;
}
