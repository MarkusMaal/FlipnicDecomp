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

// Function: FUN_00168600
// Address: 0x168600 - 0x168670
void FUN_00168600_0x168600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168600_0x168600");
#endif

    switch (ctx->pc) {
        case 0x168640u: goto label_168640;
        case 0x168658u: goto label_168658;
        default: break;
    }

    ctx->pc = 0x168600u;

    // 0x168600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16860c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x168610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168614: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x168614u;
    {
        const bool branch_taken_0x168614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x168618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168614u;
        // 0x168618: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168614) {
            ctx->pc = 0x168658u;
            goto label_168658;
        }
    }
    ctx->pc = 0x16861Cu;
    // 0x16861c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x168620: 0x2442a2b0  addiu       $v0, $v0, -0x5D50
    ctx->pc = 0x168620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
    // 0x168624: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x168624u;
    {
        const bool branch_taken_0x168624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x168628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168624u;
        // 0x168628: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168624) {
            ctx->pc = 0x168640u;
            goto label_168640;
        }
    }
    ctx->pc = 0x16862Cu;
    // 0x16862c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x168630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168634: 0x2442a070  addiu       $v0, $v0, -0x5F90
    ctx->pc = 0x168634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942832));
    // 0x168638: 0xc041750  jal         func_105D40
    ctx->pc = 0x168638u;
    SET_GPR_U32(ctx, 31, 0x168640u);
    ctx->pc = 0x16863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168638u;
    // 0x16863c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D40u, 0x168638u, 0x168640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168640u;
label_168640:
    // 0x168640: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x168640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x168644: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x168644u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x168648: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168648u;
    {
        const bool branch_taken_0x168648 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168648u;
        // 0x16864c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168648) {
            ctx->pc = 0x16865Cu;
            goto label_16865c;
        }
    }
    ctx->pc = 0x168650u;
    // 0x168650: 0xc0401a4  jal         func_100690
    ctx->pc = 0x168650u;
    SET_GPR_U32(ctx, 31, 0x168658u);
    ctx->pc = 0x168654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168650u;
    // 0x168654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x168650u, 0x168658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168658u;
label_168658:
    // 0x168658: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x168658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16865c:
    // 0x16865c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16865cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168668: 0x3e00008  jr          $ra
    ctx->pc = 0x168668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168668u;
        // 0x16866c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168670u;
}
