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

// Function: entry_00189484
// Address: 0x189484 - 0x1894a0
void entry_00189484_0x189484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189484_0x189484");
#endif

    ctx->pc = 0x189484u;

label_189484:
    // 0x189484: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x189484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x189488: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x189488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x18948c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x18948cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189490: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x189490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x189494: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x189494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x189498: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x189498u;
    {
        const bool branch_taken_0x189498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189498u;
        // 0x18949c: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189498) {
            ctx->pc = 0x189484u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189484;
        }
    }
    ctx->pc = 0x1894A0u;
}
