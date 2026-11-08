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

// Function: entry_0016bdd0
// Address: 0x16bdd0 - 0x16bdf8
void entry_0016bdd0_0x16bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bdd0_0x16bdd0");
#endif

    ctx->pc = 0x16bdd0u;

label_16bdd0:
    // 0x16bdd0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_16bdd4:
    if (ctx->pc == 0x16BDD4u) {
        ctx->pc = 0x16BDD8u;
        goto label_16bdd8;
    }
    ctx->pc = 0x16BDD0u;
    {
        const bool branch_taken_0x16bdd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bdd0) {
            ctx->pc = 0x16BDF8u;
            return;
        }
    }
    ctx->pc = 0x16BDD8u;
label_16bdd8:
    // 0x16bdd8: 0x8c8501d4  lw          $a1, 0x1D4($a0)
    ctx->pc = 0x16bdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_16bddc:
    // 0x16bddc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16bde0:
    // 0x16bde0: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_16bde4:
    if (ctx->pc == 0x16BDE4u) {
        ctx->pc = 0x16BDE8u;
        goto label_16bde8;
    }
    ctx->pc = 0x16BDE0u;
    {
        const bool branch_taken_0x16bde0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x16bde0) {
            ctx->pc = 0x16BDF8u;
            return;
        }
    }
    ctx->pc = 0x16BDE8u;
label_16bde8:
    // 0x16bde8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x16bde8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16bdec:
    // 0x16bdec: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x16bdecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_16bdf0:
    // 0x16bdf0: 0x320f809  jalr        $t9
label_16bdf4:
    if (ctx->pc == 0x16BDF4u) {
        ctx->pc = 0x16BDF8u;
        goto label_fallthrough_0x16bdf0;
    }
    ctx->pc = 0x16BDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BDF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BDF0u, 0x16BDF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16bdf0:
    ctx->pc = 0x16BDF8u;
}
