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

// Function: entry_002021a8
// Address: 0x2021a8 - 0x2021c4
void entry_002021a8_0x2021a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002021a8_0x2021a8");
#endif

    ctx->pc = 0x2021a8u;

label_2021a8:
    // 0x2021a8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2021a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2021ac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2021acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2021b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2021b4: 0x0  nop
    ctx->pc = 0x2021b4u;
    // NOP
    // 0x2021b8: 0x0  nop
    ctx->pc = 0x2021b8u;
    // NOP
    // 0x2021bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2021BCu;
    {
        const bool branch_taken_0x2021bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2021C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021BCu;
        // 0x2021c0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021bc) {
            ctx->pc = 0x2021A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2021a8;
        }
    }
    ctx->pc = 0x2021C4u;
}
