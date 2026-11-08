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

// Function: entry_001bb058
// Address: 0x1bb058 - 0x1bb088
void entry_001bb058_0x1bb058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb058_0x1bb058");
#endif

    ctx->pc = 0x1bb058u;

    // 0x1bb058: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bb058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb05c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb060: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bb060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb064: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1bb064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bb068: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x1bb068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x1bb06c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bb06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bb070: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1bb070u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bb074: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB074u;
    {
        const bool branch_taken_0x1bb074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB074u;
        // 0x1bb078: 0x27a20058  addiu       $v0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb074) {
            ctx->pc = 0x1BB088u;
            return;
        }
    }
    ctx->pc = 0x1BB07Cu;
    // 0x1bb07c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB07Cu;
    {
        const bool branch_taken_0x1bb07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB07Cu;
        // 0x1bb080: 0x27a2005c  addiu       $v0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb07c) {
            ctx->pc = 0x1BB088u;
            return;
        }
    }
    ctx->pc = 0x1BB084u;
    // 0x1bb084: 0x27a20058  addiu       $v0, $sp, 0x58
    ctx->pc = 0x1bb084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->pc = 0x1bb088u;
}
