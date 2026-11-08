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

// Function: entry_0015c50c
// Address: 0x15c50c - 0x15c530
void entry_0015c50c_0x15c50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c50c_0x15c50c");
#endif

    ctx->pc = 0x15c50cu;

    // 0x15c50c: 0x0  nop
    ctx->pc = 0x15c50cu;
    // NOP
    // 0x15c510: 0x8ea22c1c  lw          $v0, 0x2C1C($s5)
    ctx->pc = 0x15c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15c514: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x15c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15c518: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x15c518u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15c51c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x15c51cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15c520: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15C520u;
    {
        const bool branch_taken_0x15c520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C520u;
        // 0x15c524: 0x2b21021  addu        $v0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c520) {
            ctx->pc = 0x15C4E0u;
            return;
        }
    }
    ctx->pc = 0x15C528u;
    // 0x15c528: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x15c528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c52c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15c52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15c530u;
}
