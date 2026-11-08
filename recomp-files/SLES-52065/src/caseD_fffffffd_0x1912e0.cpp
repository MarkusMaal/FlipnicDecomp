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

// Function: caseD_fffffffd
// Address: 0x1912e0 - 0x19131c
void caseD_fffffffd_0x1912e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_fffffffd_0x1912e0");
#endif

    switch (ctx->pc) {
        case 0x1912e0u: goto label_1912e0;
        case 0x1912e4u: goto label_1912e4;
        case 0x1912e8u: goto label_1912e8;
        case 0x1912ecu: goto label_1912ec;
        case 0x1912f0u: goto label_1912f0;
        case 0x1912f4u: goto label_1912f4;
        case 0x1912f8u: goto label_1912f8;
        case 0x1912fcu: goto label_1912fc;
        case 0x191300u: goto label_191300;
        case 0x191304u: goto label_191304;
        case 0x191308u: goto label_191308;
        case 0x19130cu: goto label_19130c;
        case 0x191310u: goto label_191310;
        case 0x191314u: goto label_191314;
        case 0x191318u: goto label_191318;
        default: break;
    }

    ctx->pc = 0x1912e0u;

label_1912e0:
    // 0x1912e0: 0x8e300030  lw          $s0, 0x30($s1)
    ctx->pc = 0x1912e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1912e4:
    // 0x1912e4: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_1912e8:
    if (ctx->pc == 0x1912E8u) {
        ctx->pc = 0x1912ECu;
        goto label_1912ec;
    }
    ctx->pc = 0x1912E4u;
    {
        const bool branch_taken_0x1912e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1912e4) {
            ctx->pc = 0x19131Cu;
            return;
        }
    }
    ctx->pc = 0x1912ECu;
label_1912ec:
    // 0x1912ec: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1912ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1912f0:
    // 0x1912f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1912f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1912f4:
    // 0x1912f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1912f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1912f8:
    // 0x1912f8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1912f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1912fc:
    // 0x1912fc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1912fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191300:
    // 0x191300: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191304:
    // 0x191304: 0x320f809  jalr        $t9
label_191308:
    if (ctx->pc == 0x191308u) {
        ctx->pc = 0x19130Cu;
        goto label_19130c;
    }
    ctx->pc = 0x191304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19130Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191304u, 0x19130Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19130Cu;
label_19130c:
    // 0x19130c: 0x144000e2  bnez        $v0, . + 4 + (0xE2 << 2)
label_191310:
    if (ctx->pc == 0x191310u) {
        ctx->pc = 0x191314u;
        goto label_191314;
    }
    ctx->pc = 0x19130Cu;
    {
        const bool branch_taken_0x19130c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19130c) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x191314u;
label_191314:
    // 0x191314: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_191318:
    if (ctx->pc == 0x191318u) {
        ctx->pc = 0x191318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191314u;
        // 0x191318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19131Cu;
        goto label_fallthrough_0x191314;
    }
    ctx->pc = 0x191314u;
    {
        const bool branch_taken_0x191314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191314u;
        // 0x191318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191314) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
label_fallthrough_0x191314:
    ctx->pc = 0x19131Cu;
}
