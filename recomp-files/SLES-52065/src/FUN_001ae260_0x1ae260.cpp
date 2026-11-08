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

// Function: FUN_001ae260
// Address: 0x1ae260 - 0x1ae2c0
void FUN_001ae260_0x1ae260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ae260_0x1ae260");
#endif

    switch (ctx->pc) {
        case 0x1ae290u: goto label_1ae290;
        case 0x1ae2a8u: goto label_1ae2a8;
        default: break;
    }

    ctx->pc = 0x1ae260u;

    // 0x1ae260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ae268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae26c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ae270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ae270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae274: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AE274u;
    {
        const bool branch_taken_0x1ae274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE274u;
        // 0x1ae278: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae274) {
            ctx->pc = 0x1AE2A8u;
            goto label_1ae2a8;
        }
    }
    ctx->pc = 0x1AE27Cu;
    // 0x1ae27c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1ae27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1ae280: 0x2442b7f0  addiu       $v0, $v0, -0x4810
    ctx->pc = 0x1ae280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948848));
    // 0x1ae284: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1ae284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1ae288: 0xc04018c  jal         func_100630
    ctx->pc = 0x1AE288u;
    SET_GPR_U32(ctx, 31, 0x1AE290u);
    ctx->pc = 0x1AE28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE288u;
    // 0x1ae28c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1AE288u, 0x1AE290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE290u;
label_1ae290:
    // 0x1ae290: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1ae290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ae294: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ae294u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ae298: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE298u;
    {
        const bool branch_taken_0x1ae298 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE298u;
        // 0x1ae29c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae298) {
            ctx->pc = 0x1AE2ACu;
            goto label_1ae2ac;
        }
    }
    ctx->pc = 0x1AE2A0u;
    // 0x1ae2a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1AE2A0u;
    SET_GPR_U32(ctx, 31, 0x1AE2A8u);
    ctx->pc = 0x1AE2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE2A0u;
    // 0x1ae2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1AE2A0u, 0x1AE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE2A8u;
label_1ae2a8:
    // 0x1ae2a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ae2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ae2ac:
    // 0x1ae2ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2B8u;
        // 0x1ae2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE2C0u;
}
