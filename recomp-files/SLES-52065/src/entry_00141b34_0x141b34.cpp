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

// Function: entry_00141b34
// Address: 0x141b34 - 0x141b50
void entry_00141b34_0x141b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141b34_0x141b34");
#endif

    ctx->pc = 0x141b34u;

    // 0x141b34: 0x0  nop
    ctx->pc = 0x141b34u;
    // NOP
    // 0x141b38: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x141b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x141b3c: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x141b3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x141b40: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x141B40u;
    {
        const bool branch_taken_0x141b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x141B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B40u;
        // 0x141b44: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b40) {
            ctx->pc = 0x141B50u;
            return;
        }
    }
    ctx->pc = 0x141B48u;
    // 0x141b48: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x141B48u;
    {
        const bool branch_taken_0x141b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141b48) {
            ctx->pc = 0x141B30u;
            return;
        }
    }
    ctx->pc = 0x141B50u;
}
