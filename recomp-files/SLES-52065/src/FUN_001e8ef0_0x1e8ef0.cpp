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

// Function: FUN_001e8ef0
// Address: 0x1e8ef0 - 0x1e8f5c
void FUN_001e8ef0_0x1e8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8ef0_0x1e8ef0");
#endif

    switch (ctx->pc) {
        case 0x1e8ef0u: goto label_1e8ef0;
        case 0x1e8ef4u: goto label_1e8ef4;
        case 0x1e8ef8u: goto label_1e8ef8;
        case 0x1e8efcu: goto label_1e8efc;
        case 0x1e8f00u: goto label_1e8f00;
        case 0x1e8f04u: goto label_1e8f04;
        case 0x1e8f08u: goto label_1e8f08;
        case 0x1e8f0cu: goto label_1e8f0c;
        case 0x1e8f10u: goto label_1e8f10;
        case 0x1e8f14u: goto label_1e8f14;
        case 0x1e8f18u: goto label_1e8f18;
        case 0x1e8f1cu: goto label_1e8f1c;
        case 0x1e8f20u: goto label_1e8f20;
        case 0x1e8f24u: goto label_1e8f24;
        case 0x1e8f28u: goto label_1e8f28;
        case 0x1e8f2cu: goto label_1e8f2c;
        case 0x1e8f30u: goto label_1e8f30;
        case 0x1e8f34u: goto label_1e8f34;
        case 0x1e8f38u: goto label_1e8f38;
        case 0x1e8f3cu: goto label_1e8f3c;
        case 0x1e8f40u: goto label_1e8f40;
        case 0x1e8f44u: goto label_1e8f44;
        case 0x1e8f48u: goto label_1e8f48;
        case 0x1e8f4cu: goto label_1e8f4c;
        case 0x1e8f50u: goto label_1e8f50;
        case 0x1e8f54u: goto label_1e8f54;
        case 0x1e8f58u: goto label_1e8f58;
        default: break;
    }

    ctx->pc = 0x1e8ef0u;

label_1e8ef0:
    // 0x1e8ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e8ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e8ef4:
    // 0x1e8ef4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e8ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e8ef8:
    // 0x1e8ef8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e8efc:
    // 0x1e8efc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e8f00:
    // 0x1e8f00: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e8f00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f04:
    // 0x1e8f04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e8f08:
    // 0x1e8f08: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e8f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f0c:
    // 0x1e8f0c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e8f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f10:
    // 0x1e8f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8f14:
    // 0x1e8f14: 0x2511818  mult        $v1, $s2, $s1
    ctx->pc = 0x1e8f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1e8f18:
    // 0x1e8f18: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1e8f1c:
    if (ctx->pc == 0x1E8F1Cu) {
        ctx->pc = 0x1E8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F18u;
        // 0x1e8f1c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8F20u;
        goto label_1e8f20;
    }
    ctx->pc = 0x1E8F18u;
    {
        const bool branch_taken_0x1e8f18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F18u;
        // 0x1e8f1c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f18) {
            ctx->pc = 0x1E8F40u;
            goto label_1e8f40;
        }
    }
    ctx->pc = 0x1E8F20u;
label_1e8f20:
    // 0x1e8f20: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x1e8f20u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1e8f24:
    // 0x1e8f24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e8f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e8f28:
    // 0x1e8f28: 0x260f809  jalr        $s3
label_1e8f2c:
    if (ctx->pc == 0x1E8F2Cu) {
        ctx->pc = 0x1E8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F28u;
        // 0x1e8f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8F30u;
        goto label_1e8f30;
    }
    ctx->pc = 0x1E8F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x1E8F30u);
        ctx->pc = 0x1E8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F28u;
        // 0x1e8f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8F28u, 0x1E8F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8F30u;
label_1e8f30:
    // 0x1e8f30: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e8f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1e8f34:
    // 0x1e8f34: 0x0  nop
    ctx->pc = 0x1e8f34u;
    // NOP
label_1e8f38:
    // 0x1e8f38: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_1e8f3c:
    if (ctx->pc == 0x1E8F3Cu) {
        ctx->pc = 0x1E8F40u;
        goto label_1e8f40;
    }
    ctx->pc = 0x1E8F38u;
    {
        const bool branch_taken_0x1e8f38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f38) {
            ctx->pc = 0x1E8F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8f20;
        }
    }
    ctx->pc = 0x1E8F40u;
label_1e8f40:
    // 0x1e8f40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e8f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e8f44:
    // 0x1e8f44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e8f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8f48:
    // 0x1e8f48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8f4c:
    // 0x1e8f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8f50:
    // 0x1e8f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8f54:
    // 0x1e8f54: 0x3e00008  jr          $ra
label_1e8f58:
    if (ctx->pc == 0x1E8F58u) {
        ctx->pc = 0x1E8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F54u;
        // 0x1e8f58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8F5Cu;
        goto label_fallthrough_0x1e8f54;
    }
    ctx->pc = 0x1E8F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F54u;
        // 0x1e8f58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e8f54:
    ctx->pc = 0x1E8F5Cu;
}
