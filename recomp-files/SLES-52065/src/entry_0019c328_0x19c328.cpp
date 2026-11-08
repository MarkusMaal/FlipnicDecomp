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

// Function: entry_0019c328
// Address: 0x19c328 - 0x19c380
void entry_0019c328_0x19c328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c328_0x19c328");
#endif

    switch (ctx->pc) {
        case 0x19c330u: goto label_19c330;
        default: break;
    }

    ctx->pc = 0x19c328u;

label_19c328:
    // 0x19c328: 0xc067f08  jal         func_19FC20
label_19c32c:
    if (ctx->pc == 0x19C32Cu) {
        ctx->pc = 0x19C330u;
        goto label_19c330;
    }
    ctx->pc = 0x19C328u;
    SET_GPR_U32(ctx, 31, 0x19C330u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19C328u, 0x19C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C330u;
label_19c330:
    // 0x19c330: 0xae220904  sw          $v0, 0x904($s1)
    ctx->pc = 0x19c330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2308), GPR_U32(ctx, 2));
label_19c334:
    // 0x19c334: 0x8e220904  lw          $v0, 0x904($s1)
    ctx->pc = 0x19c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2308)));
label_19c338:
    // 0x19c338: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_19c33c:
    if (ctx->pc == 0x19C33Cu) {
        ctx->pc = 0x19C340u;
        goto label_19c340;
    }
    ctx->pc = 0x19C338u;
    {
        const bool branch_taken_0x19c338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c338) {
            ctx->pc = 0x19C3A0u;
            return;
        }
    }
    ctx->pc = 0x19C340u;
label_19c340:
    // 0x19c340: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x19c340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_19c344:
    // 0x19c344: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19c348:
    // 0x19c348: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_19c34c:
    if (ctx->pc == 0x19C34Cu) {
        ctx->pc = 0x19C350u;
        goto label_19c350;
    }
    ctx->pc = 0x19C348u;
    {
        const bool branch_taken_0x19c348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c348) {
            ctx->pc = 0x19C3A0u;
            return;
        }
    }
    ctx->pc = 0x19C350u;
label_19c350:
    // 0x19c350: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19c350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19c354:
    // 0x19c354: 0x8c833ddc  lw          $v1, 0x3DDC($a0)
    ctx->pc = 0x19c354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15836)));
label_19c358:
    // 0x19c358: 0x8c823dd8  lw          $v0, 0x3DD8($a0)
    ctx->pc = 0x19c358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15832)));
label_19c35c:
    // 0x19c35c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_19c360:
    if (ctx->pc == 0x19C360u) {
        ctx->pc = 0x19C364u;
        goto label_19c364;
    }
    ctx->pc = 0x19C35Cu;
    {
        const bool branch_taken_0x19c35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c35c) {
            ctx->pc = 0x19C380u;
            return;
        }
    }
    ctx->pc = 0x19C364u;
label_19c364:
    // 0x19c364: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19c364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c368:
    // 0x19c368: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19c36c:
    // 0x19c36c: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x19c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_19c370:
    // 0x19c370: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x19c370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19c374:
    // 0x19c374: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x19c374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_19c378:
    // 0x19c378: 0x320f809  jalr        $t9
label_19c37c:
    if (ctx->pc == 0x19C37Cu) {
        ctx->pc = 0x19C380u;
        goto label_fallthrough_0x19c378;
    }
    ctx->pc = 0x19C378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C380u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C378u, 0x19C380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x19c378:
    ctx->pc = 0x19C380u;
}
