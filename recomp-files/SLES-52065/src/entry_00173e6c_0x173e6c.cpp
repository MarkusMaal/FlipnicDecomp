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

// Function: entry_00173e6c
// Address: 0x173e6c - 0x173e80
void entry_00173e6c_0x173e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173e6c_0x173e6c");
#endif

    ctx->pc = 0x173e6cu;

    // 0x173e6c: 0x0  nop
    ctx->pc = 0x173e6cu;
    // NOP
    // 0x173e70: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x173e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x173e74: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x173e74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x173e78: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x173E78u;
    {
        const bool branch_taken_0x173e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E78u;
        // 0x173e7c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e78) {
            ctx->pc = 0x173F14u;
            return;
        }
    }
    ctx->pc = 0x173E80u;
}
