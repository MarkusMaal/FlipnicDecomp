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

// Function: entry_001c38b4
// Address: 0x1c38b4 - 0x1c38cc
void entry_001c38b4_0x1c38b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c38b4_0x1c38b4");
#endif

    ctx->pc = 0x1c38b4u;

    // 0x1c38b4: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x1c38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1c38b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c38bc: 0x146202d2  bne         $v1, $v0, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x1C38BCu;
    {
        const bool branch_taken_0x1c38bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C38C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38BCu;
        // 0x1c38c0: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38bc) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C38C4u;
    // 0x1c38c4: 0x100002d0  b           . + 4 + (0x2D0 << 2)
    ctx->pc = 0x1C38C4u;
    {
        const bool branch_taken_0x1c38c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C38C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38C4u;
        // 0x1c38c8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38c4) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C38CCu;
}
