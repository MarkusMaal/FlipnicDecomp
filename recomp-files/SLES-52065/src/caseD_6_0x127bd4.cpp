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

// Function: caseD_6
// Address: 0x127bd4 - 0x127bec
void caseD_6_0x127bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x127bd4");
#endif

    ctx->pc = 0x127bd4u;

    // 0x127bd4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x127bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x127bd8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x127BD8u;
    {
        const bool branch_taken_0x127bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127bd8) {
            ctx->pc = 0x127C14u;
            return;
        }
    }
    ctx->pc = 0x127BE0u;
    // 0x127be0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x127be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x127be4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x127BE4u;
    {
        const bool branch_taken_0x127be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BE4u;
        // 0x127be8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127be4) {
            ctx->pc = 0x127C14u;
            return;
        }
    }
    ctx->pc = 0x127BECu;
}
