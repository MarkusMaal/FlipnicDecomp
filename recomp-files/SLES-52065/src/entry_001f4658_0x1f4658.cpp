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

// Function: entry_001f4658
// Address: 0x1f4658 - 0x1f4678
void entry_001f4658_0x1f4658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4658_0x1f4658");
#endif

    ctx->pc = 0x1f4658u;

label_1f4658:
    // 0x1f4658: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f4658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f465c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f465cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f4660: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1f4660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f4664: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1f4664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f4668: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f4668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1f466c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1f466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1f4670: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F4670u;
    {
        const bool branch_taken_0x1f4670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4670) {
            ctx->pc = 0x1F4658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4658;
        }
    }
    ctx->pc = 0x1F4678u;
}
