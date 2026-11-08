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

// Function: entry_001a1078
// Address: 0x1a1078 - 0x1a10c0
void entry_001a1078_0x1a1078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1078_0x1a1078");
#endif

    switch (ctx->pc) {
        case 0x1a10a8u: goto label_1a10a8;
        default: break;
    }

    ctx->pc = 0x1a1078u;

label_1a1078:
    // 0x1a1078: 0x8f9085f4  lw          $s0, -0x7A0C($gp)
    ctx->pc = 0x1a1078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a107c:
    // 0x1a107c: 0x8e033ddc  lw          $v1, 0x3DDC($s0)
    ctx->pc = 0x1a107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15836)));
label_1a1080:
    // 0x1a1080: 0x8e023dd8  lw          $v0, 0x3DD8($s0)
    ctx->pc = 0x1a1080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15832)));
label_1a1084:
    // 0x1a1084: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_1a1088:
    if (ctx->pc == 0x1A1088u) {
        ctx->pc = 0x1A108Cu;
        goto label_1a108c;
    }
    ctx->pc = 0x1A1084u;
    {
        const bool branch_taken_0x1a1084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1084) {
            ctx->pc = 0x1A10C0u;
            return;
        }
    }
    ctx->pc = 0x1A108Cu;
label_1a108c:
    // 0x1a108c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a108cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a1090:
    // 0x1a1090: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a1094:
    // 0x1a1094: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x1a1094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_1a1098:
    // 0x1a1098: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a1098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a109c:
    // 0x1a109c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a109cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a10a0:
    // 0x1a10a0: 0x320f809  jalr        $t9
label_1a10a4:
    if (ctx->pc == 0x1A10A4u) {
        ctx->pc = 0x1A10A8u;
        goto label_1a10a8;
    }
    ctx->pc = 0x1A10A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A10A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A10A0u, 0x1A10A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A10A8u;
label_1a10a8:
    // 0x1a10a8: 0x8e023ddc  lw          $v0, 0x3DDC($s0)
    ctx->pc = 0x1a10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15836)));
label_1a10ac:
    // 0x1a10ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a10acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a10b0:
    // 0x1a10b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a10b4:
    // 0x1a10b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a10b8:
    // 0x1a10b8: 0x8c423cd8  lw          $v0, 0x3CD8($v0)
    ctx->pc = 0x1a10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_1a10bc:
    // 0x1a10bc: 0xa04301f9  sb          $v1, 0x1F9($v0)
    ctx->pc = 0x1a10bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 505), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a10c0u;
}
