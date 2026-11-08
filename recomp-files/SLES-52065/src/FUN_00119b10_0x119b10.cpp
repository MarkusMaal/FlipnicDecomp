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

// Function: FUN_00119b10
// Address: 0x119b10 - 0x119b84
void FUN_00119b10_0x119b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119b10_0x119b10");
#endif

    switch (ctx->pc) {
        case 0x119b10u: goto label_119b10;
        case 0x119b14u: goto label_119b14;
        case 0x119b18u: goto label_119b18;
        case 0x119b1cu: goto label_119b1c;
        case 0x119b20u: goto label_119b20;
        case 0x119b24u: goto label_119b24;
        case 0x119b28u: goto label_119b28;
        case 0x119b2cu: goto label_119b2c;
        case 0x119b30u: goto label_119b30;
        case 0x119b34u: goto label_119b34;
        case 0x119b38u: goto label_119b38;
        case 0x119b3cu: goto label_119b3c;
        case 0x119b40u: goto label_119b40;
        case 0x119b44u: goto label_119b44;
        case 0x119b48u: goto label_119b48;
        case 0x119b4cu: goto label_119b4c;
        case 0x119b50u: goto label_119b50;
        case 0x119b54u: goto label_119b54;
        case 0x119b58u: goto label_119b58;
        case 0x119b5cu: goto label_119b5c;
        case 0x119b60u: goto label_119b60;
        case 0x119b64u: goto label_119b64;
        case 0x119b68u: goto label_119b68;
        case 0x119b6cu: goto label_119b6c;
        case 0x119b70u: goto label_119b70;
        case 0x119b74u: goto label_119b74;
        case 0x119b78u: goto label_119b78;
        case 0x119b7cu: goto label_119b7c;
        case 0x119b80u: goto label_119b80;
        default: break;
    }

    ctx->pc = 0x119b10u;

label_119b10:
    // 0x119b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_119b14:
    // 0x119b14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_119b18:
    // 0x119b18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_119b1c:
    // 0x119b1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_119b20:
    // 0x119b20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x119b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_119b24:
    // 0x119b24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_119b28:
    // 0x119b28: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x119b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_119b2c:
    // 0x119b2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x119b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_119b30:
    // 0x119b30: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x119b30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_119b34:
    // 0x119b34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x119b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_119b38:
    // 0x119b38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119b3c:
    // 0x119b3c: 0xc04c6f0  jal         func_131BC0
label_119b40:
    if (ctx->pc == 0x119B40u) {
        ctx->pc = 0x119B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B3Cu;
        // 0x119b40: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119B44u;
        goto label_119b44;
    }
    ctx->pc = 0x119B3Cu;
    SET_GPR_U32(ctx, 31, 0x119B44u);
    ctx->pc = 0x119B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B3Cu;
    // 0x119b40: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x119B3Cu, 0x119B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B44u;
label_119b44:
    // 0x119b44: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
label_119b48:
    if (ctx->pc == 0x119B48u) {
        ctx->pc = 0x119B4Cu;
        goto label_119b4c;
    }
    ctx->pc = 0x119B44u;
    {
        const bool branch_taken_0x119b44 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x119b44) {
            ctx->pc = 0x119B6Cu;
            goto label_119b6c;
        }
    }
    ctx->pc = 0x119B4Cu;
label_119b4c:
    // 0x119b4c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x119b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_119b50:
    // 0x119b50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_119b54:
    // 0x119b54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x119b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_119b58:
    // 0x119b58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119b5c:
    // 0x119b5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119b60:
    // 0x119b60: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x119b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_119b64:
    // 0x119b64: 0x320f809  jalr        $t9
label_119b68:
    if (ctx->pc == 0x119B68u) {
        ctx->pc = 0x119B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B64u;
        // 0x119b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119B6Cu;
        goto label_119b6c;
    }
    ctx->pc = 0x119B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119B6Cu);
        ctx->pc = 0x119B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B64u;
        // 0x119b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119B64u, 0x119B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119B6Cu;
label_119b6c:
    // 0x119b6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_119b70:
    // 0x119b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x119b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_119b74:
    // 0x119b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119b78:
    // 0x119b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_119b7c:
    // 0x119b7c: 0x3e00008  jr          $ra
label_119b80:
    if (ctx->pc == 0x119B80u) {
        ctx->pc = 0x119B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B7Cu;
        // 0x119b80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119B84u;
        goto label_fallthrough_0x119b7c;
    }
    ctx->pc = 0x119B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B7Cu;
        // 0x119b80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x119b7c:
    ctx->pc = 0x119B84u;
}
