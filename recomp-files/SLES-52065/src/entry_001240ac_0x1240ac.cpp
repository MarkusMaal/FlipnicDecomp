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

// Function: entry_001240ac
// Address: 0x1240ac - 0x1240c4
void entry_001240ac_0x1240ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001240ac_0x1240ac");
#endif

    ctx->pc = 0x1240acu;

    // 0x1240ac: 0x0  nop
    ctx->pc = 0x1240acu;
    // NOP
    // 0x1240b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1240b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1240b4: 0x23e102a  slt         $v0, $s1, $fp
    ctx->pc = 0x1240b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1240b8: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x1240b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x1240bc: 0x1440ff72  bnez        $v0, . + 4 + (-0x8E << 2)
    ctx->pc = 0x1240BCu;
    {
        const bool branch_taken_0x1240bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1240C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240BCu;
        // 0x1240c0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240bc) {
            ctx->pc = 0x123E88u;
            return;
        }
    }
    ctx->pc = 0x1240C4u;
}
