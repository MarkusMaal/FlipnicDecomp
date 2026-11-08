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

// Function: entry_00171cb4
// Address: 0x171cb4 - 0x171cd4
void entry_00171cb4_0x171cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171cb4_0x171cb4");
#endif

    ctx->pc = 0x171cb4u;

    // 0x171cb4: 0x0  nop
    ctx->pc = 0x171cb4u;
    // NOP
    // 0x171cb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x171cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171cbc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x171cbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171cc0: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x171cc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x171cc4: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x171CC4u;
    {
        const bool branch_taken_0x171cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CC4u;
        // 0x171cc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171cc4) {
            ctx->pc = 0x171C1Cu;
            return;
        }
    }
    ctx->pc = 0x171CCCu;
    // 0x171ccc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171CCCu;
    {
        const bool branch_taken_0x171ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ccc) {
            ctx->pc = 0x171CF0u;
            return;
        }
    }
    ctx->pc = 0x171CD4u;
}
