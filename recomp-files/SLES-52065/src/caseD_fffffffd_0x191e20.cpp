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
// Address: 0x191e20 - 0x191e6c
void caseD_fffffffd_0x191e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_fffffffd_0x191e20");
#endif

    switch (ctx->pc) {
        case 0x191e20u: goto label_191e20;
        case 0x191e24u: goto label_191e24;
        case 0x191e28u: goto label_191e28;
        case 0x191e2cu: goto label_191e2c;
        case 0x191e30u: goto label_191e30;
        case 0x191e34u: goto label_191e34;
        case 0x191e38u: goto label_191e38;
        case 0x191e3cu: goto label_191e3c;
        case 0x191e40u: goto label_191e40;
        case 0x191e44u: goto label_191e44;
        case 0x191e48u: goto label_191e48;
        case 0x191e4cu: goto label_191e4c;
        case 0x191e50u: goto label_191e50;
        case 0x191e54u: goto label_191e54;
        case 0x191e58u: goto label_191e58;
        case 0x191e5cu: goto label_191e5c;
        case 0x191e60u: goto label_191e60;
        case 0x191e64u: goto label_191e64;
        case 0x191e68u: goto label_191e68;
        default: break;
    }

    ctx->pc = 0x191e20u;

label_191e20:
    // 0x191e20: 0x8cd20030  lw          $s2, 0x30($a2)
    ctx->pc = 0x191e20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_191e24:
    // 0x191e24: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
label_191e28:
    if (ctx->pc == 0x191E28u) {
        ctx->pc = 0x191E2Cu;
        goto label_191e2c;
    }
    ctx->pc = 0x191E24u;
    {
        const bool branch_taken_0x191e24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x191e24) {
            ctx->pc = 0x191E80u;
            return;
        }
    }
    ctx->pc = 0x191E2Cu;
label_191e2c:
    // 0x191e2c: 0x8c420450  lw          $v0, 0x450($v0)
    ctx->pc = 0x191e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_191e30:
    // 0x191e30: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191e34:
    // 0x191e34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191e38:
    // 0x191e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191e3c:
    // 0x191e3c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x191e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_191e40:
    // 0x191e40: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x191e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191e44:
    // 0x191e44: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191e48:
    // 0x191e48: 0x320f809  jalr        $t9
label_191e4c:
    if (ctx->pc == 0x191E4Cu) {
        ctx->pc = 0x191E50u;
        goto label_191e50;
    }
    ctx->pc = 0x191E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x191E50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191E48u, 0x191E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191E50u;
label_191e50:
    // 0x191e50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_191e54:
    if (ctx->pc == 0x191E54u) {
        ctx->pc = 0x191E58u;
        goto label_191e58;
    }
    ctx->pc = 0x191E50u;
    {
        const bool branch_taken_0x191e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191e50) {
            ctx->pc = 0x191E6Cu;
            return;
        }
    }
    ctx->pc = 0x191E58u;
label_191e58:
    // 0x191e58: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191e5c:
    // 0x191e5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191e60:
    // 0x191e60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191e64:
    // 0x191e64: 0x1000012f  b           . + 4 + (0x12F << 2)
label_191e68:
    if (ctx->pc == 0x191E68u) {
        ctx->pc = 0x191E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E64u;
        // 0x191e68: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E6Cu;
        goto label_fallthrough_0x191e64;
    }
    ctx->pc = 0x191E64u;
    {
        const bool branch_taken_0x191e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E64u;
        // 0x191e68: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e64) {
            ctx->pc = 0x192324u;
            return;
        }
    }
label_fallthrough_0x191e64:
    ctx->pc = 0x191E6Cu;
}
