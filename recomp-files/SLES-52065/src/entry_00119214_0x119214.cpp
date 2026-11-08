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

// Function: entry_00119214
// Address: 0x119214 - 0x119230
void entry_00119214_0x119214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119214_0x119214");
#endif

    switch (ctx->pc) {
        case 0x119220u: goto label_119220;
        default: break;
    }

    ctx->pc = 0x119214u;

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
}
