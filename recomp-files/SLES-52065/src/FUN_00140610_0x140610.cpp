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

// Function: FUN_00140610
// Address: 0x140610 - 0x140658
void FUN_00140610_0x140610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00140610_0x140610");
#endif

    ctx->pc = 0x140610u;

    // 0x140610: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x140610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x140614: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140618: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x140618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x14061c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x14061cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140620: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x140620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x140624: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x140624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x140628: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x140628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14062c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14062cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140630: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x140630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x140634: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x140634u;
    {
        const bool branch_taken_0x140634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140634) {
            ctx->pc = 0x140640u;
            goto label_140640;
        }
    }
    ctx->pc = 0x14063Cu;
    // 0x14063c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x14063cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_140640:
    // 0x140640: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x140640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140644: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x140644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140648: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x140648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x14064c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x140650: 0x3e00008  jr          $ra
    ctx->pc = 0x140650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140650u;
        // 0x140654: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140658u;
}
