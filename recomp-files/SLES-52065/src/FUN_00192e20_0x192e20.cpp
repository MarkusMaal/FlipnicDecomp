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

// Function: FUN_00192e20
// Address: 0x192e20 - 0x192e80
void FUN_00192e20_0x192e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192e20_0x192e20");
#endif

    switch (ctx->pc) {
        case 0x192e20u: goto label_192e20;
        case 0x192e24u: goto label_192e24;
        case 0x192e28u: goto label_192e28;
        case 0x192e2cu: goto label_192e2c;
        case 0x192e30u: goto label_192e30;
        case 0x192e34u: goto label_192e34;
        case 0x192e38u: goto label_192e38;
        case 0x192e3cu: goto label_192e3c;
        case 0x192e40u: goto label_192e40;
        case 0x192e44u: goto label_192e44;
        case 0x192e48u: goto label_192e48;
        case 0x192e4cu: goto label_192e4c;
        case 0x192e50u: goto label_192e50;
        case 0x192e54u: goto label_192e54;
        case 0x192e58u: goto label_192e58;
        case 0x192e5cu: goto label_192e5c;
        case 0x192e60u: goto label_192e60;
        case 0x192e64u: goto label_192e64;
        case 0x192e68u: goto label_192e68;
        case 0x192e6cu: goto label_192e6c;
        case 0x192e70u: goto label_192e70;
        case 0x192e74u: goto label_192e74;
        case 0x192e78u: goto label_192e78;
        case 0x192e7cu: goto label_192e7c;
        default: break;
    }

    ctx->pc = 0x192e20u;

label_192e20:
    // 0x192e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_192e24:
    // 0x192e24: 0x2cc10011  sltiu       $at, $a2, 0x11
    ctx->pc = 0x192e24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_192e28:
    // 0x192e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_192e2c:
    // 0x192e2c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x192e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_192e30:
    // 0x192e30: 0x8c833ddc  lw          $v1, 0x3DDC($a0)
    ctx->pc = 0x192e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15836)));
label_192e34:
    // 0x192e34: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x192e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_192e38:
    // 0x192e38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_192e3c:
    // 0x192e3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x192e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_192e40:
    // 0x192e40: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_192e44:
    if (ctx->pc == 0x192E44u) {
        ctx->pc = 0x192E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E40u;
        // 0x192e44: 0x8c643cd8  lw          $a0, 0x3CD8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192E48u;
        goto label_192e48;
    }
    ctx->pc = 0x192E40u;
    {
        const bool branch_taken_0x192e40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E40u;
        // 0x192e44: 0x8c643cd8  lw          $a0, 0x3CD8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e40) {
            ctx->pc = 0x192E74u;
            goto label_192e74;
        }
    }
    ctx->pc = 0x192E48u;
label_192e48:
    // 0x192e48: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x192e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_192e4c:
    // 0x192e4c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x192e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_192e50:
    // 0x192e50: 0x24a5fee0  addiu       $a1, $a1, -0x120
    ctx->pc = 0x192e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967008));
label_192e54:
    // 0x192e54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x192e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_192e58:
    // 0x192e58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x192e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_192e5c:
    // 0x192e5c: 0x600008  jr          $v1
label_192e60:
    if (ctx->pc == 0x192E60u) {
        ctx->pc = 0x192E64u;
        goto label_192e64;
    }
    ctx->pc = 0x192E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192E64u: goto label_192e64;
            case 0x192E74u: goto label_192e74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192E5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x192E64u;
label_192e64:
    // 0x192e64: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x192e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_192e68:
    // 0x192e68: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x192e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_192e6c:
    // 0x192e6c: 0x320f809  jalr        $t9
label_192e70:
    if (ctx->pc == 0x192E70u) {
        ctx->pc = 0x192E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E6Cu;
        // 0x192e70: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192E74u;
        goto label_192e74;
    }
    ctx->pc = 0x192E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x192E74u);
        ctx->pc = 0x192E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E6Cu;
        // 0x192e70: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192E6Cu, 0x192E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192E74u;
label_192e74:
    // 0x192e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192e78:
    // 0x192e78: 0x3e00008  jr          $ra
label_192e7c:
    if (ctx->pc == 0x192E7Cu) {
        ctx->pc = 0x192E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E78u;
        // 0x192e7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192E80u;
        goto label_fallthrough_0x192e78;
    }
    ctx->pc = 0x192E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E78u;
        // 0x192e7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x192e78:
    ctx->pc = 0x192E80u;
}
