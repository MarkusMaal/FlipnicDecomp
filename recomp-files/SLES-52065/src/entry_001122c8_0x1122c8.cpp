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

// Function: entry_001122c8
// Address: 0x1122c8 - 0x1122e8
void entry_001122c8_0x1122c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001122c8_0x1122c8");
#endif

    ctx->pc = 0x1122c8u;

    // 0x1122c8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1122c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1122cc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1122ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1122d0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1122D0u;
    {
        const bool branch_taken_0x1122d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1122d0) {
            ctx->pc = 0x112284u;
            return;
        }
    }
    ctx->pc = 0x1122D8u;
    // 0x1122d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1122d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1122dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1122dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1122e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1122E0u;
    {
        const bool branch_taken_0x1122e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122E0u;
        // 0x1122e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122e0) {
            ctx->pc = 0x112334u;
            return;
        }
    }
    ctx->pc = 0x1122E8u;
}
