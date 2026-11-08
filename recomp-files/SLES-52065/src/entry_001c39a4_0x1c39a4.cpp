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

// Function: entry_001c39a4
// Address: 0x1c39a4 - 0x1c39bc
void entry_001c39a4_0x1c39a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c39a4_0x1c39a4");
#endif

    ctx->pc = 0x1c39a4u;

    // 0x1c39a4: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c39a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c39ac: 0x14620296  bne         $v1, $v0, . + 4 + (0x296 << 2)
    ctx->pc = 0x1C39ACu;
    {
        const bool branch_taken_0x1c39ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39ACu;
        // 0x1c39b0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39ac) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C39B4u;
    // 0x1c39b4: 0x10000294  b           . + 4 + (0x294 << 2)
    ctx->pc = 0x1C39B4u;
    {
        const bool branch_taken_0x1c39b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39B4u;
        // 0x1c39b8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39b4) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C39BCu;
}
