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

// Function: FUN_0016f0f0
// Address: 0x16f0f0 - 0x16f17c
void FUN_0016f0f0_0x16f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016f0f0_0x16f0f0");
#endif

    switch (ctx->pc) {
        case 0x16f0f0u: goto label_16f0f0;
        case 0x16f0f4u: goto label_16f0f4;
        case 0x16f0f8u: goto label_16f0f8;
        case 0x16f0fcu: goto label_16f0fc;
        case 0x16f100u: goto label_16f100;
        case 0x16f104u: goto label_16f104;
        case 0x16f108u: goto label_16f108;
        case 0x16f10cu: goto label_16f10c;
        case 0x16f110u: goto label_16f110;
        case 0x16f114u: goto label_16f114;
        case 0x16f118u: goto label_16f118;
        case 0x16f11cu: goto label_16f11c;
        case 0x16f120u: goto label_16f120;
        case 0x16f124u: goto label_16f124;
        case 0x16f128u: goto label_16f128;
        case 0x16f12cu: goto label_16f12c;
        case 0x16f130u: goto label_16f130;
        case 0x16f134u: goto label_16f134;
        case 0x16f138u: goto label_16f138;
        case 0x16f13cu: goto label_16f13c;
        case 0x16f140u: goto label_16f140;
        case 0x16f144u: goto label_16f144;
        case 0x16f148u: goto label_16f148;
        case 0x16f14cu: goto label_16f14c;
        case 0x16f150u: goto label_16f150;
        case 0x16f154u: goto label_16f154;
        case 0x16f158u: goto label_16f158;
        case 0x16f15cu: goto label_16f15c;
        case 0x16f160u: goto label_16f160;
        case 0x16f164u: goto label_16f164;
        case 0x16f168u: goto label_16f168;
        case 0x16f16cu: goto label_16f16c;
        case 0x16f170u: goto label_16f170;
        case 0x16f174u: goto label_16f174;
        case 0x16f178u: goto label_16f178;
        default: break;
    }

    ctx->pc = 0x16f0f0u;

label_16f0f0:
    // 0x16f0f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16f0f4:
    // 0x16f0f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16f0f8:
    // 0x16f0f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16f0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16f0fc:
    // 0x16f0fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16f0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16f100:
    // 0x16f100: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16f100u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f104:
    // 0x16f104: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16f108:
    // 0x16f108: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16f108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f10c:
    // 0x16f10c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16f110:
    // 0x16f110: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16f110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f114:
    // 0x16f114: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16f118:
    // 0x16f118: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16f118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f11c:
    // 0x16f11c: 0x10000009  b           . + 4 + (0x9 << 2)
label_16f120:
    if (ctx->pc == 0x16F120u) {
        ctx->pc = 0x16F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F11Cu;
        // 0x16f120: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F124u;
        goto label_16f124;
    }
    ctx->pc = 0x16F11Cu;
    {
        const bool branch_taken_0x16f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F11Cu;
        // 0x16f120: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f11c) {
            ctx->pc = 0x16F144u;
            goto label_16f144;
        }
    }
    ctx->pc = 0x16F124u;
label_16f124:
    // 0x16f124: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x16f124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16f128:
    // 0x16f128: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x16f128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16f12c:
    // 0x16f12c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16f12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16f130:
    // 0x16f130: 0x320f809  jalr        $t9
label_16f134:
    if (ctx->pc == 0x16F134u) {
        ctx->pc = 0x16F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F130u;
        // 0x16f134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F138u;
        goto label_16f138;
    }
    ctx->pc = 0x16F130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F138u);
        ctx->pc = 0x16F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F130u;
        // 0x16f134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F130u, 0x16F138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F138u;
label_16f138:
    // 0x16f138: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x16f138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_16f13c:
    // 0x16f13c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x16f13cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_16f140:
    // 0x16f140: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16f140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16f144:
    // 0x16f144: 0x0  nop
    ctx->pc = 0x16f144u;
    // NOP
label_16f148:
    // 0x16f148: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f14c:
    // 0x16f14c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x16f14cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16f150:
    // 0x16f150: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_16f154:
    if (ctx->pc == 0x16F154u) {
        ctx->pc = 0x16F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F150u;
        // 0x16f154: 0x2341021  addu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F158u;
        goto label_16f158;
    }
    ctx->pc = 0x16F150u;
    {
        const bool branch_taken_0x16f150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F150u;
        // 0x16f154: 0x2341021  addu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f150) {
            ctx->pc = 0x16F124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f124;
        }
    }
    ctx->pc = 0x16F158u;
label_16f158:
    // 0x16f158: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16f158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16f15c:
    // 0x16f15c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16f15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16f160:
    // 0x16f160: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16f160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16f164:
    // 0x16f164: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16f164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16f168:
    // 0x16f168: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16f16c:
    // 0x16f16c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16f170:
    // 0x16f170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16f174:
    // 0x16f174: 0x3e00008  jr          $ra
label_16f178:
    if (ctx->pc == 0x16F178u) {
        ctx->pc = 0x16F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F174u;
        // 0x16f178: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F17Cu;
        goto label_fallthrough_0x16f174;
    }
    ctx->pc = 0x16F174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F174u;
        // 0x16f178: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16f174:
    ctx->pc = 0x16F17Cu;
}
