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

// Function: FUN_0016b8d0
// Address: 0x16b8d0 - 0x16b950
void FUN_0016b8d0_0x16b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016b8d0_0x16b8d0");
#endif

    switch (ctx->pc) {
        case 0x16b914u: goto label_16b914;
        case 0x16b920u: goto label_16b920;
        case 0x16b938u: goto label_16b938;
        default: break;
    }

    ctx->pc = 0x16b8d0u;

    // 0x16b8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16b8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16b8d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16b8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16b8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b8dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b8e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b8e4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16B8E4u;
    {
        const bool branch_taken_0x16b8e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8E4u;
        // 0x16b8e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b8e4) {
            ctx->pc = 0x16B938u;
            goto label_16b938;
        }
    }
    ctx->pc = 0x16B8ECu;
    // 0x16b8ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16b8f0: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x16b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x16b8f4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x16B8F4u;
    {
        const bool branch_taken_0x16b8f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8F4u;
        // 0x16b8f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b8f4) {
            ctx->pc = 0x16B920u;
            goto label_16b920;
        }
    }
    ctx->pc = 0x16B8FCu;
    // 0x16b8fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16b900: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x16b900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16b904: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x16b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x16b908: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16b908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b90c: 0xc0417f0  jal         func_105FC0
    ctx->pc = 0x16B90Cu;
    SET_GPR_U32(ctx, 31, 0x16B914u);
    ctx->pc = 0x16B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B90Cu;
    // 0x16b910: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105FC0u, 0x16B90Cu, 0x16B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B914u;
label_16b914:
    // 0x16b914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b918: 0xc041808  jal         func_106020
    ctx->pc = 0x16B918u;
    SET_GPR_U32(ctx, 31, 0x16B920u);
    ctx->pc = 0x16B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B918u;
    // 0x16b91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106020u, 0x16B918u, 0x16B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B920u;
label_16b920:
    // 0x16b920: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x16b920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x16b924: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16b924u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16b928: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B928u;
    {
        const bool branch_taken_0x16b928 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B928u;
        // 0x16b92c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b928) {
            ctx->pc = 0x16B93Cu;
            goto label_16b93c;
        }
    }
    ctx->pc = 0x16B930u;
    // 0x16b930: 0xc0401a4  jal         func_100690
    ctx->pc = 0x16B930u;
    SET_GPR_U32(ctx, 31, 0x16B938u);
    ctx->pc = 0x16B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B930u;
    // 0x16b934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x16B930u, 0x16B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B938u;
label_16b938:
    // 0x16b938: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16b938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16b93c:
    // 0x16b93c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16b93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b948: 0x3e00008  jr          $ra
    ctx->pc = 0x16B948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B948u;
        // 0x16b94c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B950u;
}
