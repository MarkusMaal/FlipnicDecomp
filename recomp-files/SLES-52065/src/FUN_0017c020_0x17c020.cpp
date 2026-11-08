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

// Function: FUN_0017c020
// Address: 0x17c020 - 0x17c048
void FUN_0017c020_0x17c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c020_0x17c020");
#endif

    switch (ctx->pc) {
        case 0x17c03cu: goto label_17c03c;
        default: break;
    }

    ctx->pc = 0x17c020u;

    // 0x17c020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c028: 0x8c830230  lw          $v1, 0x230($a0)
    ctx->pc = 0x17c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x17c02c: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C02Cu;
    {
        const bool branch_taken_0x17c02c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x17c02c) {
            ctx->pc = 0x17C03Cu;
            goto label_17c03c;
        }
    }
    ctx->pc = 0x17C034u;
    // 0x17c034: 0xc058694  jal         func_161A50
    ctx->pc = 0x17C034u;
    SET_GPR_U32(ctx, 31, 0x17C03Cu);
    ctx->pc = 0x161A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161A50u, 0x17C034u, 0x17C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C03Cu;
label_17c03c:
    // 0x17c03c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c040: 0x3e00008  jr          $ra
    ctx->pc = 0x17C040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C040u;
        // 0x17c044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C048u;
}
