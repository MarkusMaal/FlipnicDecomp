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

// Function: FUN_00152430
// Address: 0x152430 - 0x152484
void FUN_00152430_0x152430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152430_0x152430");
#endif

    switch (ctx->pc) {
        case 0x152450u: goto label_152450;
        case 0x152460u: goto label_152460;
        case 0x152470u: goto label_152470;
        default: break;
    }

    ctx->pc = 0x152430u;

    // 0x152430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x152434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x152438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15243c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152444: 0xc4cc0004  lwc1        $f12, 0x4($a2)
    ctx->pc = 0x152444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152448: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x152448u;
    SET_GPR_U32(ctx, 31, 0x152450u);
    ctx->pc = 0x15244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152448u;
    // 0x15244c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x152448u, 0x152450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152450u;
label_152450:
    // 0x152450: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x152450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152458: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x152458u;
    SET_GPR_U32(ctx, 31, 0x152460u);
    ctx->pc = 0x15245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152458u;
    // 0x15245c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x152458u, 0x152460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152460u;
label_152460:
    // 0x152460: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x152460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152468: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x152468u;
    SET_GPR_U32(ctx, 31, 0x152470u);
    ctx->pc = 0x15246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152468u;
    // 0x15246c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x152468u, 0x152470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152470u;
label_152470:
    // 0x152470: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15247c: 0x3e00008  jr          $ra
    ctx->pc = 0x15247Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15247Cu;
        // 0x152480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15247Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152484u;
}
