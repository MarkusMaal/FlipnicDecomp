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

// Function: caseD_3
// Address: 0x191274 - 0x1912b0
void caseD_3_0x191274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x191274");
#endif

    switch (ctx->pc) {
        case 0x191274u: goto label_191274;
        case 0x191278u: goto label_191278;
        case 0x19127cu: goto label_19127c;
        case 0x191280u: goto label_191280;
        case 0x191284u: goto label_191284;
        case 0x191288u: goto label_191288;
        case 0x19128cu: goto label_19128c;
        case 0x191290u: goto label_191290;
        case 0x191294u: goto label_191294;
        case 0x191298u: goto label_191298;
        case 0x19129cu: goto label_19129c;
        case 0x1912a0u: goto label_1912a0;
        case 0x1912a4u: goto label_1912a4;
        case 0x1912a8u: goto label_1912a8;
        case 0x1912acu: goto label_1912ac;
        default: break;
    }

    ctx->pc = 0x191274u;

label_191274:
    // 0x191274: 0x8e300030  lw          $s0, 0x30($s1)
    ctx->pc = 0x191274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_191278:
    // 0x191278: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_19127c:
    if (ctx->pc == 0x19127Cu) {
        ctx->pc = 0x191280u;
        goto label_191280;
    }
    ctx->pc = 0x191278u;
    {
        const bool branch_taken_0x191278 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x191278) {
            ctx->pc = 0x1912B0u;
            return;
        }
    }
    ctx->pc = 0x191280u;
label_191280:
    // 0x191280: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191284:
    // 0x191284: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191288:
    // 0x191288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19128c:
    // 0x19128c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x19128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_191290:
    // 0x191290: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x191290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191294:
    // 0x191294: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191298:
    // 0x191298: 0x320f809  jalr        $t9
label_19129c:
    if (ctx->pc == 0x19129Cu) {
        ctx->pc = 0x1912A0u;
        goto label_1912a0;
    }
    ctx->pc = 0x191298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1912A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191298u, 0x1912A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1912A0u;
label_1912a0:
    // 0x1912a0: 0x104000fd  beqz        $v0, . + 4 + (0xFD << 2)
label_1912a4:
    if (ctx->pc == 0x1912A4u) {
        ctx->pc = 0x1912A8u;
        goto label_1912a8;
    }
    ctx->pc = 0x1912A0u;
    {
        const bool branch_taken_0x1912a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1912a0) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x1912A8u;
label_1912a8:
    // 0x1912a8: 0x100000fc  b           . + 4 + (0xFC << 2)
label_1912ac:
    if (ctx->pc == 0x1912ACu) {
        ctx->pc = 0x1912ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912A8u;
        // 0x1912ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912B0u;
        goto label_fallthrough_0x1912a8;
    }
    ctx->pc = 0x1912A8u;
    {
        const bool branch_taken_0x1912a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1912ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912A8u;
        // 0x1912ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912a8) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
label_fallthrough_0x1912a8:
    ctx->pc = 0x1912B0u;
}
