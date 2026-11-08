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

// Function: entry_001b208c
// Address: 0x1b208c - 0x1b20b0
void entry_001b208c_0x1b208c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b208c_0x1b208c");
#endif

    ctx->pc = 0x1b208cu;

    // 0x1b208c: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1b208cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b2090: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1b2090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b2094: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b2094u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2098: 0x2643ffa0  addiu       $v1, $s2, -0x60
    ctx->pc = 0x1b2098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
    // 0x1b209c: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1b209cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b20a0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B20A0u;
    {
        const bool branch_taken_0x1b20a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20A0u;
        // 0x1b20a4: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20a0) {
            ctx->pc = 0x1B20B0u;
            return;
        }
    }
    ctx->pc = 0x1B20A8u;
    // 0x1b20a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b20ac: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1b20acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1b20b0u;
}
