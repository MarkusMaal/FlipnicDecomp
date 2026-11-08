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

// Function: entry_00199f38
// Address: 0x199f38 - 0x199f60
void entry_00199f38_0x199f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199f38_0x199f38");
#endif

    ctx->pc = 0x199f38u;

label_199f38:
    // 0x199f38: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x199f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x199f3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x199f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199f40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x199F40u;
    {
        const bool branch_taken_0x199f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F40u;
        // 0x199f44: 0x2053021  addu        $a2, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f40) {
            ctx->pc = 0x199F60u;
            return;
        }
    }
    ctx->pc = 0x199F48u;
    // 0x199f48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199f4c: 0xacc20510  sw          $v0, 0x510($a2)
    ctx->pc = 0x199f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1296), GPR_U32(ctx, 2));
    // 0x199f50: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x199f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x199f54: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x199f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x199f58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x199F58u;
    {
        const bool branch_taken_0x199f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F58u;
        // 0x199f5c: 0xacc004d0  sw          $zero, 0x4D0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f58) {
            ctx->pc = 0x199F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199f38;
        }
    }
    ctx->pc = 0x199F60u;
}
