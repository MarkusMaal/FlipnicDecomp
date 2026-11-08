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

// Function: FUN_00119d10
// Address: 0x119d10 - 0x119d90
void FUN_00119d10_0x119d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119d10_0x119d10");
#endif

    switch (ctx->pc) {
        case 0x119d10u: goto label_119d10;
        case 0x119d14u: goto label_119d14;
        case 0x119d18u: goto label_119d18;
        case 0x119d1cu: goto label_119d1c;
        case 0x119d20u: goto label_119d20;
        case 0x119d24u: goto label_119d24;
        case 0x119d28u: goto label_119d28;
        case 0x119d2cu: goto label_119d2c;
        case 0x119d30u: goto label_119d30;
        case 0x119d34u: goto label_119d34;
        case 0x119d38u: goto label_119d38;
        case 0x119d3cu: goto label_119d3c;
        case 0x119d40u: goto label_119d40;
        case 0x119d44u: goto label_119d44;
        case 0x119d48u: goto label_119d48;
        case 0x119d4cu: goto label_119d4c;
        case 0x119d50u: goto label_119d50;
        case 0x119d54u: goto label_119d54;
        case 0x119d58u: goto label_119d58;
        case 0x119d5cu: goto label_119d5c;
        case 0x119d60u: goto label_119d60;
        case 0x119d64u: goto label_119d64;
        case 0x119d68u: goto label_119d68;
        case 0x119d6cu: goto label_119d6c;
        case 0x119d70u: goto label_119d70;
        case 0x119d74u: goto label_119d74;
        case 0x119d78u: goto label_119d78;
        case 0x119d7cu: goto label_119d7c;
        case 0x119d80u: goto label_119d80;
        case 0x119d84u: goto label_119d84;
        case 0x119d88u: goto label_119d88;
        case 0x119d8cu: goto label_119d8c;
        default: break;
    }

    ctx->pc = 0x119d10u;

label_119d10:
    // 0x119d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_119d14:
    // 0x119d14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x119d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119d18:
    // 0x119d18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_119d1c:
    // 0x119d1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_119d20:
    // 0x119d20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_119d24:
    // 0x119d24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x119d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_119d28:
    // 0x119d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_119d2c:
    // 0x119d2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x119d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_119d30:
    // 0x119d30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x119d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_119d34:
    // 0x119d34: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x119d34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_119d38:
    // 0x119d38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x119d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_119d3c:
    // 0x119d3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119d40:
    // 0x119d40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119d44:
    // 0x119d44: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x119d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_119d48:
    // 0x119d48: 0x320f809  jalr        $t9
label_119d4c:
    if (ctx->pc == 0x119D4Cu) {
        ctx->pc = 0x119D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D48u;
        // 0x119d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119D50u;
        goto label_119d50;
    }
    ctx->pc = 0x119D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119D50u);
        ctx->pc = 0x119D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D48u;
        // 0x119d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D48u, 0x119D50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119D50u;
label_119d50:
    // 0x119d50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x119d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_119d54:
    // 0x119d54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x119d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_119d58:
    // 0x119d58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119d5c:
    // 0x119d5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119d60:
    // 0x119d60: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x119d60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_119d64:
    // 0x119d64: 0x320f809  jalr        $t9
label_119d68:
    if (ctx->pc == 0x119D68u) {
        ctx->pc = 0x119D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D64u;
        // 0x119d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119D6Cu;
        goto label_119d6c;
    }
    ctx->pc = 0x119D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119D6Cu);
        ctx->pc = 0x119D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D64u;
        // 0x119d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D64u, 0x119D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119D6Cu;
label_119d6c:
    // 0x119d6c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x119d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_119d70:
    // 0x119d70: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x119d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_119d74:
    // 0x119d74: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x119d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_119d78:
    // 0x119d78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_119d7c:
    // 0x119d7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x119d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_119d80:
    // 0x119d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119d84:
    // 0x119d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_119d88:
    // 0x119d88: 0x3e00008  jr          $ra
label_119d8c:
    if (ctx->pc == 0x119D8Cu) {
        ctx->pc = 0x119D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D88u;
        // 0x119d8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119D90u;
        goto label_fallthrough_0x119d88;
    }
    ctx->pc = 0x119D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D88u;
        // 0x119d8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x119d88:
    ctx->pc = 0x119D90u;
}
