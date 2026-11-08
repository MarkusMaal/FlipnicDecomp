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

// Function: FUN_001683d0
// Address: 0x1683d0 - 0x168440
void FUN_001683d0_0x1683d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001683d0_0x1683d0");
#endif

    switch (ctx->pc) {
        case 0x168410u: goto label_168410;
        case 0x168428u: goto label_168428;
        default: break;
    }

    ctx->pc = 0x1683d0u;

    // 0x1683d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1683d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1683d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1683d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1683d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1683d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1683dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1683dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1683e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1683e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683e4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1683E4u;
    {
        const bool branch_taken_0x1683e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1683E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683E4u;
        // 0x1683e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683e4) {
            ctx->pc = 0x168428u;
            goto label_168428;
        }
    }
    ctx->pc = 0x1683ECu;
    // 0x1683ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1683ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1683f0: 0x2442a010  addiu       $v0, $v0, -0x5FF0
    ctx->pc = 0x1683f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942736));
    // 0x1683f4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1683F4u;
    {
        const bool branch_taken_0x1683f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1683F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683F4u;
        // 0x1683f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683f4) {
            ctx->pc = 0x168410u;
            goto label_168410;
        }
    }
    ctx->pc = 0x1683FCu;
    // 0x1683fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1683fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x168400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168404: 0x2442a070  addiu       $v0, $v0, -0x5F90
    ctx->pc = 0x168404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942832));
    // 0x168408: 0xc041750  jal         func_105D40
    ctx->pc = 0x168408u;
    SET_GPR_U32(ctx, 31, 0x168410u);
    ctx->pc = 0x16840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168408u;
    // 0x16840c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D40u, 0x168408u, 0x168410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168410u;
label_168410:
    // 0x168410: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x168410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x168414: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x168414u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x168418: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168418u;
    {
        const bool branch_taken_0x168418 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168418u;
        // 0x16841c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168418) {
            ctx->pc = 0x16842Cu;
            goto label_16842c;
        }
    }
    ctx->pc = 0x168420u;
    // 0x168420: 0xc0401a4  jal         func_100690
    ctx->pc = 0x168420u;
    SET_GPR_U32(ctx, 31, 0x168428u);
    ctx->pc = 0x168424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168420u;
    // 0x168424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x168420u, 0x168428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168428u;
label_168428:
    // 0x168428: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x168428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16842c:
    // 0x16842c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16842cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168438: 0x3e00008  jr          $ra
    ctx->pc = 0x168438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168438u;
        // 0x16843c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168440u;
}
