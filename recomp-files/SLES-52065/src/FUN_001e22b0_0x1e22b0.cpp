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

// Function: FUN_001e22b0
// Address: 0x1e22b0 - 0x1e2318
void FUN_001e22b0_0x1e22b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e22b0_0x1e22b0");
#endif

    switch (ctx->pc) {
        case 0x1e22e8u: goto label_1e22e8;
        case 0x1e2300u: goto label_1e2300;
        default: break;
    }

    ctx->pc = 0x1e22b0u;

    // 0x1e22b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e22b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e22b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e22b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e22b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e22b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e22bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e22bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e22c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e22c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e22c4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E22C4u;
    {
        const bool branch_taken_0x1e22c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22C4u;
        // 0x1e22c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22c4) {
            ctx->pc = 0x1E2300u;
            goto label_1e2300;
        }
    }
    ctx->pc = 0x1E22CCu;
    // 0x1e22cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e22d0: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1e22d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1e22d4: 0x2442c120  addiu       $v0, $v0, -0x3EE0
    ctx->pc = 0x1e22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951200));
    // 0x1e22d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E22D8u;
    {
        const bool branch_taken_0x1e22d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22D8u;
        // 0x1e22dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22d8) {
            ctx->pc = 0x1E22E8u;
            goto label_1e22e8;
        }
    }
    ctx->pc = 0x1E22E0u;
    // 0x1e22e0: 0xc0482a4  jal         func_120A90
    ctx->pc = 0x1E22E0u;
    SET_GPR_U32(ctx, 31, 0x1E22E8u);
    ctx->pc = 0x1E22E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22E0u;
    // 0x1e22e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A90u, 0x1E22E0u, 0x1E22E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E22E8u;
label_1e22e8:
    // 0x1e22e8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e22e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e22ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e22ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e22f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E22F0u;
    {
        const bool branch_taken_0x1e22f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22F0u;
        // 0x1e22f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22f0) {
            ctx->pc = 0x1E2304u;
            goto label_1e2304;
        }
    }
    ctx->pc = 0x1E22F8u;
    // 0x1e22f8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E22F8u;
    SET_GPR_U32(ctx, 31, 0x1E2300u);
    ctx->pc = 0x1E22FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22F8u;
    // 0x1e22fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E22F8u, 0x1E2300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2300u;
label_1e2300:
    // 0x1e2300: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e2300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e2304:
    // 0x1e2304: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e230c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e230cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2310: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2310u;
        // 0x1e2314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2318u;
}
