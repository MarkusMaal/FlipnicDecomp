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

// Function: FUN_001512a0
// Address: 0x1512a0 - 0x15132c
void FUN_001512a0_0x1512a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001512a0_0x1512a0");
#endif

    switch (ctx->pc) {
        case 0x1512d4u: goto label_1512d4;
        case 0x1512e0u: goto label_1512e0;
        case 0x1512fcu: goto label_1512fc;
        case 0x151314u: goto label_151314;
        default: break;
    }

    ctx->pc = 0x1512a0u;

    // 0x1512a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1512a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1512a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1512a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1512a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1512a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1512ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1512acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1512b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1512b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1512b4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1512B4u;
    {
        const bool branch_taken_0x1512b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512B4u;
        // 0x1512b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512b4) {
            ctx->pc = 0x151314u;
            goto label_151314;
        }
    }
    ctx->pc = 0x1512BCu;
    // 0x1512bc: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1512BCu;
    {
        const bool branch_taken_0x1512bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512BCu;
        // 0x1512c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512bc) {
            ctx->pc = 0x151300u;
            goto label_151300;
        }
    }
    ctx->pc = 0x1512C4u;
    // 0x1512c4: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1512C4u;
    {
        const bool branch_taken_0x1512c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512C4u;
        // 0x1512c8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512c4) {
            ctx->pc = 0x1512FCu;
            goto label_1512fc;
        }
    }
    ctx->pc = 0x1512CCu;
    // 0x1512cc: 0xc04c4e8  jal         func_1313A0
    ctx->pc = 0x1512CCu;
    SET_GPR_U32(ctx, 31, 0x1512D4u);
    ctx->pc = 0x1313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313A0u, 0x1512CCu, 0x1512D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512D4u;
label_1512d4:
    // 0x1512d4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1512d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1512d8: 0xc04c4e8  jal         func_1313A0
    ctx->pc = 0x1512D8u;
    SET_GPR_U32(ctx, 31, 0x1512E0u);
    ctx->pc = 0x1512DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1512D8u;
    // 0x1512dc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313A0u, 0x1512D8u, 0x1512E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512E0u;
label_1512e0:
    // 0x1512e0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1512e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1512e4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1512e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1512e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1512e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1512ec: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1512ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1512f0: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x1512f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1512f4: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x1512F4u;
    SET_GPR_U32(ctx, 31, 0x1512FCu);
    ctx->pc = 0x1512F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1512F4u;
    // 0x1512f8: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1323C0u, 0x1512F4u, 0x1512FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512FCu;
label_1512fc:
    // 0x1512fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1512fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_151300:
    // 0x151300: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x151300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x151304: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151304u;
    {
        const bool branch_taken_0x151304 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x151308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151304u;
        // 0x151308: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151304) {
            ctx->pc = 0x151318u;
            goto label_151318;
        }
    }
    ctx->pc = 0x15130Cu;
    // 0x15130c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x15130Cu;
    SET_GPR_U32(ctx, 31, 0x151314u);
    ctx->pc = 0x151310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15130Cu;
    // 0x151310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x15130Cu, 0x151314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151314u;
label_151314:
    // 0x151314: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x151314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_151318:
    // 0x151318: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15131c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15131cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151324: 0x3e00008  jr          $ra
    ctx->pc = 0x151324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151324u;
        // 0x151328: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15132Cu;
}
