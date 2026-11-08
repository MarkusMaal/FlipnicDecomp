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

// Function: caseD_e
// Address: 0x194e18 - 0x194e60
void caseD_e_0x194e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x194e18");
#endif

    switch (ctx->pc) {
        case 0x194e18u: goto label_194e18;
        case 0x194e1cu: goto label_194e1c;
        case 0x194e20u: goto label_194e20;
        case 0x194e24u: goto label_194e24;
        case 0x194e28u: goto label_194e28;
        case 0x194e2cu: goto label_194e2c;
        case 0x194e30u: goto label_194e30;
        case 0x194e34u: goto label_194e34;
        case 0x194e38u: goto label_194e38;
        case 0x194e3cu: goto label_194e3c;
        case 0x194e40u: goto label_194e40;
        case 0x194e44u: goto label_194e44;
        case 0x194e48u: goto label_194e48;
        case 0x194e4cu: goto label_194e4c;
        case 0x194e50u: goto label_194e50;
        case 0x194e54u: goto label_194e54;
        case 0x194e58u: goto label_194e58;
        case 0x194e5cu: goto label_194e5c;
        default: break;
    }

    ctx->pc = 0x194e18u;

label_194e18:
    // 0x194e18: 0x8f9185f4  lw          $s1, -0x7A0C($gp)
    ctx->pc = 0x194e18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_194e1c:
    // 0x194e1c: 0x8e243ddc  lw          $a0, 0x3DDC($s1)
    ctx->pc = 0x194e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15836)));
label_194e20:
    // 0x194e20: 0x8e233dd8  lw          $v1, 0x3DD8($s1)
    ctx->pc = 0x194e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15832)));
label_194e24:
    // 0x194e24: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_194e28:
    if (ctx->pc == 0x194E28u) {
        ctx->pc = 0x194E2Cu;
        goto label_194e2c;
    }
    ctx->pc = 0x194E24u;
    {
        const bool branch_taken_0x194e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x194e24) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194E2Cu;
label_194e2c:
    // 0x194e2c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x194e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_194e30:
    // 0x194e30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x194e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_194e34:
    // 0x194e34: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x194e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_194e38:
    // 0x194e38: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x194e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_194e3c:
    // 0x194e3c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x194e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_194e40:
    // 0x194e40: 0x320f809  jalr        $t9
label_194e44:
    if (ctx->pc == 0x194E44u) {
        ctx->pc = 0x194E48u;
        goto label_194e48;
    }
    ctx->pc = 0x194E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x194E48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E40u, 0x194E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194E48u;
label_194e48:
    // 0x194e48: 0x8e243ddc  lw          $a0, 0x3DDC($s1)
    ctx->pc = 0x194e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15836)));
label_194e4c:
    // 0x194e4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194e50:
    // 0x194e50: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x194e50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_194e54:
    // 0x194e54: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x194e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_194e58:
    // 0x194e58: 0x8c843cd8  lw          $a0, 0x3CD8($a0)
    ctx->pc = 0x194e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15576)));
label_194e5c:
    // 0x194e5c: 0xa08301f9  sb          $v1, 0x1F9($a0)
    ctx->pc = 0x194e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 505), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x194e60u;
}
