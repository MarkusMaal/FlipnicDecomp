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

// Function: entry_001215d0
// Address: 0x1215d0 - 0x1215e8
void entry_001215d0_0x1215d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001215d0_0x1215d0");
#endif

    ctx->pc = 0x1215d0u;

    // 0x1215d0: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1215D0u;
    {
        const bool branch_taken_0x1215d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1215d0) {
            ctx->pc = 0x121650u;
            return;
        }
    }
    ctx->pc = 0x1215D8u;
    // 0x1215d8: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x1215d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1215dc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1215dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1215E0u;
    {
        const bool branch_taken_0x1215e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1215E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215E0u;
        // 0x1215e4: 0x2262821  addu        $a1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215e0) {
            ctx->pc = 0x1215F8u;
            return;
        }
    }
    ctx->pc = 0x1215E8u;
}
