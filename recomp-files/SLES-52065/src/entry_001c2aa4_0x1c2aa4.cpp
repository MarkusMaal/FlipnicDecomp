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

// Function: entry_001c2aa4
// Address: 0x1c2aa4 - 0x1c2abc
void entry_001c2aa4_0x1c2aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2aa4_0x1c2aa4");
#endif

    ctx->pc = 0x1c2aa4u;

    // 0x1c2aa4: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2aa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2aac: 0x14620070  bne         $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1C2AACu;
    {
        const bool branch_taken_0x1c2aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AACu;
        // 0x1c2ab0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2aac) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2AB4u;
    // 0x1c2ab4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1C2AB4u;
    {
        const bool branch_taken_0x1c2ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AB4u;
        // 0x1c2ab8: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ab4) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2ABCu;
}
