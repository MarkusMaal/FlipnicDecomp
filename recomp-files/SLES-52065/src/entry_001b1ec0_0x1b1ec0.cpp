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

// Function: entry_001b1ec0
// Address: 0x1b1ec0 - 0x1b1ee4
void entry_001b1ec0_0x1b1ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1ec0_0x1b1ec0");
#endif

    ctx->pc = 0x1b1ec0u;

    // 0x1b1ec0: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1b1ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b1ec4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b1ec8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b1ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1ecc: 0x2643fec0  addiu       $v1, $s2, -0x140
    ctx->pc = 0x1b1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966976));
    // 0x1b1ed0: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1b1ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1ed4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1ED4u;
    {
        const bool branch_taken_0x1b1ed4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ED4u;
        // 0x1b1ed8: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ed4) {
            ctx->pc = 0x1B1EE4u;
            return;
        }
    }
    ctx->pc = 0x1B1EDCu;
    // 0x1b1edc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b1ee0: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1b1ee0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1b1ee4u;
}
