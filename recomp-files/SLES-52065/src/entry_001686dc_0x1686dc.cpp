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

// Function: entry_001686dc
// Address: 0x1686dc - 0x168700
void entry_001686dc_0x1686dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001686dc_0x1686dc");
#endif

    ctx->pc = 0x1686dcu;

    // 0x1686dc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1686dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1686e0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1686e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1686e4: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1686E4u;
    {
        const bool branch_taken_0x1686e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1686e4) {
            ctx->pc = 0x168700u;
            return;
        }
    }
    ctx->pc = 0x1686ECu;
    // 0x1686ec: 0xa0c001f4  sb          $zero, 0x1F4($a2)
    ctx->pc = 0x1686ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 500), (uint8_t)GPR_U32(ctx, 0));
    // 0x1686f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1686f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1686f4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1686f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1686f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1686F8u;
    {
        const bool branch_taken_0x1686f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1686FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686F8u;
        // 0x1686fc: 0xac642cd0  sw          $a0, 0x2CD0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11472), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686f8) {
            ctx->pc = 0x168714u;
            return;
        }
    }
    ctx->pc = 0x168700u;
}
