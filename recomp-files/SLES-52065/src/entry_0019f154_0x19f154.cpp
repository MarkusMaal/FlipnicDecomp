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

// Function: entry_0019f154
// Address: 0x19f154 - 0x19f170
void entry_0019f154_0x19f154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f154_0x19f154");
#endif

    ctx->pc = 0x19f154u;

    // 0x19f154: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x19f154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x19f158: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F158u;
    {
        const bool branch_taken_0x19f158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F158u;
        // 0x19f15c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f158) {
            ctx->pc = 0x19F170u;
            return;
        }
    }
    ctx->pc = 0x19F160u;
    // 0x19f160: 0x8c630320  lw          $v1, 0x320($v1)
    ctx->pc = 0x19f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x19f164: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F164u;
    {
        const bool branch_taken_0x19f164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f164) {
            ctx->pc = 0x19F170u;
            return;
        }
    }
    ctx->pc = 0x19F16Cu;
    // 0x19f16c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f170u;
}
