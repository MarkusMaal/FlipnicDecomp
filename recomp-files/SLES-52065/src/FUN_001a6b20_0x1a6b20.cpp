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

// Function: FUN_001a6b20
// Address: 0x1a6b20 - 0x1a6b98
void FUN_001a6b20_0x1a6b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6b20_0x1a6b20");
#endif

    switch (ctx->pc) {
        case 0x1a6b20u: goto label_1a6b20;
        case 0x1a6b24u: goto label_1a6b24;
        case 0x1a6b28u: goto label_1a6b28;
        case 0x1a6b2cu: goto label_1a6b2c;
        case 0x1a6b30u: goto label_1a6b30;
        case 0x1a6b34u: goto label_1a6b34;
        case 0x1a6b38u: goto label_1a6b38;
        case 0x1a6b3cu: goto label_1a6b3c;
        case 0x1a6b40u: goto label_1a6b40;
        case 0x1a6b44u: goto label_1a6b44;
        case 0x1a6b48u: goto label_1a6b48;
        case 0x1a6b4cu: goto label_1a6b4c;
        case 0x1a6b50u: goto label_1a6b50;
        case 0x1a6b54u: goto label_1a6b54;
        case 0x1a6b58u: goto label_1a6b58;
        case 0x1a6b5cu: goto label_1a6b5c;
        case 0x1a6b60u: goto label_1a6b60;
        case 0x1a6b64u: goto label_1a6b64;
        case 0x1a6b68u: goto label_1a6b68;
        case 0x1a6b6cu: goto label_1a6b6c;
        case 0x1a6b70u: goto label_1a6b70;
        case 0x1a6b74u: goto label_1a6b74;
        case 0x1a6b78u: goto label_1a6b78;
        case 0x1a6b7cu: goto label_1a6b7c;
        case 0x1a6b80u: goto label_1a6b80;
        case 0x1a6b84u: goto label_1a6b84;
        case 0x1a6b88u: goto label_1a6b88;
        case 0x1a6b8cu: goto label_1a6b8c;
        case 0x1a6b90u: goto label_1a6b90;
        case 0x1a6b94u: goto label_1a6b94;
        default: break;
    }

    ctx->pc = 0x1a6b20u;

label_1a6b20:
    // 0x1a6b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a6b24:
    // 0x1a6b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a6b28:
    // 0x1a6b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a6b2c:
    // 0x1a6b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a6b30:
    // 0x1a6b30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b34:
    // 0x1a6b34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6b38:
    // 0x1a6b38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a6b3c:
    if (ctx->pc == 0x1A6B3Cu) {
        ctx->pc = 0x1A6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B38u;
        // 0x1a6b3c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B40u;
        goto label_1a6b40;
    }
    ctx->pc = 0x1A6B38u;
    {
        const bool branch_taken_0x1a6b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B38u;
        // 0x1a6b3c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b38) {
            ctx->pc = 0x1A6B48u;
            goto label_1a6b48;
        }
    }
    ctx->pc = 0x1A6B40u;
label_1a6b40:
    // 0x1a6b40: 0xc069ae8  jal         func_1A6BA0
label_1a6b44:
    if (ctx->pc == 0x1A6B44u) {
        ctx->pc = 0x1A6B48u;
        goto label_1a6b48;
    }
    ctx->pc = 0x1A6B40u;
    SET_GPR_U32(ctx, 31, 0x1A6B48u);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1A6B40u, 0x1A6B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B48u;
label_1a6b48:
    // 0x1a6b48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a6b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6b4c:
    // 0x1a6b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b50:
    // 0x1a6b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b54:
    // 0x1a6b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a6b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b58:
    // 0x1a6b58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a6b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6b5c:
    // 0x1a6b5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a6b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b60:
    // 0x1a6b60: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a6b60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a6b64:
    // 0x1a6b64: 0xc04bce0  jal         func_12F380
label_1a6b68:
    if (ctx->pc == 0x1A6B68u) {
        ctx->pc = 0x1A6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B64u;
        // 0x1a6b68: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B6Cu;
        goto label_1a6b6c;
    }
    ctx->pc = 0x1A6B64u;
    SET_GPR_U32(ctx, 31, 0x1A6B6Cu);
    ctx->pc = 0x1A6B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B64u;
    // 0x1a6b68: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1A6B64u, 0x1A6B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B6Cu;
label_1a6b6c:
    // 0x1a6b6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a6b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1a6b70:
    // 0x1a6b70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a6b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a6b74:
    // 0x1a6b74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6b74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6b78:
    // 0x1a6b78: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a6b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a6b7c:
    // 0x1a6b7c: 0x320f809  jalr        $t9
label_1a6b80:
    if (ctx->pc == 0x1A6B80u) {
        ctx->pc = 0x1A6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B7Cu;
        // 0x1a6b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B84u;
        goto label_1a6b84;
    }
    ctx->pc = 0x1A6B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6B84u);
        ctx->pc = 0x1A6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B7Cu;
        // 0x1a6b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6B7Cu, 0x1A6B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6B84u;
label_1a6b84:
    // 0x1a6b84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6b88:
    // 0x1a6b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6b8c:
    // 0x1a6b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6b90:
    // 0x1a6b90: 0x3e00008  jr          $ra
label_1a6b94:
    if (ctx->pc == 0x1A6B94u) {
        ctx->pc = 0x1A6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B90u;
        // 0x1a6b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B98u;
        goto label_fallthrough_0x1a6b90;
    }
    ctx->pc = 0x1A6B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B90u;
        // 0x1a6b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6b90:
    ctx->pc = 0x1A6B98u;
}
