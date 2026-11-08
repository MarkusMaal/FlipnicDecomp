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

// Function: FUN_001f2670
// Address: 0x1f2670 - 0x1f26f0
void FUN_001f2670_0x1f2670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2670_0x1f2670");
#endif

    switch (ctx->pc) {
        case 0x1f26d4u: goto label_1f26d4;
        default: break;
    }

    ctx->pc = 0x1f2670u;

    // 0x1f2670: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f2670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f2674: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2678: 0x8c43a478  lw          $v1, -0x5B88($v0)
    ctx->pc = 0x1f2678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A478u));
    // 0x1f267c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f267cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2680: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f2680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f2684: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f2684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f2688: 0x4600015  bltz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F2688u;
    {
        const bool branch_taken_0x1f2688 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2688u;
        // 0x1f268c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2688) {
            ctx->pc = 0x1F26E0u;
            goto label_1f26e0;
        }
    }
    ctx->pc = 0x1F2690u;
    // 0x1f2690: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f2690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f2694: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f2694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f2698: 0x2443fa40  addiu       $v1, $v0, -0x5C0
    ctx->pc = 0x1f2698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965824));
    // 0x1f269c: 0xac45fa40  sw          $a1, -0x5C0($v0)
    ctx->pc = 0x1f269cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x38FA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38FA40u, _value); } while (0);
    // 0x1f26a0: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x1f26a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x38FA44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38FA44u, _value); } while (0);
    // 0x1f26a4: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f26a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f26a8: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1f26a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x38FA48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38FA48u, _value); } while (0);
    // 0x1f26ac: 0x2484f9c0  addiu       $a0, $a0, -0x640
    ctx->pc = 0x1f26acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965696));
    // 0x1f26b0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1f26b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f26b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f26b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f26b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f26bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f26bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26c0: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x1f26c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f26c4: 0x2609fa00  addiu       $t1, $s0, -0x600
    ctx->pc = 0x1f26c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965760));
    // 0x1f26c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f26c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f26cc: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F26CCu;
    SET_GPR_U32(ctx, 31, 0x1F26D4u);
    ctx->pc = 0x1F26D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F26CCu;
    // 0x1f26d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F26CCu, 0x1F26D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26D4u;
label_1f26d4:
    // 0x1f26d4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F26D4u;
    {
        const bool branch_taken_0x1f26d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26D4u;
        // 0x1f26d8: 0x8e02fa00  lw          $v0, -0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26d4) {
            ctx->pc = 0x1F26E0u;
            goto label_1f26e0;
        }
    }
    ctx->pc = 0x1F26DCu;
    // 0x1f26dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f26dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f26e0:
    // 0x1f26e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f26e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f26e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f26e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f26e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F26E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26E8u;
        // 0x1f26ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F26E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F26F0u;
}
