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

// Function: FUN_00192e80
// Address: 0x192e80 - 0x192ee0
void FUN_00192e80_0x192e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192e80_0x192e80");
#endif

    switch (ctx->pc) {
        case 0x192e80u: goto label_192e80;
        case 0x192e84u: goto label_192e84;
        case 0x192e88u: goto label_192e88;
        case 0x192e8cu: goto label_192e8c;
        case 0x192e90u: goto label_192e90;
        case 0x192e94u: goto label_192e94;
        case 0x192e98u: goto label_192e98;
        case 0x192e9cu: goto label_192e9c;
        case 0x192ea0u: goto label_192ea0;
        case 0x192ea4u: goto label_192ea4;
        case 0x192ea8u: goto label_192ea8;
        case 0x192eacu: goto label_192eac;
        case 0x192eb0u: goto label_192eb0;
        case 0x192eb4u: goto label_192eb4;
        case 0x192eb8u: goto label_192eb8;
        case 0x192ebcu: goto label_192ebc;
        case 0x192ec0u: goto label_192ec0;
        case 0x192ec4u: goto label_192ec4;
        case 0x192ec8u: goto label_192ec8;
        case 0x192eccu: goto label_192ecc;
        case 0x192ed0u: goto label_192ed0;
        case 0x192ed4u: goto label_192ed4;
        case 0x192ed8u: goto label_192ed8;
        case 0x192edcu: goto label_192edc;
        default: break;
    }

    ctx->pc = 0x192e80u;

label_192e80:
    // 0x192e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_192e84:
    // 0x192e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_192e88:
    // 0x192e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_192e8c:
    // 0x192e8c: 0x8f9085f4  lw          $s0, -0x7A0C($gp)
    ctx->pc = 0x192e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_192e90:
    // 0x192e90: 0x8e043ddc  lw          $a0, 0x3DDC($s0)
    ctx->pc = 0x192e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15836)));
label_192e94:
    // 0x192e94: 0x8e033dd8  lw          $v1, 0x3DD8($s0)
    ctx->pc = 0x192e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15832)));
label_192e98:
    // 0x192e98: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_192e9c:
    if (ctx->pc == 0x192E9Cu) {
        ctx->pc = 0x192EA0u;
        goto label_192ea0;
    }
    ctx->pc = 0x192E98u;
    {
        const bool branch_taken_0x192e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x192e98) {
            ctx->pc = 0x192ED0u;
            goto label_192ed0;
        }
    }
    ctx->pc = 0x192EA0u;
label_192ea0:
    // 0x192ea0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x192ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_192ea4:
    // 0x192ea4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x192ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_192ea8:
    // 0x192ea8: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x192ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_192eac:
    // 0x192eac: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x192eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_192eb0:
    // 0x192eb0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x192eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_192eb4:
    // 0x192eb4: 0x320f809  jalr        $t9
label_192eb8:
    if (ctx->pc == 0x192EB8u) {
        ctx->pc = 0x192EBCu;
        goto label_192ebc;
    }
    ctx->pc = 0x192EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x192EBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192EB4u, 0x192EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192EBCu;
label_192ebc:
    // 0x192ebc: 0x8e033ddc  lw          $v1, 0x3DDC($s0)
    ctx->pc = 0x192ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15836)));
label_192ec0:
    // 0x192ec0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_192ec4:
    // 0x192ec4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x192ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_192ec8:
    // 0x192ec8: 0x8c633cd8  lw          $v1, 0x3CD8($v1)
    ctx->pc = 0x192ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_192ecc:
    // 0x192ecc: 0xa06001f9  sb          $zero, 0x1F9($v1)
    ctx->pc = 0x192eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 505), (uint8_t)GPR_U32(ctx, 0));
label_192ed0:
    // 0x192ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_192ed4:
    // 0x192ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_192ed8:
    // 0x192ed8: 0x3e00008  jr          $ra
label_192edc:
    if (ctx->pc == 0x192EDCu) {
        ctx->pc = 0x192EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192ED8u;
        // 0x192edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192EE0u;
        goto label_fallthrough_0x192ed8;
    }
    ctx->pc = 0x192ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192ED8u;
        // 0x192edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x192ed8:
    ctx->pc = 0x192EE0u;
}
