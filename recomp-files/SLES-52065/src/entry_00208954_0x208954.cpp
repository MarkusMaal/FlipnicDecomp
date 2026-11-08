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

// Function: entry_00208954
// Address: 0x208954 - 0x208960
void entry_00208954_0x208954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208954_0x208954");
#endif

    ctx->pc = 0x208954u;

    // 0x208954: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x208954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x208958: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208958u;
    {
        const bool branch_taken_0x208958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208958u;
        // 0x20895c: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208958) {
            ctx->pc = 0x20896Cu;
            return;
        }
    }
    ctx->pc = 0x208960u;
}
