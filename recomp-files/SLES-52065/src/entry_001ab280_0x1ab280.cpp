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

// Function: entry_001ab280
// Address: 0x1ab280 - 0x1ab290
void entry_001ab280_0x1ab280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab280_0x1ab280");
#endif

    ctx->pc = 0x1ab280u;

    // 0x1ab280: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ab280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ab284: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1ab284u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ab288: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1AB288u;
    {
        const bool branch_taken_0x1ab288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB288u;
        // 0x1ab28c: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab288) {
            ctx->pc = 0x1AB1E8u;
            return;
        }
    }
    ctx->pc = 0x1AB290u;
}
