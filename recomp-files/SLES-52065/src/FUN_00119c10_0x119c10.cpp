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

// Function: FUN_00119c10
// Address: 0x119c10 - 0x119c84
void FUN_00119c10_0x119c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119c10_0x119c10");
#endif

    switch (ctx->pc) {
        case 0x119c10u: goto label_119c10;
        case 0x119c14u: goto label_119c14;
        case 0x119c18u: goto label_119c18;
        case 0x119c1cu: goto label_119c1c;
        case 0x119c20u: goto label_119c20;
        case 0x119c24u: goto label_119c24;
        case 0x119c28u: goto label_119c28;
        case 0x119c2cu: goto label_119c2c;
        case 0x119c30u: goto label_119c30;
        case 0x119c34u: goto label_119c34;
        case 0x119c38u: goto label_119c38;
        case 0x119c3cu: goto label_119c3c;
        case 0x119c40u: goto label_119c40;
        case 0x119c44u: goto label_119c44;
        case 0x119c48u: goto label_119c48;
        case 0x119c4cu: goto label_119c4c;
        case 0x119c50u: goto label_119c50;
        case 0x119c54u: goto label_119c54;
        case 0x119c58u: goto label_119c58;
        case 0x119c5cu: goto label_119c5c;
        case 0x119c60u: goto label_119c60;
        case 0x119c64u: goto label_119c64;
        case 0x119c68u: goto label_119c68;
        case 0x119c6cu: goto label_119c6c;
        case 0x119c70u: goto label_119c70;
        case 0x119c74u: goto label_119c74;
        case 0x119c78u: goto label_119c78;
        case 0x119c7cu: goto label_119c7c;
        case 0x119c80u: goto label_119c80;
        default: break;
    }

    ctx->pc = 0x119c10u;

label_119c10:
    // 0x119c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_119c14:
    // 0x119c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_119c18:
    // 0x119c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_119c1c:
    // 0x119c1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_119c20:
    // 0x119c20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x119c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_119c24:
    // 0x119c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_119c28:
    // 0x119c28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x119c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_119c2c:
    // 0x119c2c: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
label_119c30:
    if (ctx->pc == 0x119C30u) {
        ctx->pc = 0x119C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C2Cu;
        // 0x119c30: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119C34u;
        goto label_119c34;
    }
    ctx->pc = 0x119C2Cu;
    {
        const bool branch_taken_0x119c2c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x119C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C2Cu;
        // 0x119c30: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c2c) {
            ctx->pc = 0x119C58u;
            goto label_119c58;
        }
    }
    ctx->pc = 0x119C34u;
label_119c34:
    // 0x119c34: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x119c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_119c38:
    // 0x119c38: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x119c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_119c3c:
    // 0x119c3c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x119c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_119c40:
    // 0x119c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_119c44:
    // 0x119c44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119c48:
    // 0x119c48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119c4c:
    // 0x119c4c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x119c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_119c50:
    // 0x119c50: 0x320f809  jalr        $t9
label_119c54:
    if (ctx->pc == 0x119C54u) {
        ctx->pc = 0x119C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C50u;
        // 0x119c54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119C58u;
        goto label_119c58;
    }
    ctx->pc = 0x119C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119C58u);
        ctx->pc = 0x119C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C50u;
        // 0x119c54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119C50u, 0x119C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119C58u;
label_119c58:
    // 0x119c58: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_119c5c:
    if (ctx->pc == 0x119C5Cu) {
        ctx->pc = 0x119C60u;
        goto label_119c60;
    }
    ctx->pc = 0x119C58u;
    {
        const bool branch_taken_0x119c58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x119c58) {
            ctx->pc = 0x119C6Cu;
            goto label_119c6c;
        }
    }
    ctx->pc = 0x119C60u;
label_119c60:
    // 0x119c60: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x119c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_119c64:
    // 0x119c64: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x119c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_119c68:
    // 0x119c68: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x119c68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_119c6c:
    // 0x119c6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_119c70:
    // 0x119c70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x119c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_119c74:
    // 0x119c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119c78:
    // 0x119c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_119c7c:
    // 0x119c7c: 0x3e00008  jr          $ra
label_119c80:
    if (ctx->pc == 0x119C80u) {
        ctx->pc = 0x119C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C7Cu;
        // 0x119c80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119C84u;
        goto label_fallthrough_0x119c7c;
    }
    ctx->pc = 0x119C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C7Cu;
        // 0x119c80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x119c7c:
    ctx->pc = 0x119C84u;
}
