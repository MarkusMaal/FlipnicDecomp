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

// Function: entry_00192130
// Address: 0x192130 - 0x192148
void entry_00192130_0x192130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192130_0x192130");
#endif

    ctx->pc = 0x192130u;

    // 0x192130: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x192130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x192134: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x192134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x192138: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x192138u;
    {
        const bool branch_taken_0x192138 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x192138) {
            ctx->pc = 0x192148u;
            return;
        }
    }
    ctx->pc = 0x192140u;
    // 0x192140: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192140u;
    {
        const bool branch_taken_0x192140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192140u;
        // 0x192144: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192140) {
            ctx->pc = 0x192164u;
            return;
        }
    }
    ctx->pc = 0x192148u;
}
