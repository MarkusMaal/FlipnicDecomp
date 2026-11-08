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

// Function: entry_001746a4
// Address: 0x1746a4 - 0x1746b8
void entry_001746a4_0x1746a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001746a4_0x1746a4");
#endif

    ctx->pc = 0x1746a4u;

    // 0x1746a4: 0x0  nop
    ctx->pc = 0x1746a4u;
    // NOP
    // 0x1746a8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1746a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1746ac: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1746acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1746b0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1746B0u;
    {
        const bool branch_taken_0x1746b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1746B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746B0u;
        // 0x1746b4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746b0) {
            ctx->pc = 0x17474Cu;
            return;
        }
    }
    ctx->pc = 0x1746B8u;
}
