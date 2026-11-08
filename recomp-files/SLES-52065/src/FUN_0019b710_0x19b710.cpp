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

// Function: FUN_0019b710
// Address: 0x19b710 - 0x19b770
void FUN_0019b710_0x19b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019b710_0x19b710");
#endif

    switch (ctx->pc) {
        case 0x19b740u: goto label_19b740;
        case 0x19b758u: goto label_19b758;
        default: break;
    }

    ctx->pc = 0x19b710u;

    // 0x19b710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b71c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19b720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b724: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x19B724u;
    {
        const bool branch_taken_0x19b724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B724u;
        // 0x19b728: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b724) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B72Cu;
    // 0x19b72c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19b730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b734: 0x2442b2d0  addiu       $v0, $v0, -0x4D30
    ctx->pc = 0x19b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947536));
    // 0x19b738: 0xc064324  jal         func_190C90
    ctx->pc = 0x19B738u;
    SET_GPR_U32(ctx, 31, 0x19B740u);
    ctx->pc = 0x19B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B738u;
    // 0x19b73c: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x19B738u, 0x19B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B740u;
label_19b740:
    // 0x19b740: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x19b740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x19b744: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19b744u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19b748: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B748u;
    {
        const bool branch_taken_0x19b748 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B748u;
        // 0x19b74c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b748) {
            ctx->pc = 0x19B75Cu;
            goto label_19b75c;
        }
    }
    ctx->pc = 0x19B750u;
    // 0x19b750: 0xc0401a4  jal         func_100690
    ctx->pc = 0x19B750u;
    SET_GPR_U32(ctx, 31, 0x19B758u);
    ctx->pc = 0x19B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B750u;
    // 0x19b754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x19B750u, 0x19B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B758u;
label_19b758:
    // 0x19b758: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19b75c:
    // 0x19b75c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b768: 0x3e00008  jr          $ra
    ctx->pc = 0x19B768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B768u;
        // 0x19b76c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B770u;
}
