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

// Function: entry_001cd628
// Address: 0x1cd628 - 0x1cd648
void entry_001cd628_0x1cd628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd628_0x1cd628");
#endif

    ctx->pc = 0x1cd628u;

    // 0x1cd628: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1cd628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1cd62c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1cd62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd630: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD630u;
    {
        const bool branch_taken_0x1cd630 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cd630) {
            ctx->pc = 0x1CD648u;
            return;
        }
    }
    ctx->pc = 0x1CD638u;
    // 0x1cd638: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1cd638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1cd63c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CD63Cu;
    {
        const bool branch_taken_0x1cd63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CD640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD63Cu;
        // 0x1cd640: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd63c) {
            ctx->pc = 0x1CD648u;
            return;
        }
    }
    ctx->pc = 0x1CD644u;
    // 0x1cd644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cd648u;
}
