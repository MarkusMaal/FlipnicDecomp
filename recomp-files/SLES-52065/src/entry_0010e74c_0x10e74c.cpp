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

// Function: entry_0010e74c
// Address: 0x10e74c - 0x10e764
void entry_0010e74c_0x10e74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e74c_0x10e74c");
#endif

    ctx->pc = 0x10e74cu;

    // 0x10e74c: 0x0  nop
    ctx->pc = 0x10e74cu;
    // NOP
    // 0x10e750: 0x8e250220  lw          $a1, 0x220($s1)
    ctx->pc = 0x10e750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x10e754: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x10e754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x10e758: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x10E758u;
    {
        const bool branch_taken_0x10e758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E758u;
        // 0x10e75c: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e758) {
            ctx->pc = 0x10E704u;
            return;
        }
    }
    ctx->pc = 0x10E760u;
    // 0x10e760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10e764u;
}
