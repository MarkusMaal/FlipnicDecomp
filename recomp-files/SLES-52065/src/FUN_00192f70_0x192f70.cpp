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

// Function: FUN_00192f70
// Address: 0x192f70 - 0x192fb8
void FUN_00192f70_0x192f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192f70_0x192f70");
#endif

    switch (ctx->pc) {
        case 0x192f70u: goto label_192f70;
        case 0x192f74u: goto label_192f74;
        case 0x192f78u: goto label_192f78;
        case 0x192f7cu: goto label_192f7c;
        case 0x192f80u: goto label_192f80;
        case 0x192f84u: goto label_192f84;
        case 0x192f88u: goto label_192f88;
        case 0x192f8cu: goto label_192f8c;
        case 0x192f90u: goto label_192f90;
        case 0x192f94u: goto label_192f94;
        case 0x192f98u: goto label_192f98;
        case 0x192f9cu: goto label_192f9c;
        case 0x192fa0u: goto label_192fa0;
        case 0x192fa4u: goto label_192fa4;
        case 0x192fa8u: goto label_192fa8;
        case 0x192facu: goto label_192fac;
        case 0x192fb0u: goto label_192fb0;
        case 0x192fb4u: goto label_192fb4;
        default: break;
    }

    ctx->pc = 0x192f70u;

label_192f70:
    // 0x192f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_192f74:
    // 0x192f74: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x192f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_192f78:
    // 0x192f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_192f7c:
    // 0x192f7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x192f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_192f80:
    // 0x192f80: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x192f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_192f84:
    // 0x192f84: 0xc057040  jal         func_15C100
label_192f88:
    if (ctx->pc == 0x192F88u) {
        ctx->pc = 0x192F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F84u;
        // 0x192f88: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192F8Cu;
        goto label_192f8c;
    }
    ctx->pc = 0x192F84u;
    SET_GPR_U32(ctx, 31, 0x192F8Cu);
    ctx->pc = 0x192F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F84u;
    // 0x192f88: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x192F84u, 0x192F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192F8Cu;
label_192f8c:
    // 0x192f8c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x192f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_192f90:
    // 0x192f90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_192f94:
    // 0x192f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_192f98:
    // 0x192f98: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x192f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_192f9c:
    // 0x192f9c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x192f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_192fa0:
    // 0x192fa0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x192fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_192fa4:
    // 0x192fa4: 0x320f809  jalr        $t9
label_192fa8:
    if (ctx->pc == 0x192FA8u) {
        ctx->pc = 0x192FACu;
        goto label_192fac;
    }
    ctx->pc = 0x192FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x192FACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192FA4u, 0x192FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192FACu;
label_192fac:
    // 0x192fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192fb0:
    // 0x192fb0: 0x3e00008  jr          $ra
label_192fb4:
    if (ctx->pc == 0x192FB4u) {
        ctx->pc = 0x192FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192FB0u;
        // 0x192fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192FB8u;
        goto label_fallthrough_0x192fb0;
    }
    ctx->pc = 0x192FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192FB0u;
        // 0x192fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x192fb0:
    ctx->pc = 0x192FB8u;
}
