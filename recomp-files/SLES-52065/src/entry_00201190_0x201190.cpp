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

// Function: entry_00201190
// Address: 0x201190 - 0x2011ac
void entry_00201190_0x201190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201190_0x201190");
#endif

    ctx->pc = 0x201190u;

    // 0x201190: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x201190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x201194: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201194u;
    {
        const bool branch_taken_0x201194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201194u;
        // 0x201198: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201194) {
            ctx->pc = 0x2011ACu;
            return;
        }
    }
    ctx->pc = 0x20119Cu;
    // 0x20119c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x20119cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2011a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2011a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2011a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2011A4u;
    {
        const bool branch_taken_0x2011a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011A4u;
        // 0x2011a8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011a4) {
            ctx->pc = 0x201230u;
            return;
        }
    }
    ctx->pc = 0x2011ACu;
}
