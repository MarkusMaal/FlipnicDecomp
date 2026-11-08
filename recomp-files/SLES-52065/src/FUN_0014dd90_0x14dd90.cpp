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

// Function: FUN_0014dd90
// Address: 0x14dd90 - 0x14ddf8
void FUN_0014dd90_0x14dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014dd90_0x14dd90");
#endif

    switch (ctx->pc) {
        case 0x14ddb4u: goto label_14ddb4;
        case 0x14ddc8u: goto label_14ddc8;
        case 0x14dde0u: goto label_14dde0;
        default: break;
    }

    ctx->pc = 0x14dd90u;

    // 0x14dd90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14dd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14dd94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14dd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14dd98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14dd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14dd9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14dd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14dda0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14dda0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dda4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x14DDA4u;
    {
        const bool branch_taken_0x14dda4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDA4u;
        // 0x14dda8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dda4) {
            ctx->pc = 0x14DDE0u;
            goto label_14dde0;
        }
    }
    ctx->pc = 0x14DDACu;
    // 0x14ddac: 0xc05379c  jal         func_14DE70
    ctx->pc = 0x14DDACu;
    SET_GPR_U32(ctx, 31, 0x14DDB4u);
    ctx->pc = 0x14DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE70u, 0x14DDACu, 0x14DDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DDB4u;
label_14ddb4:
    // 0x14ddb4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x14ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14ddb8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DDB8u;
    {
        const bool branch_taken_0x14ddb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDB8u;
        // 0x14ddbc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ddb8) {
            ctx->pc = 0x14DDCCu;
            goto label_14ddcc;
        }
    }
    ctx->pc = 0x14DDC0u;
    // 0x14ddc0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14DDC0u;
    SET_GPR_U32(ctx, 31, 0x14DDC8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14DDC0u, 0x14DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DDC8u;
label_14ddc8:
    // 0x14ddc8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x14ddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_14ddcc:
    // 0x14ddcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14ddccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14ddd0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DDD0u;
    {
        const bool branch_taken_0x14ddd0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDD0u;
        // 0x14ddd4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ddd0) {
            ctx->pc = 0x14DDE4u;
            goto label_14dde4;
        }
    }
    ctx->pc = 0x14DDD8u;
    // 0x14ddd8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14DDD8u;
    SET_GPR_U32(ctx, 31, 0x14DDE0u);
    ctx->pc = 0x14DDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DDD8u;
    // 0x14dddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14DDD8u, 0x14DDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DDE0u;
label_14dde0:
    // 0x14dde0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14dde0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14dde4:
    // 0x14dde4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14dde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dde8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14dde8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ddec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ddecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ddf0: 0x3e00008  jr          $ra
    ctx->pc = 0x14DDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDF0u;
        // 0x14ddf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DDF8u;
}
