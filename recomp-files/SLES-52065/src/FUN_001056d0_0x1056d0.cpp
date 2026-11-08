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

// Function: FUN_001056d0
// Address: 0x1056d0 - 0x105754
void FUN_001056d0_0x1056d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001056d0_0x1056d0");
#endif

    switch (ctx->pc) {
        case 0x105700u: goto label_105700;
        case 0x105708u: goto label_105708;
        case 0x105710u: goto label_105710;
        case 0x10573cu: goto label_10573c;
        default: break;
    }

    ctx->pc = 0x1056d0u;

    // 0x1056d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1056d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1056d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1056d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1056d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1056d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1056dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1056dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1056e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1056e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056e4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1056E4u;
    {
        const bool branch_taken_0x1056e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056E4u;
        // 0x1056e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056e4) {
            ctx->pc = 0x10573Cu;
            goto label_10573c;
        }
    }
    ctx->pc = 0x1056ECu;
    // 0x1056ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1056ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1056f0: 0x24429ad0  addiu       $v0, $v0, -0x6530
    ctx->pc = 0x1056f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941392));
    // 0x1056f4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1056f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1056f8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1056F8u;
    SET_GPR_U32(ctx, 31, 0x105700u);
    ctx->pc = 0x1056FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056F8u;
    // 0x1056fc: 0x8e24021c  lw          $a0, 0x21C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1056F8u, 0x105700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105700u;
label_105700:
    // 0x105700: 0xc04018c  jal         func_100630
    ctx->pc = 0x105700u;
    SET_GPR_U32(ctx, 31, 0x105708u);
    ctx->pc = 0x105704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105700u;
    // 0x105704: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x105700u, 0x105708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105708u;
label_105708:
    // 0x105708: 0xc04018c  jal         func_100630
    ctx->pc = 0x105708u;
    SET_GPR_U32(ctx, 31, 0x105710u);
    ctx->pc = 0x10570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105708u;
    // 0x10570c: 0x8e240224  lw          $a0, 0x224($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x105708u, 0x105710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105710u;
label_105710:
    // 0x105710: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x105710u;
    {
        const bool branch_taken_0x105710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105710u;
        // 0x105714: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105710) {
            ctx->pc = 0x105728u;
            goto label_105728;
        }
    }
    ctx->pc = 0x105718u;
    // 0x105718: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10571c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x10571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105720: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x105720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x105724: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x105724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_105728:
    // 0x105728: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105728u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10572c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10572Cu;
    {
        const bool branch_taken_0x10572c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10572Cu;
        // 0x105730: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10572c) {
            ctx->pc = 0x105740u;
            goto label_105740;
        }
    }
    ctx->pc = 0x105734u;
    // 0x105734: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105734u;
    SET_GPR_U32(ctx, 31, 0x10573Cu);
    ctx->pc = 0x105738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105734u;
    // 0x105738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105734u, 0x10573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10573Cu;
label_10573c:
    // 0x10573c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10573cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_105740:
    // 0x105740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x105740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x105744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10574c: 0x3e00008  jr          $ra
    ctx->pc = 0x10574Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10574Cu;
        // 0x105750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10574Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105754u;
}
