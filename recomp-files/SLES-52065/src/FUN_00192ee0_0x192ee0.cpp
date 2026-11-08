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

// Function: FUN_00192ee0
// Address: 0x192ee0 - 0x192f44
void FUN_00192ee0_0x192ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192ee0_0x192ee0");
#endif

    switch (ctx->pc) {
        case 0x192ee0u: goto label_192ee0;
        case 0x192ee4u: goto label_192ee4;
        case 0x192ee8u: goto label_192ee8;
        case 0x192eecu: goto label_192eec;
        case 0x192ef0u: goto label_192ef0;
        case 0x192ef4u: goto label_192ef4;
        case 0x192ef8u: goto label_192ef8;
        case 0x192efcu: goto label_192efc;
        case 0x192f00u: goto label_192f00;
        case 0x192f04u: goto label_192f04;
        case 0x192f08u: goto label_192f08;
        case 0x192f0cu: goto label_192f0c;
        case 0x192f10u: goto label_192f10;
        case 0x192f14u: goto label_192f14;
        case 0x192f18u: goto label_192f18;
        case 0x192f1cu: goto label_192f1c;
        case 0x192f20u: goto label_192f20;
        case 0x192f24u: goto label_192f24;
        case 0x192f28u: goto label_192f28;
        case 0x192f2cu: goto label_192f2c;
        case 0x192f30u: goto label_192f30;
        case 0x192f34u: goto label_192f34;
        case 0x192f38u: goto label_192f38;
        case 0x192f3cu: goto label_192f3c;
        case 0x192f40u: goto label_192f40;
        default: break;
    }

    ctx->pc = 0x192ee0u;

label_192ee0:
    // 0x192ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_192ee4:
    // 0x192ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_192ee8:
    // 0x192ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_192eec:
    // 0x192eec: 0x8f9085f4  lw          $s0, -0x7A0C($gp)
    ctx->pc = 0x192eecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_192ef0:
    // 0x192ef0: 0x8e043ddc  lw          $a0, 0x3DDC($s0)
    ctx->pc = 0x192ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15836)));
label_192ef4:
    // 0x192ef4: 0x8e033dd8  lw          $v1, 0x3DD8($s0)
    ctx->pc = 0x192ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15832)));
label_192ef8:
    // 0x192ef8: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_192efc:
    if (ctx->pc == 0x192EFCu) {
        ctx->pc = 0x192F00u;
        goto label_192f00;
    }
    ctx->pc = 0x192EF8u;
    {
        const bool branch_taken_0x192ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x192ef8) {
            ctx->pc = 0x192F34u;
            goto label_192f34;
        }
    }
    ctx->pc = 0x192F00u;
label_192f00:
    // 0x192f00: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x192f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_192f04:
    // 0x192f04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x192f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_192f08:
    // 0x192f08: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x192f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_192f0c:
    // 0x192f0c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x192f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_192f10:
    // 0x192f10: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x192f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_192f14:
    // 0x192f14: 0x320f809  jalr        $t9
label_192f18:
    if (ctx->pc == 0x192F18u) {
        ctx->pc = 0x192F1Cu;
        goto label_192f1c;
    }
    ctx->pc = 0x192F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x192F1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192F14u, 0x192F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192F1Cu;
label_192f1c:
    // 0x192f1c: 0x8e033ddc  lw          $v1, 0x3DDC($s0)
    ctx->pc = 0x192f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15836)));
label_192f20:
    // 0x192f20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x192f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192f24:
    // 0x192f24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_192f28:
    // 0x192f28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x192f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_192f2c:
    // 0x192f2c: 0x8c633cd8  lw          $v1, 0x3CD8($v1)
    ctx->pc = 0x192f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_192f30:
    // 0x192f30: 0xa06401f9  sb          $a0, 0x1F9($v1)
    ctx->pc = 0x192f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 505), (uint8_t)GPR_U32(ctx, 4));
label_192f34:
    // 0x192f34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_192f38:
    // 0x192f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_192f3c:
    // 0x192f3c: 0x3e00008  jr          $ra
label_192f40:
    if (ctx->pc == 0x192F40u) {
        ctx->pc = 0x192F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F3Cu;
        // 0x192f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192F44u;
        goto label_fallthrough_0x192f3c;
    }
    ctx->pc = 0x192F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F3Cu;
        // 0x192f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x192f3c:
    ctx->pc = 0x192F44u;
}
