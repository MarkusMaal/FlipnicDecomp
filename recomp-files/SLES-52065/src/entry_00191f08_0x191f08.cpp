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

// Function: entry_00191f08
// Address: 0x191f08 - 0x191f20
void entry_00191f08_0x191f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191f08_0x191f08");
#endif

    ctx->pc = 0x191f08u;

    // 0x191f08: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x191f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191f0c: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x191f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x191f10: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191F10u;
    {
        const bool branch_taken_0x191f10 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x191f10) {
            ctx->pc = 0x191F20u;
            return;
        }
    }
    ctx->pc = 0x191F18u;
    // 0x191f18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x191F18u;
    {
        const bool branch_taken_0x191f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F18u;
        // 0x191f1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f18) {
            ctx->pc = 0x191F3Cu;
            return;
        }
    }
    ctx->pc = 0x191F20u;
}
