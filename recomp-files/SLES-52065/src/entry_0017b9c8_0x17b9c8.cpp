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

// Function: entry_0017b9c8
// Address: 0x17b9c8 - 0x17b9d8
void entry_0017b9c8_0x17b9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b9c8_0x17b9c8");
#endif

    ctx->pc = 0x17b9c8u;

    // 0x17b9c8: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x17b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x17b9cc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B9CCu;
    {
        const bool branch_taken_0x17b9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9CCu;
        // 0x17b9d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9cc) {
            ctx->pc = 0x17B9D8u;
            return;
        }
    }
    ctx->pc = 0x17B9D4u;
    // 0x17b9d4: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x17b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    ctx->pc = 0x17b9d8u;
}
