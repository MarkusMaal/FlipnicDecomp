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

// Function: entry_001462e8
// Address: 0x1462e8 - 0x146300
void entry_001462e8_0x1462e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001462e8_0x1462e8");
#endif

    ctx->pc = 0x1462e8u;

    // 0x1462e8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1462e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1462ec: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1462ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1462f0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1462F0u;
    {
        const bool branch_taken_0x1462f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1462F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462F0u;
        // 0x1462f4: 0x29083  sra         $s2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462f0) {
            ctx->pc = 0x146300u;
            return;
        }
    }
    ctx->pc = 0x1462F8u;
    // 0x1462f8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1462f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1462fc: 0x29083  sra         $s2, $v0, 2
    ctx->pc = 0x1462fcu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x146300u;
}
