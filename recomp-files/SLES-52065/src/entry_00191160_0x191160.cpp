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

// Function: entry_00191160
// Address: 0x191160 - 0x191178
void entry_00191160_0x191160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191160_0x191160");
#endif

    ctx->pc = 0x191160u;

    // 0x191160: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x191160u;
    {
        const bool branch_taken_0x191160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x191160) {
            ctx->pc = 0x191178u;
            return;
        }
    }
    ctx->pc = 0x191168u;
    // 0x191168: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x191168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19116c: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x19116cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x191170: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x191170u;
    {
        const bool branch_taken_0x191170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191170u;
        // 0x191174: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191170) {
            ctx->pc = 0x191148u;
            return;
        }
    }
    ctx->pc = 0x191178u;
}
