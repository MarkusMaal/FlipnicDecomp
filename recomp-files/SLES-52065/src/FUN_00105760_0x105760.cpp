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

// Function: FUN_00105760
// Address: 0x105760 - 0x1057f0
void FUN_00105760_0x105760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105760_0x105760");
#endif

    switch (ctx->pc) {
        case 0x1057c0u: goto label_1057c0;
        case 0x1057d8u: goto label_1057d8;
        default: break;
    }

    ctx->pc = 0x105760u;

    // 0x105760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x105764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x105768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x105768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10576c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10576cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105770: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105774: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x105774u;
    {
        const bool branch_taken_0x105774 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105774u;
        // 0x105778: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105774) {
            ctx->pc = 0x1057D8u;
            goto label_1057d8;
        }
    }
    ctx->pc = 0x10577Cu;
    // 0x10577c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105780: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x105780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x105784: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x105784u;
    {
        const bool branch_taken_0x105784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105784u;
        // 0x105788: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105784) {
            ctx->pc = 0x1057C0u;
            goto label_1057c0;
        }
    }
    ctx->pc = 0x10578Cu;
    // 0x10578c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10578cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105790: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x105790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x105794: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x105794u;
    {
        const bool branch_taken_0x105794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105794u;
        // 0x105798: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105794) {
            ctx->pc = 0x1057C0u;
            goto label_1057c0;
        }
    }
    ctx->pc = 0x10579Cu;
    // 0x10579c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10579cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1057a0: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1057a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1057a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1057A4u;
    {
        const bool branch_taken_0x1057a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1057A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057A4u;
        // 0x1057a8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057a4) {
            ctx->pc = 0x1057C0u;
            goto label_1057c0;
        }
    }
    ctx->pc = 0x1057ACu;
    // 0x1057ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1057acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1057b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1057b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057b4: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1057b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1057b8: 0xc0418ec  jal         func_1063B0
    ctx->pc = 0x1057B8u;
    SET_GPR_U32(ctx, 31, 0x1057C0u);
    ctx->pc = 0x1057BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057B8u;
    // 0x1057bc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1063B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063B0u, 0x1057B8u, 0x1057C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057C0u;
label_1057c0:
    // 0x1057c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1057c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1057c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1057c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1057c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1057C8u;
    {
        const bool branch_taken_0x1057c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1057CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057C8u;
        // 0x1057cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057c8) {
            ctx->pc = 0x1057DCu;
            goto label_1057dc;
        }
    }
    ctx->pc = 0x1057D0u;
    // 0x1057d0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1057D0u;
    SET_GPR_U32(ctx, 31, 0x1057D8u);
    ctx->pc = 0x1057D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057D0u;
    // 0x1057d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1057D0u, 0x1057D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057D8u;
label_1057d8:
    // 0x1057d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1057d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1057dc:
    // 0x1057dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1057dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1057e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1057e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1057e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1057e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1057e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1057E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1057ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057E8u;
        // 0x1057ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1057E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1057F0u;
}
