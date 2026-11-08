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

// Function: FUN_00125380
// Address: 0x125380 - 0x1253fc
void FUN_00125380_0x125380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125380_0x125380");
#endif

    switch (ctx->pc) {
        case 0x1253c0u: goto label_1253c0;
        case 0x1253ccu: goto label_1253cc;
        case 0x1253e4u: goto label_1253e4;
        default: break;
    }

    ctx->pc = 0x125380u;

    // 0x125380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x125384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x125388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12538c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12538cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125394: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x125394u;
    {
        const bool branch_taken_0x125394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x125398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125394u;
        // 0x125398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125394) {
            ctx->pc = 0x1253E4u;
            goto label_1253e4;
        }
    }
    ctx->pc = 0x12539Cu;
    // 0x12539c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x12539cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1253a0: 0x24428900  addiu       $v0, $v0, -0x7700
    ctx->pc = 0x1253a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936832));
    // 0x1253a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1253a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1253a8: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1253a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1253ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1253ACu;
    {
        const bool branch_taken_0x1253ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253ACu;
        // 0x1253b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253ac) {
            ctx->pc = 0x1253C4u;
            goto label_1253c4;
        }
    }
    ctx->pc = 0x1253B4u;
    // 0x1253b4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1253b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1253b8: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x1253B8u;
    SET_GPR_U32(ctx, 31, 0x1253C0u);
    ctx->pc = 0x1253BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1253B8u;
    // 0x1253bc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x1253B8u, 0x1253C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253C0u;
label_1253c0:
    // 0x1253c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1253c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1253c4:
    // 0x1253c4: 0xc04925c  jal         func_124970
    ctx->pc = 0x1253C4u;
    SET_GPR_U32(ctx, 31, 0x1253CCu);
    ctx->pc = 0x1253C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1253C4u;
    // 0x1253c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124970u, 0x1253C4u, 0x1253CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253CCu;
label_1253cc:
    // 0x1253cc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1253ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1253d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1253d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1253d4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1253D4u;
    {
        const bool branch_taken_0x1253d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1253D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253D4u;
        // 0x1253d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253d4) {
            ctx->pc = 0x1253E8u;
            goto label_1253e8;
        }
    }
    ctx->pc = 0x1253DCu;
    // 0x1253dc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1253DCu;
    SET_GPR_U32(ctx, 31, 0x1253E4u);
    ctx->pc = 0x1253E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1253DCu;
    // 0x1253e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1253DCu, 0x1253E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253E4u;
label_1253e4:
    // 0x1253e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1253e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1253e8:
    // 0x1253e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1253e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1253ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1253ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1253f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1253f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1253f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1253F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1253F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253F4u;
        // 0x1253f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1253F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1253FCu;
}
