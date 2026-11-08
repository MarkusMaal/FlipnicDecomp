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

// Function: FUN_001df628
// Address: 0x1df628 - 0x1df6a4
void FUN_001df628_0x1df628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001df628_0x1df628");
#endif

    switch (ctx->pc) {
        case 0x1df660u: goto label_1df660;
        case 0x1df688u: goto label_1df688;
        default: break;
    }

    ctx->pc = 0x1df628u;

    // 0x1df628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df62c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df630: 0x4800017  bltz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DF630u;
    {
        const bool branch_taken_0x1df630 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1DF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF630u;
        // 0x1df634: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df630) {
            ctx->pc = 0x1DF690u;
            goto label_1df690;
        }
    }
    ctx->pc = 0x1DF638u;
    // 0x1df638: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DF638u;
    {
        const bool branch_taken_0x1df638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF638u;
        // 0x1df63c: 0x481c0  sll         $s0, $a0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df638) {
            ctx->pc = 0x1DF668u;
            goto label_1df668;
        }
    }
    ctx->pc = 0x1DF640u;
    // 0x1df640: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1df640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1df644: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1df644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1df648: 0x24219f00  addiu       $at, $at, -0x6100
    ctx->pc = 0x1df648u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294942464));
    // 0x1df64c: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1df64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1df650: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1df650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df654: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1df654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1df658: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DF658u;
    SET_GPR_U32(ctx, 31, 0x1DF660u);
    ctx->pc = 0x1DF65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF658u;
    // 0x1df65c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DF658u, 0x1DF660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF660u;
label_1df660:
    // 0x1df660: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DF660u;
    {
        const bool branch_taken_0x1df660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF660u;
        // 0x1df664: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df660) {
            ctx->pc = 0x1DF68Cu;
            goto label_1df68c;
        }
    }
    ctx->pc = 0x1DF668u;
label_1df668:
    // 0x1df668: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1df668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1df66c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1df66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1df670: 0x24219f00  addiu       $at, $at, -0x6100
    ctx->pc = 0x1df670u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294942464));
    // 0x1df674: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1df674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1df678: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1df678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df67c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1df67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1df680: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DF680u;
    SET_GPR_U32(ctx, 31, 0x1DF688u);
    ctx->pc = 0x1DF684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF680u;
    // 0x1df684: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DF680u, 0x1DF688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF688u;
label_1df688:
    // 0x1df688: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1df688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1df68c:
    // 0x1df68c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1df68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1df690:
    // 0x1df690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df698: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1df698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df69c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF69Cu;
        // 0x1df6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF6A4u;
}
