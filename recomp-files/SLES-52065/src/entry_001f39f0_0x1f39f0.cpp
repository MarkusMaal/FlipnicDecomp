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

// Function: entry_001f39f0
// Address: 0x1f39f0 - 0x1f3a14
void entry_001f39f0_0x1f39f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f39f0_0x1f39f0");
#endif

    ctx->pc = 0x1f39f0u;

label_1f39f0:
    // 0x1f39f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f39f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f39f4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f39f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f39f8: 0x0  nop
    ctx->pc = 0x1f39f8u;
    // NOP
    // 0x1f39fc: 0x0  nop
    ctx->pc = 0x1f39fcu;
    // NOP
    // 0x1f3a00: 0x0  nop
    ctx->pc = 0x1f3a00u;
    // NOP
    // 0x1f3a04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F3A04u;
    {
        const bool branch_taken_0x1f3a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3a04) {
            ctx->pc = 0x1F39F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f39f0;
        }
    }
    ctx->pc = 0x1F3A0Cu;
    // 0x1f3a0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3A0Cu;
    {
        const bool branch_taken_0x1f3a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A0Cu;
        // 0x1f3a10: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a0c) {
            ctx->pc = 0x1F3A1Cu;
            return;
        }
    }
    ctx->pc = 0x1F3A14u;
}
