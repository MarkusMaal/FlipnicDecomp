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

// Function: FUN_001283c0
// Address: 0x1283c0 - 0x128420
void FUN_001283c0_0x1283c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001283c0_0x1283c0");
#endif

    switch (ctx->pc) {
        case 0x1283f0u: goto label_1283f0;
        case 0x128408u: goto label_128408;
        default: break;
    }

    ctx->pc = 0x1283c0u;

    // 0x1283c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1283c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1283c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1283c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1283c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1283c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1283cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1283ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1283d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1283d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1283D4u;
    {
        const bool branch_taken_0x1283d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1283D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283D4u;
        // 0x1283d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283d4) {
            ctx->pc = 0x128408u;
            goto label_128408;
        }
    }
    ctx->pc = 0x1283DCu;
    // 0x1283dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1283dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1283e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1283e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283e4: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x1283e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
    // 0x1283e8: 0xc0497d8  jal         func_125F60
    ctx->pc = 0x1283E8u;
    SET_GPR_U32(ctx, 31, 0x1283F0u);
    ctx->pc = 0x1283ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1283E8u;
    // 0x1283ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F60u, 0x1283E8u, 0x1283F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1283F0u;
label_1283f0:
    // 0x1283f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1283f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1283f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1283f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1283f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1283F8u;
    {
        const bool branch_taken_0x1283f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1283FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283F8u;
        // 0x1283fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283f8) {
            ctx->pc = 0x12840Cu;
            goto label_12840c;
        }
    }
    ctx->pc = 0x128400u;
    // 0x128400: 0xc0401a4  jal         func_100690
    ctx->pc = 0x128400u;
    SET_GPR_U32(ctx, 31, 0x128408u);
    ctx->pc = 0x128404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128400u;
    // 0x128404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x128400u, 0x128408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128408u;
label_128408:
    // 0x128408: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x128408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12840c:
    // 0x12840c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12840cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128410: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128418: 0x3e00008  jr          $ra
    ctx->pc = 0x128418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128418u;
        // 0x12841c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128420u;
}
