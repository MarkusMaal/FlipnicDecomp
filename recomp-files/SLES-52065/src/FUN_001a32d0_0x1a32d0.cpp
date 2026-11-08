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

// Function: FUN_001a32d0
// Address: 0x1a32d0 - 0x1a3330
void FUN_001a32d0_0x1a32d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a32d0_0x1a32d0");
#endif

    switch (ctx->pc) {
        case 0x1a3300u: goto label_1a3300;
        case 0x1a3318u: goto label_1a3318;
        default: break;
    }

    ctx->pc = 0x1a32d0u;

    // 0x1a32d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a32d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a32d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a32d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a32d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a32d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a32dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a32dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a32e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a32e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a32e4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A32E4u;
    {
        const bool branch_taken_0x1a32e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32E4u;
        // 0x1a32e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32e4) {
            ctx->pc = 0x1A3318u;
            goto label_1a3318;
        }
    }
    ctx->pc = 0x1A32ECu;
    // 0x1a32ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a32ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a32f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a32f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a32f4: 0x2442b390  addiu       $v0, $v0, -0x4C70
    ctx->pc = 0x1a32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947728));
    // 0x1a32f8: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A32F8u;
    SET_GPR_U32(ctx, 31, 0x1A3300u);
    ctx->pc = 0x1A32FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32F8u;
    // 0x1a32fc: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A32F8u, 0x1A3300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3300u;
label_1a3300:
    // 0x1a3300: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a3300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a3304: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a3304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a3308: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3308u;
    {
        const bool branch_taken_0x1a3308 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3308u;
        // 0x1a330c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3308) {
            ctx->pc = 0x1A331Cu;
            goto label_1a331c;
        }
    }
    ctx->pc = 0x1A3310u;
    // 0x1a3310: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A3310u;
    SET_GPR_U32(ctx, 31, 0x1A3318u);
    ctx->pc = 0x1A3314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3310u;
    // 0x1a3314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A3310u, 0x1A3318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3318u;
label_1a3318:
    // 0x1a3318: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a3318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a331c:
    // 0x1a331c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a331cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3328: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3328u;
        // 0x1a332c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3330u;
}
