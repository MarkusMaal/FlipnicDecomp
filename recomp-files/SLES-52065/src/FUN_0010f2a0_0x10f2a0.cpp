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

// Function: FUN_0010f2a0
// Address: 0x10f2a0 - 0x10f304
void FUN_0010f2a0_0x10f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f2a0_0x10f2a0");
#endif

    switch (ctx->pc) {
        case 0x10f2a0u: goto label_10f2a0;
        case 0x10f2a4u: goto label_10f2a4;
        case 0x10f2a8u: goto label_10f2a8;
        case 0x10f2acu: goto label_10f2ac;
        case 0x10f2b0u: goto label_10f2b0;
        case 0x10f2b4u: goto label_10f2b4;
        case 0x10f2b8u: goto label_10f2b8;
        case 0x10f2bcu: goto label_10f2bc;
        case 0x10f2c0u: goto label_10f2c0;
        case 0x10f2c4u: goto label_10f2c4;
        case 0x10f2c8u: goto label_10f2c8;
        case 0x10f2ccu: goto label_10f2cc;
        case 0x10f2d0u: goto label_10f2d0;
        case 0x10f2d4u: goto label_10f2d4;
        case 0x10f2d8u: goto label_10f2d8;
        case 0x10f2dcu: goto label_10f2dc;
        case 0x10f2e0u: goto label_10f2e0;
        case 0x10f2e4u: goto label_10f2e4;
        case 0x10f2e8u: goto label_10f2e8;
        case 0x10f2ecu: goto label_10f2ec;
        case 0x10f2f0u: goto label_10f2f0;
        case 0x10f2f4u: goto label_10f2f4;
        case 0x10f2f8u: goto label_10f2f8;
        case 0x10f2fcu: goto label_10f2fc;
        case 0x10f300u: goto label_10f300;
        default: break;
    }

    ctx->pc = 0x10f2a0u;

label_10f2a0:
    // 0x10f2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10f2a4:
    // 0x10f2a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10f2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f2a8:
    // 0x10f2a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10f2ac:
    // 0x10f2ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10f2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10f2b0:
    // 0x10f2b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10f2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10f2b4:
    // 0x10f2b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10f2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10f2b8:
    // 0x10f2b8: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x10f2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_10f2bc:
    // 0x10f2bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f2c0:
    // 0x10f2c0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x10f2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10f2c4:
    // 0x10f2c4: 0x320f809  jalr        $t9
label_10f2c8:
    if (ctx->pc == 0x10F2C8u) {
        ctx->pc = 0x10F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2C4u;
        // 0x10f2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F2CCu;
        goto label_10f2cc;
    }
    ctx->pc = 0x10F2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F2CCu);
        ctx->pc = 0x10F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2C4u;
        // 0x10f2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F2C4u, 0x10F2CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F2CCu;
label_10f2cc:
    // 0x10f2cc: 0x92230231  lbu         $v1, 0x231($s1)
    ctx->pc = 0x10f2ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_10f2d0:
    // 0x10f2d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x10f2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_10f2d4:
    // 0x10f2d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_10f2d8:
    if (ctx->pc == 0x10F2D8u) {
        ctx->pc = 0x10F2DCu;
        goto label_10f2dc;
    }
    ctx->pc = 0x10F2D4u;
    {
        const bool branch_taken_0x10f2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f2d4) {
            ctx->pc = 0x10F2F0u;
            goto label_10f2f0;
        }
    }
    ctx->pc = 0x10F2DCu;
label_10f2dc:
    // 0x10f2dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f2e0:
    // 0x10f2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f2e4:
    // 0x10f2e4: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x10f2e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_10f2e8:
    // 0x10f2e8: 0x320f809  jalr        $t9
label_10f2ec:
    if (ctx->pc == 0x10F2ECu) {
        ctx->pc = 0x10F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2E8u;
        // 0x10f2ec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F2F0u;
        goto label_10f2f0;
    }
    ctx->pc = 0x10F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F2F0u);
        ctx->pc = 0x10F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2E8u;
        // 0x10f2ec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F2E8u, 0x10F2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F2F0u;
label_10f2f0:
    // 0x10f2f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10f2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10f2f4:
    // 0x10f2f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10f2f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10f2f8:
    // 0x10f2f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10f2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10f2fc:
    // 0x10f2fc: 0x3e00008  jr          $ra
label_10f300:
    if (ctx->pc == 0x10F300u) {
        ctx->pc = 0x10F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2FCu;
        // 0x10f300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F304u;
        goto label_fallthrough_0x10f2fc;
    }
    ctx->pc = 0x10F2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2FCu;
        // 0x10f300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10f2fc:
    ctx->pc = 0x10F304u;
}
