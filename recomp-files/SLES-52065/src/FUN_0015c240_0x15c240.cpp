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

// Function: FUN_0015c240
// Address: 0x15c240 - 0x15c2c4
void FUN_0015c240_0x15c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c240_0x15c240");
#endif

    switch (ctx->pc) {
        case 0x15c274u: goto label_15c274;
        case 0x15c288u: goto label_15c288;
        default: break;
    }

    ctx->pc = 0x15c240u;

    // 0x15c240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15c244: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15c244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15c248: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15c24c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c250: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15c250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c254: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c258: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15c258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c25c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c260: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15c260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c264: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c268: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x15c268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c26c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c270: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x15c270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c274:
    // 0x15c274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15c274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c278: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15c278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c27c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15c27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c280: 0xc05704c  jal         func_15C130
    ctx->pc = 0x15C280u;
    SET_GPR_U32(ctx, 31, 0x15C288u);
    ctx->pc = 0x15C284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C280u;
    // 0x15c284: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x15C280u, 0x15C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C288u;
label_15c288:
    // 0x15c288: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15c288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c28c: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C28Cu;
    {
        const bool branch_taken_0x15c28c = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x15c28c) {
            ctx->pc = 0x15C2A0u;
            goto label_15c2a0;
        }
    }
    ctx->pc = 0x15C294u;
    // 0x15c294: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15c298: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x15C298u;
    {
        const bool branch_taken_0x15c298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C298u;
        // 0x15c29c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c298) {
            ctx->pc = 0x15C274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c274;
        }
    }
    ctx->pc = 0x15C2A0u;
label_15c2a0:
    // 0x15c2a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15c2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15c2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c2a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c2a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c2ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c2acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c2b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c2b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c2b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c2b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c2b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c2b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x15C2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2BCu;
        // 0x15c2c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C2C4u;
}
