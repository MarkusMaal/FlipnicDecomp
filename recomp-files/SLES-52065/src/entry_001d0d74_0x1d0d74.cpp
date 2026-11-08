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

// Function: entry_001d0d74
// Address: 0x1d0d74 - 0x1d0d90
void entry_001d0d74_0x1d0d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0d74_0x1d0d74");
#endif

    ctx->pc = 0x1d0d74u;

    // 0x1d0d74: 0x0  nop
    ctx->pc = 0x1d0d74u;
    // NOP
    // 0x1d0d78: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1d0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d0d7c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d0d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0d80: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0D80u;
    {
        const bool branch_taken_0x1d0d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0d80) {
            ctx->pc = 0x1D0D90u;
            return;
        }
    }
    ctx->pc = 0x1D0D88u;
    // 0x1d0d88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0D88u;
    {
        const bool branch_taken_0x1d0d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D88u;
        // 0x1d0d8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d88) {
            ctx->pc = 0x1D0DA0u;
            return;
        }
    }
    ctx->pc = 0x1D0D90u;
}
