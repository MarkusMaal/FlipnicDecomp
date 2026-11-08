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

// Function: entry_001b2b38
// Address: 0x1b2b38 - 0x1b2b58
void entry_001b2b38_0x1b2b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2b38_0x1b2b38");
#endif

    ctx->pc = 0x1b2b38u;

    // 0x1b2b38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b2b3c: 0x1880fff7  blez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B2B3Cu;
    {
        const bool branch_taken_0x1b2b3c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B3Cu;
        // 0x1b2b40: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b3c) {
            ctx->pc = 0x1B2B1Cu;
            return;
        }
    }
    ctx->pc = 0x1B2B44u;
    // 0x1b2b44: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1b2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1b2b48: 0x2861000f  slti        $at, $v1, 0xF
    ctx->pc = 0x1b2b48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1b2b4c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2B4Cu;
    {
        const bool branch_taken_0x1b2b4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b4c) {
            ctx->pc = 0x1B2B58u;
            return;
        }
    }
    ctx->pc = 0x1B2B54u;
    // 0x1b2b54: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1b2b54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1b2b58u;
}
