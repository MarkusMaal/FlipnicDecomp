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

// Function: entry_0015bab0
// Address: 0x15bab0 - 0x15babc
void entry_0015bab0_0x15bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bab0_0x15bab0");
#endif

    ctx->pc = 0x15bab0u;

    // 0x15bab0: 0x18800002  blez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15BAB0u;
    {
        const bool branch_taken_0x15bab0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x15BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAB0u;
        // 0x15bab4: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bab0) {
            ctx->pc = 0x15BABCu;
            return;
        }
    }
    ctx->pc = 0x15BAB8u;
    // 0x15bab8: 0xa6030218  sh          $v1, 0x218($s0)
    ctx->pc = 0x15bab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 536), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15babcu;
}
