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

// Function: FUN_001c6880
// Address: 0x1c6880 - 0x1c68f0
void FUN_001c6880_0x1c6880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c6880_0x1c6880");
#endif

    switch (ctx->pc) {
        case 0x1c68b4u: goto label_1c68b4;
        case 0x1c68c0u: goto label_1c68c0;
        case 0x1c68d8u: goto label_1c68d8;
        default: break;
    }

    ctx->pc = 0x1c6880u;

    // 0x1c6880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c688c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6894: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C6894u;
    {
        const bool branch_taken_0x1c6894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6894u;
        // 0x1c6898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6894) {
            ctx->pc = 0x1C68D8u;
            goto label_1c68d8;
        }
    }
    ctx->pc = 0x1C689Cu;
    // 0x1c689c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1c68a0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x1c68a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x1c68a4: 0x2442bc50  addiu       $v0, $v0, -0x43B0
    ctx->pc = 0x1c68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949968));
    // 0x1c68a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c68a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c68ac: 0xc0745f8  jal         func_1D17E0
    ctx->pc = 0x1C68ACu;
    SET_GPR_U32(ctx, 31, 0x1C68B4u);
    ctx->pc = 0x1C68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68ACu;
    // 0x1c68b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17E0u, 0x1C68ACu, 0x1C68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68B4u;
label_1c68b4:
    // 0x1c68b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c68b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68b8: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1C68B8u;
    SET_GPR_U32(ctx, 31, 0x1C68C0u);
    ctx->pc = 0x1C68BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68B8u;
    // 0x1c68bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1C68B8u, 0x1C68C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68C0u;
label_1c68c0:
    // 0x1c68c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c68c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1c68c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c68c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c68c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C68C8u;
    {
        const bool branch_taken_0x1c68c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68C8u;
        // 0x1c68cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68c8) {
            ctx->pc = 0x1C68DCu;
            goto label_1c68dc;
        }
    }
    ctx->pc = 0x1C68D0u;
    // 0x1c68d0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C68D0u;
    SET_GPR_U32(ctx, 31, 0x1C68D8u);
    ctx->pc = 0x1C68D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68D0u;
    // 0x1c68d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C68D0u, 0x1C68D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68D8u;
label_1c68d8:
    // 0x1c68d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c68d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c68dc:
    // 0x1c68dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c68dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c68e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c68e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c68e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c68e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c68e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C68E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68E8u;
        // 0x1c68ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C68E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C68F0u;
}
