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

// Function: entry_00190298
// Address: 0x190298 - 0x1902c0
void entry_00190298_0x190298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190298_0x190298");
#endif

    ctx->pc = 0x190298u;

label_190298:
    // 0x190298: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x190298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19029c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19029cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1902a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1902A0u;
    {
        const bool branch_taken_0x1902a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902a0) {
            ctx->pc = 0x1902C0u;
            return;
        }
    }
    ctx->pc = 0x1902A8u;
    // 0x1902a8: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x1902a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1902ac: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x1902acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1902b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1902b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1902b4: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x1902b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1902b8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1902B8u;
    {
        const bool branch_taken_0x1902b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1902BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902B8u;
        // 0x1902bc: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1902b8) {
            ctx->pc = 0x190298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190298;
        }
    }
    ctx->pc = 0x1902C0u;
}
