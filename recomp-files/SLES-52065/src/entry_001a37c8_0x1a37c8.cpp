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

// Function: entry_001a37c8
// Address: 0x1a37c8 - 0x1a37d4
void entry_001a37c8_0x1a37c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a37c8_0x1a37c8");
#endif

    ctx->pc = 0x1a37c8u;

    // 0x1a37c8: 0x1aa182a  slt         $v1, $t5, $t2
    ctx->pc = 0x1a37c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1a37cc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A37CCu;
    {
        const bool branch_taken_0x1a37cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37CCu;
        // 0x1a37d0: 0x2251821  addu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37cc) {
            ctx->pc = 0x1A37A8u;
            return;
        }
    }
    ctx->pc = 0x1A37D4u;
}
