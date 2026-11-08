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

// Function: FUN_001654c0
// Address: 0x1654c0 - 0x165554
void FUN_001654c0_0x1654c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001654c0_0x1654c0");
#endif

    switch (ctx->pc) {
        case 0x165500u: goto label_165500;
        case 0x165508u: goto label_165508;
        case 0x165510u: goto label_165510;
        case 0x16553cu: goto label_16553c;
        default: break;
    }

    ctx->pc = 0x1654c0u;

    // 0x1654c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1654c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1654c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1654c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1654c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1654c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1654cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1654ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1654d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1654d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1654d4: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1654D4u;
    {
        const bool branch_taken_0x1654d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1654D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654D4u;
        // 0x1654d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654d4) {
            ctx->pc = 0x16553Cu;
            goto label_16553c;
        }
    }
    ctx->pc = 0x1654DCu;
    // 0x1654dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1654dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1654e0: 0x24429b90  addiu       $v0, $v0, -0x6470
    ctx->pc = 0x1654e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941584));
    // 0x1654e4: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1654E4u;
    {
        const bool branch_taken_0x1654e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1654E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654E4u;
        // 0x1654e8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654e4) {
            ctx->pc = 0x165524u;
            goto label_165524;
        }
    }
    ctx->pc = 0x1654ECu;
    // 0x1654ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1654ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1654f0: 0x24429ad0  addiu       $v0, $v0, -0x6530
    ctx->pc = 0x1654f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941392));
    // 0x1654f4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1654f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1654f8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1654F8u;
    SET_GPR_U32(ctx, 31, 0x165500u);
    ctx->pc = 0x1654FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654F8u;
    // 0x1654fc: 0x8e24021c  lw          $a0, 0x21C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1654F8u, 0x165500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165500u;
label_165500:
    // 0x165500: 0xc04018c  jal         func_100630
    ctx->pc = 0x165500u;
    SET_GPR_U32(ctx, 31, 0x165508u);
    ctx->pc = 0x165504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165500u;
    // 0x165504: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x165500u, 0x165508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165508u;
label_165508:
    // 0x165508: 0xc04018c  jal         func_100630
    ctx->pc = 0x165508u;
    SET_GPR_U32(ctx, 31, 0x165510u);
    ctx->pc = 0x16550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165508u;
    // 0x16550c: 0x8e240224  lw          $a0, 0x224($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x165508u, 0x165510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165510u;
label_165510:
    // 0x165510: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x165510u;
    {
        const bool branch_taken_0x165510 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x165514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165510u;
        // 0x165514: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165510) {
            ctx->pc = 0x165528u;
            goto label_165528;
        }
    }
    ctx->pc = 0x165518u;
    // 0x165518: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x165518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16551c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x16551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x165520: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x165520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_165524:
    // 0x165524: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x165524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_165528:
    // 0x165528: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x165528u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16552c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16552Cu;
    {
        const bool branch_taken_0x16552c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x165530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16552Cu;
        // 0x165530: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16552c) {
            ctx->pc = 0x165540u;
            goto label_165540;
        }
    }
    ctx->pc = 0x165534u;
    // 0x165534: 0xc0401a4  jal         func_100690
    ctx->pc = 0x165534u;
    SET_GPR_U32(ctx, 31, 0x16553Cu);
    ctx->pc = 0x165538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165534u;
    // 0x165538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x165534u, 0x16553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16553Cu;
label_16553c:
    // 0x16553c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16553cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165540:
    // 0x165540: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16554c: 0x3e00008  jr          $ra
    ctx->pc = 0x16554Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16554Cu;
        // 0x165550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16554Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165554u;
}
