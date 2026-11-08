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

// Function: FUN_00105610
// Address: 0x105610 - 0x105670
void FUN_00105610_0x105610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105610_0x105610");
#endif

    switch (ctx->pc) {
        case 0x10565cu: goto label_10565c;
        default: break;
    }

    ctx->pc = 0x105610u;

    // 0x105610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10561c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10561cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105620: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x105620u;
    {
        const bool branch_taken_0x105620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105620u;
        // 0x105624: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105620) {
            ctx->pc = 0x105660u;
            goto label_105660;
        }
    }
    ctx->pc = 0x105628u;
    // 0x105628: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10562c: 0x2442ae80  addiu       $v0, $v0, -0x5180
    ctx->pc = 0x10562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
    // 0x105630: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105630u;
    {
        const bool branch_taken_0x105630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105630u;
        // 0x105634: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105630) {
            ctx->pc = 0x105644u;
            goto label_105644;
        }
    }
    ctx->pc = 0x105638u;
    // 0x105638: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10563c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x10563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105640: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105644:
    // 0x105644: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105648: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105648u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10564c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10564Cu;
    {
        const bool branch_taken_0x10564c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10564Cu;
        // 0x105650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10564c) {
            ctx->pc = 0x10565Cu;
            goto label_10565c;
        }
    }
    ctx->pc = 0x105654u;
    // 0x105654: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105654u;
    SET_GPR_U32(ctx, 31, 0x10565Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105654u, 0x10565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10565Cu;
label_10565c:
    // 0x10565c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10565cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105660:
    // 0x105660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105668: 0x3e00008  jr          $ra
    ctx->pc = 0x105668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105668u;
        // 0x10566c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105670u;
}
