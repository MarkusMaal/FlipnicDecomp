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

// Function: FUN_001191f0
// Address: 0x1191f0 - 0x119244
void FUN_001191f0_0x1191f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001191f0_0x1191f0");
#endif

    switch (ctx->pc) {
        case 0x119214u: goto label_119214;
        case 0x119220u: goto label_119220;
        default: break;
    }

    ctx->pc = 0x1191f0u;

    // 0x1191f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1191f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1191f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1191f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1191f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1191f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1191fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1191fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x119200: 0x878383a4  lh          $v1, -0x7C5C($gp)
    ctx->pc = 0x119200u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935460)));
    // 0x119204: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x119204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x119208: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119208u;
    {
        const bool branch_taken_0x119208 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x119208) {
            ctx->pc = 0x119230u;
            goto label_119230;
        }
    }
    ctx->pc = 0x119210u;
    // 0x119210: 0x108900  sll         $s1, $s0, 4
    ctx->pc = 0x119210u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_119214:
    // 0x119214: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x119214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x119218: 0xc046764  jal         func_119D90
    ctx->pc = 0x119218u;
    SET_GPR_U32(ctx, 31, 0x119220u);
    ctx->pc = 0x11921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119218u;
    // 0x11921c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D90u, 0x119218u, 0x119220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119220u;
label_119220:
    // 0x119220: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x119220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x119224: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x119224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x119228: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x119228u;
    {
        const bool branch_taken_0x119228 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x119228) {
            ctx->pc = 0x119214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119214;
        }
    }
    ctx->pc = 0x119230u;
label_119230:
    // 0x119230: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11923c: 0x3e00008  jr          $ra
    ctx->pc = 0x11923Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11923Cu;
        // 0x119240: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11923Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119244u;
}
