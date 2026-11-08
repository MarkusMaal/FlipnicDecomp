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

// Function: FUN_0013c270
// Address: 0x13c270 - 0x13c2fc
void FUN_0013c270_0x13c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c270_0x13c270");
#endif

    switch (ctx->pc) {
        case 0x13c2b4u: goto label_13c2b4;
        case 0x13c2c0u: goto label_13c2c0;
        case 0x13c2c8u: goto label_13c2c8;
        case 0x13c2e0u: goto label_13c2e0;
        default: break;
    }

    ctx->pc = 0x13c270u;

    // 0x13c270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13c274: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13c274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13c278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13c278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13c27c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c280: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13c280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c284: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c288: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x13C288u;
    {
        const bool branch_taken_0x13c288 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C288u;
        // 0x13c28c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c288) {
            ctx->pc = 0x13C2E0u;
            goto label_13c2e0;
        }
    }
    ctx->pc = 0x13C290u;
    // 0x13c290: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x13C290u;
    {
        const bool branch_taken_0x13c290 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C290u;
        // 0x13c294: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c290) {
            ctx->pc = 0x13C2CCu;
            goto label_13c2cc;
        }
    }
    ctx->pc = 0x13C298u;
    // 0x13c298: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x13C298u;
    {
        const bool branch_taken_0x13c298 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c298) {
            ctx->pc = 0x13C2C8u;
            goto label_13c2c8;
        }
    }
    ctx->pc = 0x13C2A0u;
    // 0x13c2a0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x13c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13c2a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C2A4u;
    {
        const bool branch_taken_0x13c2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c2a4) {
            ctx->pc = 0x13C2C8u;
            goto label_13c2c8;
        }
    }
    ctx->pc = 0x13C2ACu;
    // 0x13c2ac: 0xc049dd4  jal         func_127750
    ctx->pc = 0x13C2ACu;
    SET_GPR_U32(ctx, 31, 0x13C2B4u);
    ctx->pc = 0x127750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127750u, 0x13C2ACu, 0x13C2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C2B4u;
label_13c2b4:
    // 0x13c2b4: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x13c2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13c2b8: 0xc049dd0  jal         func_127740
    ctx->pc = 0x13C2B8u;
    SET_GPR_U32(ctx, 31, 0x13C2C0u);
    ctx->pc = 0x13C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C2B8u;
    // 0x13c2bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x13C2B8u, 0x13C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C2C0u;
label_13c2c0:
    // 0x13c2c0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C2C0u;
    SET_GPR_U32(ctx, 31, 0x13C2C8u);
    ctx->pc = 0x13C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C2C0u;
    // 0x13c2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C2C0u, 0x13C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C2C8u;
label_13c2c8:
    // 0x13c2c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13c2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_13c2cc:
    // 0x13c2cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c2ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c2d0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C2D0u;
    {
        const bool branch_taken_0x13c2d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C2D0u;
        // 0x13c2d4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c2d0) {
            ctx->pc = 0x13C2E4u;
            goto label_13c2e4;
        }
    }
    ctx->pc = 0x13C2D8u;
    // 0x13c2d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C2D8u;
    SET_GPR_U32(ctx, 31, 0x13C2E0u);
    ctx->pc = 0x13C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C2D8u;
    // 0x13c2dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C2D8u, 0x13C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C2E0u;
label_13c2e0:
    // 0x13c2e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13c2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13c2e4:
    // 0x13c2e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13c2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c2e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c2e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c2ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c2f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13C2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C2F4u;
        // 0x13c2f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C2FCu;
}
