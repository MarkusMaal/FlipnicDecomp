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

// Function: FUN_00129900
// Address: 0x129900 - 0x129960
void FUN_00129900_0x129900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129900_0x129900");
#endif

    switch (ctx->pc) {
        case 0x129930u: goto label_129930;
        case 0x129948u: goto label_129948;
        default: break;
    }

    ctx->pc = 0x129900u;

    // 0x129900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x129904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x129904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x129908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x129908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12990c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12990cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x129910: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x129910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129914: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x129914u;
    {
        const bool branch_taken_0x129914 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x129918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129914u;
        // 0x129918: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129914) {
            ctx->pc = 0x129948u;
            goto label_129948;
        }
    }
    ctx->pc = 0x12991Cu;
    // 0x12991c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x12991cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x129920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x129920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129924: 0x24428ac0  addiu       $v0, $v0, -0x7540
    ctx->pc = 0x129924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937280));
    // 0x129928: 0xc04a81c  jal         func_12A070
    ctx->pc = 0x129928u;
    SET_GPR_U32(ctx, 31, 0x129930u);
    ctx->pc = 0x12992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129928u;
    // 0x12992c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A070u, 0x129928u, 0x129930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129930u;
label_129930:
    // 0x129930: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x129930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x129934: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x129934u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x129938: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129938u;
    {
        const bool branch_taken_0x129938 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129938u;
        // 0x12993c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129938) {
            ctx->pc = 0x12994Cu;
            goto label_12994c;
        }
    }
    ctx->pc = 0x129940u;
    // 0x129940: 0xc0401a4  jal         func_100690
    ctx->pc = 0x129940u;
    SET_GPR_U32(ctx, 31, 0x129948u);
    ctx->pc = 0x129944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129940u;
    // 0x129944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x129940u, 0x129948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129948u;
label_129948:
    // 0x129948: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x129948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12994c:
    // 0x12994c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12994cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129958: 0x3e00008  jr          $ra
    ctx->pc = 0x129958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129958u;
        // 0x12995c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129960u;
}
