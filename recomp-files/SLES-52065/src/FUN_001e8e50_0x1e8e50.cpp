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

// Function: FUN_001e8e50
// Address: 0x1e8e50 - 0x1e8eec
void FUN_001e8e50_0x1e8e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8e50_0x1e8e50");
#endif

    switch (ctx->pc) {
        case 0x1e8e50u: goto label_1e8e50;
        case 0x1e8e54u: goto label_1e8e54;
        case 0x1e8e58u: goto label_1e8e58;
        case 0x1e8e5cu: goto label_1e8e5c;
        case 0x1e8e60u: goto label_1e8e60;
        case 0x1e8e64u: goto label_1e8e64;
        case 0x1e8e68u: goto label_1e8e68;
        case 0x1e8e6cu: goto label_1e8e6c;
        case 0x1e8e70u: goto label_1e8e70;
        case 0x1e8e74u: goto label_1e8e74;
        case 0x1e8e78u: goto label_1e8e78;
        case 0x1e8e7cu: goto label_1e8e7c;
        case 0x1e8e80u: goto label_1e8e80;
        case 0x1e8e84u: goto label_1e8e84;
        case 0x1e8e88u: goto label_1e8e88;
        case 0x1e8e8cu: goto label_1e8e8c;
        case 0x1e8e90u: goto label_1e8e90;
        case 0x1e8e94u: goto label_1e8e94;
        case 0x1e8e98u: goto label_1e8e98;
        case 0x1e8e9cu: goto label_1e8e9c;
        case 0x1e8ea0u: goto label_1e8ea0;
        case 0x1e8ea4u: goto label_1e8ea4;
        case 0x1e8ea8u: goto label_1e8ea8;
        case 0x1e8eacu: goto label_1e8eac;
        case 0x1e8eb0u: goto label_1e8eb0;
        case 0x1e8eb4u: goto label_1e8eb4;
        case 0x1e8eb8u: goto label_1e8eb8;
        case 0x1e8ebcu: goto label_1e8ebc;
        case 0x1e8ec0u: goto label_1e8ec0;
        case 0x1e8ec4u: goto label_1e8ec4;
        case 0x1e8ec8u: goto label_1e8ec8;
        case 0x1e8eccu: goto label_1e8ecc;
        case 0x1e8ed0u: goto label_1e8ed0;
        case 0x1e8ed4u: goto label_1e8ed4;
        case 0x1e8ed8u: goto label_1e8ed8;
        case 0x1e8edcu: goto label_1e8edc;
        case 0x1e8ee0u: goto label_1e8ee0;
        case 0x1e8ee4u: goto label_1e8ee4;
        case 0x1e8ee8u: goto label_1e8ee8;
        default: break;
    }

    ctx->pc = 0x1e8e50u;

label_1e8e50:
    // 0x1e8e50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e8e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e8e54:
    // 0x1e8e54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e8e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e8e58:
    // 0x1e8e58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e8e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e8e5c:
    // 0x1e8e5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e8e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e8e60:
    // 0x1e8e60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e8e64:
    // 0x1e8e64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e8e68:
    // 0x1e8e68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e8e6c:
    // 0x1e8e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8e70:
    // 0x1e8e70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e8e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8e74:
    // 0x1e8e74: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1e8e78:
    if (ctx->pc == 0x1E8E78u) {
        ctx->pc = 0x1E8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E74u;
        // 0x1e8e78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E7Cu;
        goto label_1e8e7c;
    }
    ctx->pc = 0x1E8E74u;
    {
        const bool branch_taken_0x1e8e74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E74u;
        // 0x1e8e78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e74) {
            ctx->pc = 0x1E8EC8u;
            goto label_1e8ec8;
        }
    }
    ctx->pc = 0x1E8E7Cu;
label_1e8e7c:
    // 0x1e8e7c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1e8e80:
    if (ctx->pc == 0x1E8E80u) {
        ctx->pc = 0x1E8E84u;
        goto label_1e8e84;
    }
    ctx->pc = 0x1E8E7Cu;
    {
        const bool branch_taken_0x1e8e7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8e7c) {
            ctx->pc = 0x1E8EC0u;
            goto label_1e8ec0;
        }
    }
    ctx->pc = 0x1E8E84u;
