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

// Function: FUN_001a2fa0
// Address: 0x1a2fa0 - 0x1a3000
void FUN_001a2fa0_0x1a2fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2fa0_0x1a2fa0");
#endif

    switch (ctx->pc) {
        case 0x1a2fd0u: goto label_1a2fd0;
        case 0x1a2fe8u: goto label_1a2fe8;
        default: break;
    }

    ctx->pc = 0x1a2fa0u;

    // 0x1a2fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2fa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a2fa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2fac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2fb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2fb4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A2FB4u;
    {
        const bool branch_taken_0x1a2fb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FB4u;
        // 0x1a2fb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fb4) {
            ctx->pc = 0x1A2FE8u;
            goto label_1a2fe8;
        }
    }
    ctx->pc = 0x1A2FBCu;
    // 0x1a2fbc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a2fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2fc4: 0x2442b3b0  addiu       $v0, $v0, -0x4C50
    ctx->pc = 0x1a2fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947760));
    // 0x1a2fc8: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A2FC8u;
    SET_GPR_U32(ctx, 31, 0x1A2FD0u);
    ctx->pc = 0x1A2FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2FC8u;
    // 0x1a2fcc: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A2FC8u, 0x1A2FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FD0u;
label_1a2fd0:
    // 0x1a2fd0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a2fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a2fd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a2fd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a2fd8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2FD8u;
    {
        const bool branch_taken_0x1a2fd8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A2FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FD8u;
        // 0x1a2fdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fd8) {
            ctx->pc = 0x1A2FECu;
            goto label_1a2fec;
        }
    }
    ctx->pc = 0x1A2FE0u;
    // 0x1a2fe0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A2FE0u;
    SET_GPR_U32(ctx, 31, 0x1A2FE8u);
    ctx->pc = 0x1A2FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2FE0u;
    // 0x1a2fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A2FE0u, 0x1A2FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FE8u;
label_1a2fe8:
    // 0x1a2fe8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a2fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2fec:
    // 0x1a2fec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FF8u;
        // 0x1a2ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3000u;
}
