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

// Function: FUN_001a9300
// Address: 0x1a9300 - 0x1a9388
void FUN_001a9300_0x1a9300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9300_0x1a9300");
#endif

    switch (ctx->pc) {
        case 0x1a9334u: goto label_1a9334;
        case 0x1a9340u: goto label_1a9340;
        case 0x1a934cu: goto label_1a934c;
        case 0x1a9358u: goto label_1a9358;
        case 0x1a9370u: goto label_1a9370;
        default: break;
    }

    ctx->pc = 0x1a9300u;

    // 0x1a9300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a9308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a930c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9314: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A9314u;
    {
        const bool branch_taken_0x1a9314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9314u;
        // 0x1a9318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9314) {
            ctx->pc = 0x1A9370u;
            goto label_1a9370;
        }
    }
    ctx->pc = 0x1A931Cu;
    // 0x1a931c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a9320: 0x26240a90  addiu       $a0, $s1, 0xA90
    ctx->pc = 0x1a9320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2704));
    // 0x1a9324: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x1a9324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x1a9328: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a9328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a932c: 0xc069b74  jal         func_1A6DD0
    ctx->pc = 0x1A932Cu;
    SET_GPR_U32(ctx, 31, 0x1A9334u);
    ctx->pc = 0x1A9330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A932Cu;
    // 0x1a9330: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6DD0u, 0x1A932Cu, 0x1A9334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9334u;
label_1a9334:
    // 0x1a9334: 0x26240a70  addiu       $a0, $s1, 0xA70
    ctx->pc = 0x1a9334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2672));
    // 0x1a9338: 0xc069aa8  jal         func_1A6AA0
    ctx->pc = 0x1A9338u;
    SET_GPR_U32(ctx, 31, 0x1A9340u);
    ctx->pc = 0x1A933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9338u;
    // 0x1a933c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AA0u, 0x1A9338u, 0x1A9340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9340u;
label_1a9340:
    // 0x1a9340: 0x262409d0  addiu       $a0, $s1, 0x9D0
    ctx->pc = 0x1a9340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2512));
    // 0x1a9344: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A9344u;
    SET_GPR_U32(ctx, 31, 0x1A934Cu);
    ctx->pc = 0x1A9348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9344u;
    // 0x1a9348: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A9344u, 0x1A934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A934Cu;
label_1a934c:
    // 0x1a934c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9350: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A9350u;
    SET_GPR_U32(ctx, 31, 0x1A9358u);
    ctx->pc = 0x1A9354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9350u;
    // 0x1a9354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A9350u, 0x1A9358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9358u;
label_1a9358:
    // 0x1a9358: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a9358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a935c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a935cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a9360: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9360u;
    {
        const bool branch_taken_0x1a9360 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9360u;
        // 0x1a9364: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9360) {
            ctx->pc = 0x1A9374u;
            goto label_1a9374;
        }
    }
    ctx->pc = 0x1A9368u;
    // 0x1a9368: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A9368u;
    SET_GPR_U32(ctx, 31, 0x1A9370u);
    ctx->pc = 0x1A936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9368u;
    // 0x1a936c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A9368u, 0x1A9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9370u;
label_1a9370:
    // 0x1a9370: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a9370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9374:
    // 0x1a9374: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a937c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a937cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9380: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9380u;
        // 0x1a9384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9388u;
}
