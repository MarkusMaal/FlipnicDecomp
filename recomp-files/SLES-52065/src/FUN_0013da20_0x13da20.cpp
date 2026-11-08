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

// Function: FUN_0013da20
// Address: 0x13da20 - 0x13da74
void FUN_0013da20_0x13da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013da20_0x13da20");
#endif

    switch (ctx->pc) {
        case 0x13da20u: goto label_13da20;
        case 0x13da24u: goto label_13da24;
        case 0x13da28u: goto label_13da28;
        case 0x13da2cu: goto label_13da2c;
        case 0x13da30u: goto label_13da30;
        case 0x13da34u: goto label_13da34;
        case 0x13da38u: goto label_13da38;
        case 0x13da3cu: goto label_13da3c;
        case 0x13da40u: goto label_13da40;
        case 0x13da44u: goto label_13da44;
        case 0x13da48u: goto label_13da48;
        case 0x13da4cu: goto label_13da4c;
        case 0x13da50u: goto label_13da50;
        case 0x13da54u: goto label_13da54;
        case 0x13da58u: goto label_13da58;
        case 0x13da5cu: goto label_13da5c;
        case 0x13da60u: goto label_13da60;
        case 0x13da64u: goto label_13da64;
        case 0x13da68u: goto label_13da68;
        case 0x13da6cu: goto label_13da6c;
        case 0x13da70u: goto label_13da70;
        default: break;
    }

    ctx->pc = 0x13da20u;

label_13da20:
    // 0x13da20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_13da24:
    // 0x13da24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13da28:
    // 0x13da28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13da28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13da2c:
    // 0x13da2c: 0x9083018a  lbu         $v1, 0x18A($a0)
    ctx->pc = 0x13da2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 394)));
label_13da30:
    // 0x13da30: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_13da34:
    if (ctx->pc == 0x13DA34u) {
        ctx->pc = 0x13DA38u;
        goto label_13da38;
    }
    ctx->pc = 0x13DA30u;
    {
        const bool branch_taken_0x13da30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13da30) {
            ctx->pc = 0x13DA60u;
            goto label_13da60;
        }
    }
    ctx->pc = 0x13DA38u;
label_13da38:
    // 0x13da38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13da38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13da3c:
    // 0x13da3c: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13da3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13da40:
    // 0x13da40: 0x320f809  jalr        $t9
label_13da44:
    if (ctx->pc == 0x13DA44u) {
        ctx->pc = 0x13DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA40u;
        // 0x13da44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DA48u;
        goto label_13da48;
    }
    ctx->pc = 0x13DA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DA48u);
        ctx->pc = 0x13DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA40u;
        // 0x13da44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DA40u, 0x13DA48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DA48u;
label_13da48:
    // 0x13da48: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x13da48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13da4c:
    // 0x13da4c: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x13da4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_13da50:
    // 0x13da50: 0x320f809  jalr        $t9
label_13da54:
    if (ctx->pc == 0x13DA54u) {
        ctx->pc = 0x13DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA50u;
        // 0x13da54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DA58u;
        goto label_13da58;
    }
    ctx->pc = 0x13DA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DA58u);
        ctx->pc = 0x13DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA50u;
        // 0x13da54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DA50u, 0x13DA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DA58u;
label_13da58:
    // 0x13da58: 0x10000004  b           . + 4 + (0x4 << 2)
label_13da5c:
    if (ctx->pc == 0x13DA5Cu) {
        ctx->pc = 0x13DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA58u;
        // 0x13da5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DA60u;
        goto label_13da60;
    }
    ctx->pc = 0x13DA58u;
    {
        const bool branch_taken_0x13da58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA58u;
        // 0x13da5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13da58) {
            ctx->pc = 0x13DA6Cu;
            goto label_13da6c;
        }
    }
    ctx->pc = 0x13DA60u;
label_13da60:
    // 0x13da60: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x13da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13da64:
    // 0x13da64: 0x0  nop
    ctx->pc = 0x13da64u;
    // NOP
label_13da68:
    // 0x13da68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13da68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13da6c:
    // 0x13da6c: 0x3e00008  jr          $ra
label_13da70:
    if (ctx->pc == 0x13DA70u) {
        ctx->pc = 0x13DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA6Cu;
        // 0x13da70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DA74u;
        goto label_fallthrough_0x13da6c;
    }
    ctx->pc = 0x13DA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA6Cu;
        // 0x13da70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13da6c:
    ctx->pc = 0x13DA74u;
}
