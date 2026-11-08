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

// Function: FUN_00106990
// Address: 0x106990 - 0x106a20
void FUN_00106990_0x106990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106990_0x106990");
#endif

    switch (ctx->pc) {
        case 0x1069f0u: goto label_1069f0;
        case 0x106a08u: goto label_106a08;
        default: break;
    }

    ctx->pc = 0x106990u;

    // 0x106990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10699c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1069a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1069a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069a4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1069A4u;
    {
        const bool branch_taken_0x1069a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069A4u;
        // 0x1069a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069a4) {
            ctx->pc = 0x106A08u;
            goto label_106a08;
        }
    }
    ctx->pc = 0x1069ACu;
    // 0x1069ac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1069acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1069b0: 0x24427c90  addiu       $v0, $v0, 0x7C90
    ctx->pc = 0x1069b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31888));
    // 0x1069b4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1069B4u;
    {
        const bool branch_taken_0x1069b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069B4u;
        // 0x1069b8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069b4) {
            ctx->pc = 0x1069F0u;
            goto label_1069f0;
        }
    }
    ctx->pc = 0x1069BCu;
    // 0x1069bc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1069bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1069c0: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x1069c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x1069c4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1069C4u;
    {
        const bool branch_taken_0x1069c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069C4u;
        // 0x1069c8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069c4) {
            ctx->pc = 0x1069F0u;
            goto label_1069f0;
        }
    }
    ctx->pc = 0x1069CCu;
    // 0x1069cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1069ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1069d0: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x1069d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x1069d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1069D4u;
    {
        const bool branch_taken_0x1069d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069D4u;
        // 0x1069d8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069d4) {
            ctx->pc = 0x1069F0u;
            goto label_1069f0;
        }
    }
    ctx->pc = 0x1069DCu;
    // 0x1069dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1069dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1069e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1069e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069e4: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1069e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1069e8: 0xc04176c  jal         func_105DB0
    ctx->pc = 0x1069E8u;
    SET_GPR_U32(ctx, 31, 0x1069F0u);
    ctx->pc = 0x1069ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1069E8u;
    // 0x1069ec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105DB0u, 0x1069E8u, 0x1069F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1069F0u;
label_1069f0:
    // 0x1069f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1069f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1069f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1069f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1069f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1069F8u;
    {
        const bool branch_taken_0x1069f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1069FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069F8u;
        // 0x1069fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069f8) {
            ctx->pc = 0x106A0Cu;
            goto label_106a0c;
        }
    }
    ctx->pc = 0x106A00u;
    // 0x106a00: 0xc0401a4  jal         func_100690
    ctx->pc = 0x106A00u;
    SET_GPR_U32(ctx, 31, 0x106A08u);
    ctx->pc = 0x106A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A00u;
    // 0x106a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106A00u, 0x106A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A08u;
label_106a08:
    // 0x106a08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106a0c:
    // 0x106a0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x106a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106a18: 0x3e00008  jr          $ra
    ctx->pc = 0x106A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A18u;
        // 0x106a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106A20u;
}
