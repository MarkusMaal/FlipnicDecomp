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

// Function: FUN_00119160
// Address: 0x119160 - 0x1191e8
void FUN_00119160_0x119160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119160_0x119160");
#endif

    switch (ctx->pc) {
        case 0x119190u: goto label_119190;
        case 0x1191a4u: goto label_1191a4;
        default: break;
    }

    ctx->pc = 0x119160u;

    // 0x119160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x119160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x119164: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x119164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x119168: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x119168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11916c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11916cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x119170: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x119170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119174: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x119178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11917c: 0x879083a4  lh          $s0, -0x7C5C($gp)
    ctx->pc = 0x11917cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935460)));
    // 0x119180: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x119180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119184: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x119184u;
    {
        const bool branch_taken_0x119184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x119188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119184u;
        // 0x119188: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119184) {
            ctx->pc = 0x1191C4u;
            goto label_1191c4;
        }
    }
    ctx->pc = 0x11918Cu;
    // 0x11918c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11918cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119190:
    // 0x119190: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x119190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x119194: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x119194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x119198: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x119198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11919c: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11919Cu;
    SET_GPR_U32(ctx, 31, 0x1191A4u);
    ctx->pc = 0x1191A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11919Cu;
    // 0x1191a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11919Cu, 0x1191A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1191A4u;
label_1191a4:
    // 0x1191a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1191A4u;
    {
        const bool branch_taken_0x1191a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1191a4) {
            ctx->pc = 0x1191B4u;
            goto label_1191b4;
        }
    }
    ctx->pc = 0x1191ACu;
    // 0x1191ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1191ACu;
    {
        const bool branch_taken_0x1191ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1191B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191ACu;
        // 0x1191b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1191ac) {
            ctx->pc = 0x1191CCu;
            goto label_1191cc;
        }
    }
    ctx->pc = 0x1191B4u;
label_1191b4:
    // 0x1191b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1191b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1191b8: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1191b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1191bc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1191BCu;
    {
        const bool branch_taken_0x1191bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1191C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191BCu;
        // 0x1191c0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1191bc) {
            ctx->pc = 0x119190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119190;
        }
    }
    ctx->pc = 0x1191C4u;
label_1191c4:
    // 0x1191c4: 0x0  nop
    ctx->pc = 0x1191c4u;
    // NOP
    // 0x1191c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1191c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1191cc:
    // 0x1191cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1191ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1191d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1191d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1191d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1191d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1191d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1191d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1191dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1191dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1191e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1191E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1191E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191E0u;
        // 0x1191e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1191E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1191E8u;
}
