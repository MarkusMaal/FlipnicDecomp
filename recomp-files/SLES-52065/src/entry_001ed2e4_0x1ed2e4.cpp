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

// Function: entry_001ed2e4
// Address: 0x1ed2e4 - 0x1ed2f8
void entry_001ed2e4_0x1ed2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed2e4_0x1ed2e4");
#endif

    ctx->pc = 0x1ed2e4u;

    // 0x1ed2e4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ed2e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ed2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ed2ec: 0x11893a  dsrl        $s1, $s1, 4
    ctx->pc = 0x1ed2ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 4);
    // 0x1ed2f0: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1ED2F0u;
    {
        const bool branch_taken_0x1ed2f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2F0u;
        // 0x1ed2f4: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2f0) {
            ctx->pc = 0x1ED2D0u;
            return;
        }
    }
    ctx->pc = 0x1ED2F8u;
}
