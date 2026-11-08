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

// Function: entry_001aa81c
// Address: 0x1aa81c - 0x1aa83c
void entry_001aa81c_0x1aa81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa81c_0x1aa81c");
#endif

    ctx->pc = 0x1aa81cu;

label_1aa81c:
    // 0x1aa81c: 0x0  nop
    ctx->pc = 0x1aa81cu;
    // NOP
    // 0x1aa820: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1aa820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1aa824: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1aa824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1aa828: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aa828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1aa82c: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x1aa82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1aa830: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1aa830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1aa834: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AA834u;
    {
        const bool branch_taken_0x1aa834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA834u;
        // 0x1aa838: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa834) {
            ctx->pc = 0x1AA81Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa81c;
        }
    }
    ctx->pc = 0x1AA83Cu;
}
