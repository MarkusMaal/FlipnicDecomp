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

// Function: entry_001a8474
// Address: 0x1a8474 - 0x1a8490
void entry_001a8474_0x1a8474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8474_0x1a8474");
#endif

    ctx->pc = 0x1a8474u;

    // 0x1a8474: 0x0  nop
    ctx->pc = 0x1a8474u;
    // NOP
    // 0x1a8478: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1a8478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a847c: 0x8e6406c4  lw          $a0, 0x6C4($s3)
    ctx->pc = 0x1a847cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
    // 0x1a8480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8484: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1A8484u;
    {
        const bool branch_taken_0x1a8484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8484u;
        // 0x1a8488: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8484) {
            ctx->pc = 0x1A8550u;
            return;
        }
    }
    ctx->pc = 0x1A848Cu;
    // 0x1a848c: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x1a848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    ctx->pc = 0x1a8490u;
}
