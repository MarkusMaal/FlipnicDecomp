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

// Function: entry_0015c384
// Address: 0x15c384 - 0x15c398
void entry_0015c384_0x15c384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c384_0x15c384");
#endif

    ctx->pc = 0x15c384u;

    // 0x15c384: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15c384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15c388: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x15c388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x15c38c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x15c38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15c390: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15C390u;
    {
        const bool branch_taken_0x15c390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C390u;
        // 0x15c394: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c390) {
            ctx->pc = 0x15C350u;
            return;
        }
    }
    ctx->pc = 0x15C398u;
}
