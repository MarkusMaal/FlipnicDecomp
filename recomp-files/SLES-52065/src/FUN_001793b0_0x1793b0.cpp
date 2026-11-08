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

// Function: FUN_001793b0
// Address: 0x1793b0 - 0x17946c
void FUN_001793b0_0x1793b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001793b0_0x1793b0");
#endif

    switch (ctx->pc) {
        case 0x1793e0u: goto label_1793e0;
        case 0x1793ecu: goto label_1793ec;
        case 0x1793f4u: goto label_1793f4;
        case 0x1793fcu: goto label_1793fc;
        case 0x179414u: goto label_179414;
        case 0x179438u: goto label_179438;
        default: break;
    }

    ctx->pc = 0x1793b0u;

    // 0x1793b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1793b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1793b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1793b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1793b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1793b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1793bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1793bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1793c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1793c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1793c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1793c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1793c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1793c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1793cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1793ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1793d0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1793d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1793d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1793d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1793d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1793D8u;
    {
        const bool branch_taken_0x1793d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1793DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793D8u;
        // 0x1793dc: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1793d8) {
            ctx->pc = 0x179420u;
            goto label_179420;
        }
    }
    ctx->pc = 0x1793E0u;
label_1793e0:
    // 0x1793e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1793e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1793e4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1793E4u;
    SET_GPR_U32(ctx, 31, 0x1793ECu);
    ctx->pc = 0x1793E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793E4u;
    // 0x1793e8: 0x509821  addu        $s3, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1793E4u, 0x1793ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793ECu;
label_1793ec:
    // 0x1793ec: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1793ECu;
    SET_GPR_U32(ctx, 31, 0x1793F4u);
    ctx->pc = 0x1793F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793ECu;
    // 0x1793f0: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1793ECu, 0x1793F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793F4u;
label_1793f4:
    // 0x1793f4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1793F4u;
    SET_GPR_U32(ctx, 31, 0x1793FCu);
    ctx->pc = 0x1793F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793F4u;
    // 0x1793f8: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1793F4u, 0x1793FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793FCu;
label_1793fc:
    // 0x1793fc: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1793fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x179400: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x179400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x179404: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x179404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x179408: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x179408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17940c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17940Cu;
    SET_GPR_U32(ctx, 31, 0x179414u);
    ctx->pc = 0x179410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17940Cu;
    // 0x179410: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17940Cu, 0x179414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179414u;
label_179414:
    // 0x179414: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x179414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x179418: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x179418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x17941c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17941cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_179420:
    // 0x179420: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x179420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x179424: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x179424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x179428: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x179428u;
    {
        const bool branch_taken_0x179428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179428u;
        // 0x17942c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179428) {
            ctx->pc = 0x1793E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1793e0;
        }
    }
    ctx->pc = 0x179430u;
    // 0x179430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x179430u;
    {
        const bool branch_taken_0x179430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179430) {
            ctx->pc = 0x179440u;
            goto label_179440;
        }
    }
    ctx->pc = 0x179438u;
label_179438:
    // 0x179438: 0xa0600838  sb          $zero, 0x838($v1)
    ctx->pc = 0x179438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2104), (uint8_t)GPR_U32(ctx, 0));
    // 0x17943c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_179440:
    // 0x179440: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x179440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x179444: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x179444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x179448: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x179448u;
    {
        const bool branch_taken_0x179448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179448u;
        // 0x17944c: 0x2241821  addu        $v1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179448) {
            ctx->pc = 0x179438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179438;
        }
    }
    ctx->pc = 0x179450u;
    // 0x179450: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x179450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179454: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x179454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179458: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17945c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17945cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179464: 0x3e00008  jr          $ra
    ctx->pc = 0x179464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179464u;
        // 0x179468: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17946Cu;
}
