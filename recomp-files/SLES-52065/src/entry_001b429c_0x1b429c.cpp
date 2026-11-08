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

// Function: entry_001b429c
// Address: 0x1b429c - 0x1b42b8
void entry_001b429c_0x1b429c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b429c_0x1b429c");
#endif

    ctx->pc = 0x1b429cu;

    // 0x1b429c: 0x0  nop
    ctx->pc = 0x1b429cu;
    // NOP
    // 0x1b42a0: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x1b42a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b42a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B42A4u;
    {
        const bool branch_taken_0x1b42a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42A4u;
        // 0x1b42a8: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42a4) {
            ctx->pc = 0x1B42B8u;
            return;
        }
    }
    ctx->pc = 0x1B42ACu;
    // 0x1b42ac: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1b42acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b42b0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B42B0u;
    {
        const bool branch_taken_0x1b42b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b42b0) {
            ctx->pc = 0x1B4290u;
            return;
        }
    }
    ctx->pc = 0x1B42B8u;
}
