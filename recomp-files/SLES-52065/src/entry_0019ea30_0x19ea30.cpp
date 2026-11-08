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

// Function: entry_0019ea30
// Address: 0x19ea30 - 0x19ea4c
void entry_0019ea30_0x19ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ea30_0x19ea30");
#endif

    ctx->pc = 0x19ea30u;

    // 0x19ea30: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ea34: 0x8c642848  lw          $a0, 0x2848($v1)
    ctx->pc = 0x19ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10312)));
    // 0x19ea38: 0x24652848  addiu       $a1, $v1, 0x2848
    ctx->pc = 0x19ea38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10312));
    // 0x19ea3c: 0x288303e8  slti        $v1, $a0, 0x3E8
    ctx->pc = 0x19ea3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19ea40: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EA40u;
    {
        const bool branch_taken_0x19ea40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA40u;
        // 0x19ea44: 0x2483fc18  addiu       $v1, $a0, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea40) {
            ctx->pc = 0x19EA4Cu;
            return;
        }
    }
    ctx->pc = 0x19EA48u;
    // 0x19ea48: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x19ea48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19ea4cu;
}
