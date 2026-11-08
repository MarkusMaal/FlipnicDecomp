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

// Function: entry_00208ba0
// Address: 0x208ba0 - 0x208bc4
void entry_00208ba0_0x208ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208ba0_0x208ba0");
#endif

    ctx->pc = 0x208ba0u;

label_208ba0:
    // 0x208ba0: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x208ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x208ba4: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x208ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x208ba8: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x208ba8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x208bac: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x208bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x208bb0: 0x0  nop
    ctx->pc = 0x208bb0u;
    // NOP
    // 0x208bb4: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x208BB4u;
    {
        const bool branch_taken_0x208bb4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x208bb4) {
            ctx->pc = 0x208BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208ba0;
        }
    }
    ctx->pc = 0x208BBCu;
    // 0x208bbc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x208BBCu;
    {
        const bool branch_taken_0x208bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BBCu;
        // 0x208bc0: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bbc) {
            ctx->pc = 0x208BE8u;
            return;
        }
    }
    ctx->pc = 0x208BC4u;
}
