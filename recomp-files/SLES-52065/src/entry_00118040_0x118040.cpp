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

// Function: entry_00118040
// Address: 0x118040 - 0x118064
void entry_00118040_0x118040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118040_0x118040");
#endif

    switch (ctx->pc) {
        case 0x118054u: goto label_118054;
        default: break;
    }

    ctx->pc = 0x118040u;

    // 0x118040: 0xaf828384  sw          $v0, -0x7C7C($gp)
    ctx->pc = 0x118040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935428), GPR_U32(ctx, 2));
    // 0x118044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118048: 0x24a5e5d0  addiu       $a1, $a1, -0x1A30
    ctx->pc = 0x118048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960592));
    // 0x11804c: 0xc06cfa0  jal         func_1B3E80
    ctx->pc = 0x11804Cu;
    SET_GPR_U32(ctx, 31, 0x118054u);
    ctx->pc = 0x118050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11804Cu;
    // 0x118050: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E80u, 0x11804Cu, 0x118054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118054u;
label_118054:
    // 0x118054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11805c: 0x3e00008  jr          $ra
    ctx->pc = 0x11805Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11805Cu;
        // 0x118060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11805Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118064u;
}
