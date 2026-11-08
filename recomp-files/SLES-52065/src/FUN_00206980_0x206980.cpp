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

// Function: FUN_00206980
// Address: 0x206980 - 0x206a18
void FUN_00206980_0x206980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00206980_0x206980");
#endif

    switch (ctx->pc) {
        case 0x2069a8u: goto label_2069a8;
        case 0x2069b4u: goto label_2069b4;
        case 0x2069c0u: goto label_2069c0;
        case 0x2069e0u: goto label_2069e0;
        case 0x2069f8u: goto label_2069f8;
        case 0x206a04u: goto label_206a04;
        default: break;
    }

    ctx->pc = 0x206980u;

    // 0x206980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x206984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20698c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x206990: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x206990u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x206994: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x206994u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x206998: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x206998u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x20699c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2069a0: 0xc08218c  jal         func_208630
    ctx->pc = 0x2069A0u;
    SET_GPR_U32(ctx, 31, 0x2069A8u);
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x2069A0u, 0x2069A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069A8u;
label_2069a8:
    // 0x2069a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2069a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069ac: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x2069ACu;
    SET_GPR_U32(ctx, 31, 0x2069B4u);
    ctx->pc = 0x2069B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069ACu;
    // 0x2069b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x2069ACu, 0x2069B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069B4u;
label_2069b4:
    // 0x2069b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2069b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069b8: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x2069B8u;
    SET_GPR_U32(ctx, 31, 0x2069C0u);
    ctx->pc = 0x2069BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069B8u;
    // 0x2069bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x2069B8u, 0x2069C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069C0u;
label_2069c0:
    // 0x2069c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2069c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2069c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2069c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2069c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2069cc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2069ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2069d0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2069d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2069d4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2069d4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2069d8: 0xc08218c  jal         func_208630
    ctx->pc = 0x2069D8u;
    SET_GPR_U32(ctx, 31, 0x2069E0u);
    ctx->pc = 0x2069DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069D8u;
    // 0x2069dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x2069D8u, 0x2069E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069E0u;
label_2069e0:
    // 0x2069e0: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2069E0u;
    {
        const bool branch_taken_0x2069e0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2069E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069E0u;
        // 0x2069e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069e0) {
            ctx->pc = 0x2069FCu;
            goto label_2069fc;
        }
    }
    ctx->pc = 0x2069E8u;
    // 0x2069e8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x2069e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x2069ec: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2069ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2069f0: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x2069F0u;
    SET_GPR_U32(ctx, 31, 0x2069F8u);
    ctx->pc = 0x2069F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069F0u;
    // 0x2069f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x2069F0u, 0x2069F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069F8u;
label_2069f8:
    // 0x2069f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2069f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2069fc:
    // 0x2069fc: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x2069FCu;
    SET_GPR_U32(ctx, 31, 0x206A04u);
    ctx->pc = 0x206A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069FCu;
    // 0x206a00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x2069FCu, 0x206A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A04u;
label_206a04:
    // 0x206a04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206a08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x206a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206a0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206a10: 0x3e00008  jr          $ra
    ctx->pc = 0x206A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A10u;
        // 0x206a14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206A18u;
}
