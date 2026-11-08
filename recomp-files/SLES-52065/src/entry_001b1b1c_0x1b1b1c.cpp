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

// Function: entry_001b1b1c
// Address: 0x1b1b1c - 0x1b1b40
void entry_001b1b1c_0x1b1b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1b1c_0x1b1b1c");
#endif

    ctx->pc = 0x1b1b1cu;

    // 0x1b1b1c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1b1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b1b20: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b1b24: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1b28: 0x2643ff40  addiu       $v1, $s2, -0xC0
    ctx->pc = 0x1b1b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967104));
    // 0x1b1b2c: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1b1b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1b30: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1B30u;
    {
        const bool branch_taken_0x1b1b30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B30u;
        // 0x1b1b34: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b30) {
            ctx->pc = 0x1B1B40u;
            return;
        }
    }
    ctx->pc = 0x1B1B38u;
    // 0x1b1b38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b1b3c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1b1b3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1b1b40u;
}
