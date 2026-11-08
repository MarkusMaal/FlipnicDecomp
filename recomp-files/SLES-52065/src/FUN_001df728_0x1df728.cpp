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

// Function: FUN_001df728
// Address: 0x1df728 - 0x1df760
void FUN_001df728_0x1df728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001df728_0x1df728");
#endif

    ctx->pc = 0x1df728u;

    // 0x1df728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df72c: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x1df72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1df730: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF730u;
    {
        const bool branch_taken_0x1df730 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1DF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF730u;
        // 0x1df734: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df730) {
            ctx->pc = 0x1DF750u;
            goto label_1df750;
        }
    }
    ctx->pc = 0x1DF738u;
    // 0x1df738: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1df738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1df73c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1df73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1df740: 0x8c849f08  lw          $a0, -0x60F8($a0)
    ctx->pc = 0x1df740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942472)));
    // 0x1df744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df748: 0x807565e  j           func_1D5978
    ctx->pc = 0x1DF748u;
    ctx->pc = 0x1DF74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF748u;
    // 0x1df74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5978u;
    FUN_001d5978_0x1d5978(rdram, ctx, runtime); return;
    ctx->pc = 0x1DF750u;
label_1df750:
    // 0x1df750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df758: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF758u;
        // 0x1df75c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF760u;
}
