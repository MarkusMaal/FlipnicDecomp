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

// Function: FUN_001ff640
// Address: 0x1ff640 - 0x1ff67c
void FUN_001ff640_0x1ff640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ff640_0x1ff640");
#endif

    ctx->pc = 0x1ff640u;

    // 0x1ff640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff644: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1ff644u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff648: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF648u;
    {
        const bool branch_taken_0x1ff648 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF648u;
        // 0x1ff64c: 0xa5180b  movn        $v1, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff648) {
            ctx->pc = 0x1FF660u;
            goto label_1ff660;
        }
    }
    ctx->pc = 0x1FF650u;
    // 0x1ff650: 0x54e00005  bnel        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF650u;
    {
        const bool branch_taken_0x1ff650 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff650) {
            ctx->pc = 0x1FF654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF650u;
            // 0x1ff654: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF668u;
            goto label_1ff668;
        }
    }
    ctx->pc = 0x1FF658u;
    // 0x1ff658: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF658u;
    {
        const bool branch_taken_0x1ff658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF658u;
        // 0x1ff65c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff658) {
            ctx->pc = 0x1FF674u;
            goto label_1ff674;
        }
    }
    ctx->pc = 0x1FF660u;
label_1ff660:
    // 0x1ff660: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF660u;
    {
        const bool branch_taken_0x1ff660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF660u;
        // 0x1ff664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff660) {
            ctx->pc = 0x1FF674u;
            goto label_1ff674;
        }
    }
    ctx->pc = 0x1FF668u;
label_1ff668:
    // 0x1ff668: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ff668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ff66c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ff66cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ff670: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ff670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ff674:
    // 0x1ff674: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF674u;
        // 0x1ff678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF67Cu;
}
