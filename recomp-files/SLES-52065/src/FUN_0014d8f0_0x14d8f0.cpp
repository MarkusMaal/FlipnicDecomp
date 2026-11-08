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

// Function: FUN_0014d8f0
// Address: 0x14d8f0 - 0x14d94c
void FUN_0014d8f0_0x14d8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014d8f0_0x14d8f0");
#endif

    switch (ctx->pc) {
        case 0x14d91cu: goto label_14d91c;
        case 0x14d934u: goto label_14d934;
        default: break;
    }

    ctx->pc = 0x14d8f0u;

    // 0x14d8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14d8f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14d8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14d8f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d8fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14d900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d904: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x14D904u;
    {
        const bool branch_taken_0x14d904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D904u;
        // 0x14d908: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d904) {
            ctx->pc = 0x14D934u;
            goto label_14d934;
        }
    }
    ctx->pc = 0x14D90Cu;
    // 0x14d90c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D90Cu;
    {
        const bool branch_taken_0x14d90c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D90Cu;
        // 0x14d910: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d90c) {
            ctx->pc = 0x14D920u;
            goto label_14d920;
        }
    }
    ctx->pc = 0x14D914u;
    // 0x14d914: 0xc053a28  jal         func_14E8A0
    ctx->pc = 0x14D914u;
    SET_GPR_U32(ctx, 31, 0x14D91Cu);
    ctx->pc = 0x14D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D914u;
    // 0x14d918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E8A0u, 0x14D914u, 0x14D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D91Cu;
label_14d91c:
    // 0x14d91c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x14d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_14d920:
    // 0x14d920: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14d920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14d924: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D924u;
    {
        const bool branch_taken_0x14d924 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D924u;
        // 0x14d928: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d924) {
            ctx->pc = 0x14D938u;
            goto label_14d938;
        }
    }
    ctx->pc = 0x14D92Cu;
    // 0x14d92c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14D92Cu;
    SET_GPR_U32(ctx, 31, 0x14D934u);
    ctx->pc = 0x14D930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D92Cu;
    // 0x14d930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14D92Cu, 0x14D934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D934u;
label_14d934:
    // 0x14d934: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14d934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14d938:
    // 0x14d938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14d938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d93c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d93cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d944: 0x3e00008  jr          $ra
    ctx->pc = 0x14D944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D944u;
        // 0x14d948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D94Cu;
}
