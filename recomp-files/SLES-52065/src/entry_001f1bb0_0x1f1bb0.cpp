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

// Function: entry_001f1bb0
// Address: 0x1f1bb0 - 0x1f1bd4
void entry_001f1bb0_0x1f1bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1bb0_0x1f1bb0");
#endif

    ctx->pc = 0x1f1bb0u;

label_1f1bb0:
    // 0x1f1bb0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f1bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f1bb4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1BB4u;
    {
        const bool branch_taken_0x1f1bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BB4u;
        // 0x1f1bb8: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bb4) {
            ctx->pc = 0x1F1BD4u;
            return;
        }
    }
    ctx->pc = 0x1F1BBCu;
    // 0x1f1bbc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f1bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f1bc0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f1bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1bc4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f1bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1bc8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f1bcc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F1BCCu;
    {
        const bool branch_taken_0x1f1bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1bcc) {
            ctx->pc = 0x1F1BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1BCCu;
            // 0x1f1bd0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1bb0;
        }
    }
    ctx->pc = 0x1F1BD4u;
}
