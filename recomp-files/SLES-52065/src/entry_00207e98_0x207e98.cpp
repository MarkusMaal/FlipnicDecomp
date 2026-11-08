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

// Function: entry_00207e98
// Address: 0x207e98 - 0x207ebc
void entry_00207e98_0x207e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207e98_0x207e98");
#endif

    ctx->pc = 0x207e98u;

label_207e98:
    // 0x207e98: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x207e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x207e9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x207e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x207ea0: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x207ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x207ea4: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x207ea4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x207ea8: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x207ea8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207eac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x207EACu;
    {
        const bool branch_taken_0x207eac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x207eac) {
            ctx->pc = 0x207E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207e98;
        }
    }
    ctx->pc = 0x207EB4u;
    // 0x207eb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x207EB4u;
    {
        const bool branch_taken_0x207eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EB4u;
        // 0x207eb8: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207eb4) {
            ctx->pc = 0x207EC4u;
            return;
        }
    }
    ctx->pc = 0x207EBCu;
}
