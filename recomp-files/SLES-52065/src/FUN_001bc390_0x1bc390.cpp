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

// Function: FUN_001bc390
// Address: 0x1bc390 - 0x1bc3f0
void FUN_001bc390_0x1bc390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc390_0x1bc390");
#endif

    switch (ctx->pc) {
        case 0x1bc3c0u: goto label_1bc3c0;
        case 0x1bc3d8u: goto label_1bc3d8;
        default: break;
    }

    ctx->pc = 0x1bc390u;

    // 0x1bc390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bc390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bc394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bc394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bc398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bc39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc3a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc3a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc3a4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BC3A4u;
    {
        const bool branch_taken_0x1bc3a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3A4u;
        // 0x1bc3a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3a4) {
            ctx->pc = 0x1BC3D8u;
            goto label_1bc3d8;
        }
    }
    ctx->pc = 0x1BC3ACu;
    // 0x1bc3ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1bc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1bc3b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc3b4: 0x2442b9b0  addiu       $v0, $v0, -0x4650
    ctx->pc = 0x1bc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949296));
    // 0x1bc3b8: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1BC3B8u;
    SET_GPR_U32(ctx, 31, 0x1BC3C0u);
    ctx->pc = 0x1BC3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC3B8u;
    // 0x1bc3bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1BC3B8u, 0x1BC3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3C0u;
label_1bc3c0:
    // 0x1bc3c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1bc3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1bc3c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bc3c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bc3c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC3C8u;
    {
        const bool branch_taken_0x1bc3c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3C8u;
        // 0x1bc3cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3c8) {
            ctx->pc = 0x1BC3DCu;
            goto label_1bc3dc;
        }
    }
    ctx->pc = 0x1BC3D0u;
    // 0x1bc3d0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BC3D0u;
    SET_GPR_U32(ctx, 31, 0x1BC3D8u);
    ctx->pc = 0x1BC3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC3D0u;
    // 0x1bc3d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BC3D0u, 0x1BC3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3D8u;
label_1bc3d8:
    // 0x1bc3d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1bc3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc3dc:
    // 0x1bc3dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc3e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3E8u;
        // 0x1bc3ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC3F0u;
}
