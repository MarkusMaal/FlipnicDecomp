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

// Function: FUN_001a8580
// Address: 0x1a8580 - 0x1a85e0
void FUN_001a8580_0x1a8580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a8580_0x1a8580");
#endif

    switch (ctx->pc) {
        case 0x1a85b0u: goto label_1a85b0;
        case 0x1a85c8u: goto label_1a85c8;
        default: break;
    }

    ctx->pc = 0x1a8580u;

    // 0x1a8580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a8584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a8584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a8588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a8588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a858c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a8590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a8590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8594: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A8594u;
    {
        const bool branch_taken_0x1a8594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8594u;
        // 0x1a8598: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8594) {
            ctx->pc = 0x1A85C8u;
            goto label_1a85c8;
        }
    }
    ctx->pc = 0x1A859Cu;
    // 0x1a859c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a859cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a85a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a85a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85a4: 0x2442b560  addiu       $v0, $v0, -0x4AA0
    ctx->pc = 0x1a85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948192));
    // 0x1a85a8: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A85A8u;
    SET_GPR_U32(ctx, 31, 0x1A85B0u);
    ctx->pc = 0x1A85ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85A8u;
    // 0x1a85ac: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A85A8u, 0x1A85B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85B0u;
label_1a85b0:
    // 0x1a85b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a85b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a85b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a85b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a85b8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A85B8u;
    {
        const bool branch_taken_0x1a85b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85B8u;
        // 0x1a85bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85b8) {
            ctx->pc = 0x1A85CCu;
            goto label_1a85cc;
        }
    }
    ctx->pc = 0x1A85C0u;
    // 0x1a85c0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A85C0u;
    SET_GPR_U32(ctx, 31, 0x1A85C8u);
    ctx->pc = 0x1A85C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85C0u;
    // 0x1a85c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A85C0u, 0x1A85C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85C8u;
label_1a85c8:
    // 0x1a85c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a85c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a85cc:
    // 0x1a85cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a85ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a85d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a85d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a85d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a85d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a85d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A85D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85D8u;
        // 0x1a85dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A85D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A85E0u;
}
