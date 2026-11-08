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

// Function: entry_001973cc
// Address: 0x1973cc - 0x197400
void entry_001973cc_0x1973cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001973cc_0x1973cc");
#endif

    ctx->pc = 0x1973ccu;

label_1973cc:
    // 0x1973cc: 0x0  nop
    ctx->pc = 0x1973ccu;
    // NOP
    // 0x1973d0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1973d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1973d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1973d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1973d8: 0x13c20009  beq         $fp, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1973D8u;
    {
        const bool branch_taken_0x1973d8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x1973d8) {
            ctx->pc = 0x197400u;
            return;
        }
    }
    ctx->pc = 0x1973E0u;
    // 0x1973e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1973e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1973e4: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x1973e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1973e8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1973E8u;
    {
        const bool branch_taken_0x1973e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973E8u;
        // 0x1973ec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973e8) {
            ctx->pc = 0x197400u;
            return;
        }
    }
    ctx->pc = 0x1973F0u;
    // 0x1973f0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1973f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1973f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1973f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1973f8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1973F8u;
    {
        const bool branch_taken_0x1973f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1973f8) {
            ctx->pc = 0x1973CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1973cc;
        }
    }
    ctx->pc = 0x197400u;
}
