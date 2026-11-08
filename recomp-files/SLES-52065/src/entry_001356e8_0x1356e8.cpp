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

// Function: entry_001356e8
// Address: 0x1356e8 - 0x135724
void entry_001356e8_0x1356e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001356e8_0x1356e8");
#endif

    switch (ctx->pc) {
        case 0x135700u: goto label_135700;
        case 0x135718u: goto label_135718;
        default: break;
    }

    ctx->pc = 0x1356e8u;

label_1356e8:
    // 0x1356e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1356e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1356ec:
    // 0x1356ec: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1356ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1356f0:
    // 0x1356f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1356f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1356f4:
    // 0x1356f4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1356f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1356f8:
    // 0x1356f8: 0x320f809  jalr        $t9
label_1356fc:
    if (ctx->pc == 0x1356FCu) {
        ctx->pc = 0x135700u;
        goto label_135700;
    }
    ctx->pc = 0x1356F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135700u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1356F8u, 0x135700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135700u;
label_135700:
    // 0x135700: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x135700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_135704:
    // 0x135704: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x135704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_135708:
    // 0x135708: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13570c:
    // 0x13570c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13570cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_135710:
    // 0x135710: 0x320f809  jalr        $t9
label_135714:
    if (ctx->pc == 0x135714u) {
        ctx->pc = 0x135718u;
        goto label_135718;
    }
    ctx->pc = 0x135710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135718u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135710u, 0x135718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135718u;
label_135718:
    // 0x135718: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x135718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_13571c:
    // 0x13571c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x13571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_135720:
    // 0x135720: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x135720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    ctx->pc = 0x135724u;
}
