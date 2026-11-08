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

// Function: entry_0013f98c
// Address: 0x13f98c - 0x13f9a4
void entry_0013f98c_0x13f98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f98c_0x13f98c");
#endif

    ctx->pc = 0x13f98cu;

    // 0x13f98c: 0x8f82809c  lw          $v0, -0x7F64($gp)
    ctx->pc = 0x13f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934684)));
    // 0x13f990: 0xa2082b  sltu        $at, $a1, $v0
    ctx->pc = 0x13f990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13f994: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F994u;
    {
        const bool branch_taken_0x13f994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F994u;
        // 0x13f998: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f994) {
            ctx->pc = 0x13F9A4u;
            return;
        }
    }
    ctx->pc = 0x13F99Cu;
    // 0x13f99c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F99Cu;
    {
        const bool branch_taken_0x13f99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F99Cu;
        // 0x13f9a0: 0x2782809c  addiu       $v0, $gp, -0x7F64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934684));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f99c) {
            ctx->pc = 0x13F9A8u;
            return;
        }
    }
    ctx->pc = 0x13F9A4u;
}
