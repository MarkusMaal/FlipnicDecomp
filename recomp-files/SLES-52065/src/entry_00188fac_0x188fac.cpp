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

// Function: entry_00188fac
// Address: 0x188fac - 0x188fc8
void entry_00188fac_0x188fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188fac_0x188fac");
#endif

    ctx->pc = 0x188facu;

label_188fac:
    // 0x188fac: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x188facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x188fb0: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x188fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x188fb4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x188fb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188fb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x188fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x188fbc: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x188fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x188fc0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x188FC0u;
    {
        const bool branch_taken_0x188fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FC0u;
        // 0x188fc4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fc0) {
            ctx->pc = 0x188FACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188fac;
        }
    }
    ctx->pc = 0x188FC8u;
}
