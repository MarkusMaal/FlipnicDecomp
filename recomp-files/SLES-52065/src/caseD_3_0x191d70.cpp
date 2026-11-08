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
// Address: 0x191d70 - 0x191dbc
void caseD_3_0x191d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x191d70");
#endif

    switch (ctx->pc) {
        case 0x191d70u: goto label_191d70;
        case 0x191d74u: goto label_191d74;
        case 0x191d78u: goto label_191d78;
        case 0x191d7cu: goto label_191d7c;
        case 0x191d80u: goto label_191d80;
        case 0x191d84u: goto label_191d84;
        case 0x191d88u: goto label_191d88;
        case 0x191d8cu: goto label_191d8c;
        case 0x191d90u: goto label_191d90;
        case 0x191d94u: goto label_191d94;
        case 0x191d98u: goto label_191d98;
        case 0x191d9cu: goto label_191d9c;
        case 0x191da0u: goto label_191da0;
        case 0x191da4u: goto label_191da4;
        case 0x191da8u: goto label_191da8;
        case 0x191dacu: goto label_191dac;
        case 0x191db0u: goto label_191db0;
        case 0x191db4u: goto label_191db4;
        case 0x191db8u: goto label_191db8;
        default: break;
    }

    ctx->pc = 0x191d70u;

label_191d70:
    // 0x191d70: 0x8cd20030  lw          $s2, 0x30($a2)
    ctx->pc = 0x191d70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_191d74:
    // 0x191d74: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
label_191d78:
    if (ctx->pc == 0x191D78u) {
        ctx->pc = 0x191D7Cu;
        goto label_191d7c;
    }
    ctx->pc = 0x191D74u;
    {
        const bool branch_taken_0x191d74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x191d74) {
            ctx->pc = 0x191DD0u;
            return;
        }
    }
    ctx->pc = 0x191D7Cu;
label_191d7c:
    // 0x191d7c: 0x8c420450  lw          $v0, 0x450($v0)
    ctx->pc = 0x191d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_191d80:
    // 0x191d80: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191d84:
    // 0x191d84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191d88:
    // 0x191d88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191d8c:
    // 0x191d8c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x191d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_191d90:
    // 0x191d90: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x191d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191d94:
    // 0x191d94: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191d98:
    // 0x191d98: 0x320f809  jalr        $t9
label_191d9c:
    if (ctx->pc == 0x191D9Cu) {
        ctx->pc = 0x191DA0u;
        goto label_191da0;
    }
    ctx->pc = 0x191D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x191DA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191D98u, 0x191DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191DA0u;
label_191da0:
    // 0x191da0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_191da4:
    if (ctx->pc == 0x191DA4u) {
        ctx->pc = 0x191DA8u;
        goto label_191da8;
    }
    ctx->pc = 0x191DA0u;
    {
        const bool branch_taken_0x191da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191da0) {
            ctx->pc = 0x191DBCu;
            return;
        }
    }
    ctx->pc = 0x191DA8u;
label_191da8:
    // 0x191da8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191dac:
    // 0x191dac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191db0:
    // 0x191db0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191db4:
    // 0x191db4: 0x1000015b  b           . + 4 + (0x15B << 2)
label_191db8:
    if (ctx->pc == 0x191DB8u) {
        ctx->pc = 0x191DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DB4u;
        // 0x191db8: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191DBCu;
        goto label_fallthrough_0x191db4;
    }
    ctx->pc = 0x191DB4u;
    {
        const bool branch_taken_0x191db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DB4u;
        // 0x191db8: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191db4) {
            ctx->pc = 0x192324u;
            return;
        }
    }
label_fallthrough_0x191db4:
    ctx->pc = 0x191DBCu;
}
