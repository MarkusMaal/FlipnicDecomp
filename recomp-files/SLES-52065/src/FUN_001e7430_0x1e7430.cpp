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

// Function: FUN_001e7430
// Address: 0x1e7430 - 0x1e7498
void FUN_001e7430_0x1e7430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7430_0x1e7430");
#endif

    switch (ctx->pc) {
        case 0x1e7454u: goto label_1e7454;
        case 0x1e7468u: goto label_1e7468;
        case 0x1e7480u: goto label_1e7480;
        default: break;
    }

    ctx->pc = 0x1e7430u;

    // 0x1e7430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e743c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e743cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7444: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7444u;
    {
        const bool branch_taken_0x1e7444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7444u;
        // 0x1e7448: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7444) {
            ctx->pc = 0x1E7480u;
            goto label_1e7480;
        }
    }
    ctx->pc = 0x1E744Cu;
    // 0x1e744c: 0xc07a1bc  jal         func_1E86F0
    ctx->pc = 0x1E744Cu;
    SET_GPR_U32(ctx, 31, 0x1E7454u);
    ctx->pc = 0x1E86F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E86F0u, 0x1E744Cu, 0x1E7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7454u;
label_1e7454:
    // 0x1e7454: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1e7454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7458: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7458u;
    {
        const bool branch_taken_0x1e7458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7458u;
        // 0x1e745c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7458) {
            ctx->pc = 0x1E746Cu;
            goto label_1e746c;
        }
    }
    ctx->pc = 0x1E7460u;
    // 0x1e7460: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E7460u;
    SET_GPR_U32(ctx, 31, 0x1E7468u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E7460u, 0x1E7468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7468u;
label_1e7468:
    // 0x1e7468: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e7468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e746c:
    // 0x1e746c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e746cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e7470: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7470u;
    {
        const bool branch_taken_0x1e7470 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7470u;
        // 0x1e7474: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7470) {
            ctx->pc = 0x1E7484u;
            goto label_1e7484;
        }
    }
    ctx->pc = 0x1E7478u;
    // 0x1e7478: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E7478u;
    SET_GPR_U32(ctx, 31, 0x1E7480u);
    ctx->pc = 0x1E747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7478u;
    // 0x1e747c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E7478u, 0x1E7480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7480u;
label_1e7480:
    // 0x1e7480: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e7480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e7484:
    // 0x1e7484: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e748c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e748cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7490: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7490u;
        // 0x1e7494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7498u;
}
