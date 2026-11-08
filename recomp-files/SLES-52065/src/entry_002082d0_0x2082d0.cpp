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

// Function: entry_002082d0
// Address: 0x2082d0 - 0x2082f8
void entry_002082d0_0x2082d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002082d0_0x2082d0");
#endif

    ctx->pc = 0x2082d0u;

label_2082d0:
    // 0x2082d0: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x2082d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x2082d4: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x2082d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x2082d8: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x2082d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x2082dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2082dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2082e0: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x2082e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2082e4: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x2082e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2082e8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2082E8u;
    {
        const bool branch_taken_0x2082e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082E8u;
        // 0x2082ec: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082e8) {
            ctx->pc = 0x2082D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2082d0;
        }
    }
    ctx->pc = 0x2082F0u;
    // 0x2082f0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2082f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2082f4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2082f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x2082f8u;
}
