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

// Function: FUN_0018a910
// Address: 0x18a910 - 0x18a980
void FUN_0018a910_0x18a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a910_0x18a910");
#endif

    switch (ctx->pc) {
        case 0x18a944u: goto label_18a944;
        case 0x18a960u: goto label_18a960;
        default: break;
    }

    ctx->pc = 0x18a910u;

    // 0x18a910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18a914: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18a918: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18a91c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18a91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18a920: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18a920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a924: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a928: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18a928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a92c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a930: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18a930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a938: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18a938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a93c: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x18A93Cu;
    SET_GPR_U32(ctx, 31, 0x18A944u);
    ctx->pc = 0x18A940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A93Cu;
    // 0x18a940: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x18A93Cu, 0x18A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A944u;
label_18a944:
    // 0x18a944: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18a944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a948: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18a948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a94c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x18a94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a950: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x18a950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a954: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x18a954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a958: 0xc062a60  jal         func_18A980
    ctx->pc = 0x18A958u;
    SET_GPR_U32(ctx, 31, 0x18A960u);
    ctx->pc = 0x18A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A958u;
    // 0x18a95c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x18A958u, 0x18A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A960u;
label_18a960:
    // 0x18a960: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18a960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a964: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18a964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a968: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18a968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a96c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a978: 0x3e00008  jr          $ra
    ctx->pc = 0x18A978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A978u;
        // 0x18a97c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A980u;
}