label_1e8e84:
    // 0x1e8e84: 0x8e33fff4  lw          $s3, -0xC($s1)
    ctx->pc = 0x1e8e84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967284)));
label_1e8e88:
    // 0x1e8e88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e8e88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8e8c:
    // 0x1e8e8c: 0x8e34fff0  lw          $s4, -0x10($s1)
    ctx->pc = 0x1e8e8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967280)));
label_1e8e90:
    // 0x1e8e90: 0x13082b  sltu        $at, $zero, $s3
    ctx->pc = 0x1e8e90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1e8e94:
    // 0x1e8e94: 0x2931018  mult        $v0, $s4, $s3
    ctx->pc = 0x1e8e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e8e98:
    // 0x1e8e98: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e8e9c:
    if (ctx->pc == 0x1E8E9Cu) {
        ctx->pc = 0x1E8E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E98u;
        // 0x1e8e9c: 0x222a821  addu        $s5, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EA0u;
        goto label_1e8ea0;
    }
    ctx->pc = 0x1E8E98u;
    {
        const bool branch_taken_0x1e8e98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E98u;
        // 0x1e8e9c: 0x222a821  addu        $s5, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e98) {
            ctx->pc = 0x1E8EC0u;
            goto label_1e8ec0;
        }
    }
    ctx->pc = 0x1E8EA0u;
label_1e8ea0:
    // 0x1e8ea0: 0x2b4a823  subu        $s5, $s5, $s4
    ctx->pc = 0x1e8ea0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_1e8ea4:
    // 0x1e8ea4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e8ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e8ea8:
    // 0x1e8ea8: 0x200f809  jalr        $s0
label_1e8eac:
    if (ctx->pc == 0x1E8EACu) {
        ctx->pc = 0x1E8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EA8u;
        // 0x1e8eac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EB0u;
        goto label_1e8eb0;
    }
    ctx->pc = 0x1E8EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1E8EB0u);
        ctx->pc = 0x1E8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EA8u;
        // 0x1e8eac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8EA8u, 0x1E8EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8EB0u;
label_1e8eb0:
    // 0x1e8eb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e8eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e8eb4:
    // 0x1e8eb4: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x1e8eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1e8eb8:
    // 0x1e8eb8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1e8ebc:
    if (ctx->pc == 0x1E8EBCu) {
        ctx->pc = 0x1E8EC0u;
        goto label_1e8ec0;
    }
    ctx->pc = 0x1E8EB8u;
    {
        const bool branch_taken_0x1e8eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8eb8) {
            ctx->pc = 0x1E8EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8ea0;
        }
    }
    ctx->pc = 0x1E8EC0u;
label_1e8ec0:
    // 0x1e8ec0: 0xc04018c  jal         func_100630
label_1e8ec4:
    if (ctx->pc == 0x1E8EC4u) {
        ctx->pc = 0x1E8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EC0u;
        // 0x1e8ec4: 0x2624fff0  addiu       $a0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EC8u;
        goto label_1e8ec8;
    }
    ctx->pc = 0x1E8EC0u;
    SET_GPR_U32(ctx, 31, 0x1E8EC8u);
    ctx->pc = 0x1E8EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8EC0u;
    // 0x1e8ec4: 0x2624fff0  addiu       $a0, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E8EC0u, 0x1E8EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EC8u;
label_1e8ec8:
    // 0x1e8ec8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e8ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e8ecc:
    // 0x1e8ecc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e8eccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e8ed0:
    // 0x1e8ed0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e8ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e8ed4:
    // 0x1e8ed4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e8ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8ed8:
    // 0x1e8ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8edc:
    // 0x1e8edc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8ee0:
    // 0x1e8ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8ee4:
    // 0x1e8ee4: 0x3e00008  jr          $ra
label_1e8ee8:
    if (ctx->pc == 0x1E8EE8u) {
        ctx->pc = 0x1E8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EE4u;
        // 0x1e8ee8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EECu;
        goto label_fallthrough_0x1e8ee4;
    }
    ctx->pc = 0x1E8EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EE4u;
        // 0x1e8ee8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e8ee4:
    ctx->pc = 0x1E8EECu;
}
