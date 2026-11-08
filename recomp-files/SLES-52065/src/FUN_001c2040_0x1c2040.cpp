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

// Function: FUN_001c2040
// Address: 0x1c2040 - 0x1c2078
void FUN_001c2040_0x1c2040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c2040_0x1c2040");
#endif

    switch (ctx->pc) {
        case 0x1c2050u: goto label_1c2050;
        case 0x1c2058u: goto label_1c2058;
        default: break;
    }

    ctx->pc = 0x1c2040u;

    // 0x1c2040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2048: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1C2048u;
    SET_GPR_U32(ctx, 31, 0x1C2050u);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1C2048u, 0x1C2050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2050u;
label_1c2050:
    // 0x1c2050: 0xc072e58  jal         func_1CB960
    ctx->pc = 0x1C2050u;
    SET_GPR_U32(ctx, 31, 0x1C2058u);
    ctx->pc = 0x1C2054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2050u;
    // 0x1c2054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB960u, 0x1C2050u, 0x1C2058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2058u;
label_1c2058:
    // 0x1c2058: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c2058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c205c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c205cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2060: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c2060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c2064: 0x24421820  addiu       $v0, $v0, 0x1820
    ctx->pc = 0x1c2064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6176));
    // 0x1c2068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c206c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2070: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2070u;
        // 0x1c2074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2078u;
}
