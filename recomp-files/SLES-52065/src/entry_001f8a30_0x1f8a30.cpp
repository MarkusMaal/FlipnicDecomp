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

// Function: entry_001f8a30
// Address: 0x1f8a30 - 0x1f8a58
void entry_001f8a30_0x1f8a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8a30_0x1f8a30");
#endif

    ctx->pc = 0x1f8a30u;

label_1f8a30:
    // 0x1f8a30: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1f8a30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8a34: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1f8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1f8a38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f8a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f8a3c: 0xa0650020  sb          $a1, 0x20($v1)
    ctx->pc = 0x1f8a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f8a40: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1f8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f8a44: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1f8a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f8a48: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F8A48u;
    {
        const bool branch_taken_0x1f8a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A48u;
        // 0x1f8a4c: 0x2261021  addu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a48) {
            ctx->pc = 0x1F8A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8a30;
        }
    }
    ctx->pc = 0x1F8A50u;
    // 0x1f8a50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8A50u;
    {
        const bool branch_taken_0x1f8a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8a50) {
            ctx->pc = 0x1F8A5Cu;
            return;
        }
    }
    ctx->pc = 0x1F8A58u;
}
