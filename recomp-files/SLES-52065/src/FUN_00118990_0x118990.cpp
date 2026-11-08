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

// Function: FUN_00118990
// Address: 0x118990 - 0x118a00
void FUN_00118990_0x118990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118990_0x118990");
#endif

    switch (ctx->pc) {
        case 0x1189d0u: goto label_1189d0;
        case 0x1189e8u: goto label_1189e8;
        default: break;
    }

    ctx->pc = 0x118990u;

    // 0x118990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11899c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11899cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1189a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1189a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1189A4u;
    {
        const bool branch_taken_0x1189a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1189A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189A4u;
        // 0x1189a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189a4) {
            ctx->pc = 0x1189E8u;
            goto label_1189e8;
        }
    }
    ctx->pc = 0x1189ACu;
    // 0x1189ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1189acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1189b0: 0x244286b0  addiu       $v0, $v0, -0x7950
    ctx->pc = 0x1189b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936240));
    // 0x1189b4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1189B4u;
    {
        const bool branch_taken_0x1189b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1189B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189B4u;
        // 0x1189b8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189b4) {
            ctx->pc = 0x1189D0u;
            goto label_1189d0;
        }
    }
    ctx->pc = 0x1189BCu;
    // 0x1189bc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1189bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1189c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1189c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189c4: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1189c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1189c8: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1189C8u;
    SET_GPR_U32(ctx, 31, 0x1189D0u);
    ctx->pc = 0x1189CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1189C8u;
    // 0x1189cc: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1189C8u, 0x1189D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1189D0u;
label_1189d0:
    // 0x1189d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1189d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1189d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1189d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1189d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1189D8u;
    {
        const bool branch_taken_0x1189d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1189DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189D8u;
        // 0x1189dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189d8) {
            ctx->pc = 0x1189ECu;
            goto label_1189ec;
        }
    }
    ctx->pc = 0x1189E0u;
    // 0x1189e0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1189E0u;
    SET_GPR_U32(ctx, 31, 0x1189E8u);
    ctx->pc = 0x1189E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1189E0u;
    // 0x1189e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1189E0u, 0x1189E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1189E8u;
label_1189e8:
    // 0x1189e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1189e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1189ec:
    // 0x1189ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1189ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1189f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1189f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1189f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1189f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1189f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1189F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1189FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189F8u;
        // 0x1189fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1189F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118A00u;
}
