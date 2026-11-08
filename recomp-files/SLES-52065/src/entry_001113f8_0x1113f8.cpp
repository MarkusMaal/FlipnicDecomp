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

// Function: entry_001113f8
// Address: 0x1113f8 - 0x111414
void entry_001113f8_0x1113f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001113f8_0x1113f8");
#endif

    ctx->pc = 0x1113f8u;

    // 0x1113f8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1113f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1113fc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1113fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111400: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x111400u;
    {
        const bool branch_taken_0x111400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111400u;
        // 0x111404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111400) {
            ctx->pc = 0x1113A0u;
            return;
        }
    }
    ctx->pc = 0x111408u;
    // 0x111408: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x111408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11140c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11140Cu;
    {
        const bool branch_taken_0x11140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11140Cu;
        // 0x111410: 0x2405fff7  addiu       $a1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11140c) {
            ctx->pc = 0x111480u;
            return;
        }
    }
    ctx->pc = 0x111414u;
}
