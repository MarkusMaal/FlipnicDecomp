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

// Function: FUN_0012a580
// Address: 0x12a580 - 0x12a5ec
void FUN_0012a580_0x12a580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a580_0x12a580");
#endif

    switch (ctx->pc) {
        case 0x12a5bcu: goto label_12a5bc;
        case 0x12a5d4u: goto label_12a5d4;
        default: break;
    }

    ctx->pc = 0x12a580u;

    // 0x12a580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12a588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12a588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12a58c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12a590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a594: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x12A594u;
    {
        const bool branch_taken_0x12a594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A594u;
        // 0x12a598: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a594) {
            ctx->pc = 0x12A5D4u;
            goto label_12a5d4;
        }
    }
    ctx->pc = 0x12A59Cu;
    // 0x12a59c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x12a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x12a5a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12a5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a5a4: 0x24428b40  addiu       $v0, $v0, -0x74C0
    ctx->pc = 0x12a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937408));
    // 0x12a5a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12a5ac: 0x8f828478  lw          $v0, -0x7B88($gp)
    ctx->pc = 0x12a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935672)));
    // 0x12a5b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12a5b4: 0xc04a81c  jal         func_12A070
    ctx->pc = 0x12A5B4u;
    SET_GPR_U32(ctx, 31, 0x12A5BCu);
    ctx->pc = 0x12A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A5B4u;
    // 0x12a5b8: 0xaf828478  sw          $v0, -0x7B88($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A070u, 0x12A5B4u, 0x12A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A5BCu;
label_12a5bc:
    // 0x12a5bc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x12a5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x12a5c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12a5c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12a5c4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A5C4u;
    {
        const bool branch_taken_0x12a5c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5C4u;
        // 0x12a5c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5c4) {
            ctx->pc = 0x12A5D8u;
            goto label_12a5d8;
        }
    }
    ctx->pc = 0x12A5CCu;
    // 0x12a5cc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12A5CCu;
    SET_GPR_U32(ctx, 31, 0x12A5D4u);
    ctx->pc = 0x12A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A5CCu;
    // 0x12a5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12A5CCu, 0x12A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A5D4u;
label_12a5d4:
    // 0x12a5d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12a5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a5d8:
    // 0x12a5d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a5dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12a5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a5e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x12A5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5E4u;
        // 0x12a5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A5ECu;
}
