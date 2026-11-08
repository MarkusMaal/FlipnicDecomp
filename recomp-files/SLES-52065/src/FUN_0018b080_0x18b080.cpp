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

// Function: FUN_0018b080
// Address: 0x18b080 - 0x18b0bc
void FUN_0018b080_0x18b080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b080_0x18b080");
#endif

    switch (ctx->pc) {
        case 0x18b090u: goto label_18b090;
        case 0x18b0acu: goto label_18b0ac;
        default: break;
    }

    ctx->pc = 0x18b080u;

    // 0x18b080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18b080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18b084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b088: 0xc062d20  jal         func_18B480
    ctx->pc = 0x18B088u;
    SET_GPR_U32(ctx, 31, 0x18B090u);
    ctx->pc = 0x18B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B480u, 0x18B088u, 0x18B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B090u;
label_18b090:
    // 0x18b090: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18b090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18b094: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B094u;
    {
        const bool branch_taken_0x18b094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B094u;
        // 0x18b098: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b094) {
            ctx->pc = 0x18B0A4u;
            goto label_18b0a4;
        }
    }
    ctx->pc = 0x18B09Cu;
    // 0x18b09c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B09Cu;
    {
        const bool branch_taken_0x18b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B09Cu;
        // 0x18b0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b09c) {
            ctx->pc = 0x18B0B0u;
            goto label_18b0b0;
        }
    }
    ctx->pc = 0x18B0A4u;
label_18b0a4:
    // 0x18b0a4: 0xc077d70  jal         func_1DF5C0
    ctx->pc = 0x18B0A4u;
    SET_GPR_U32(ctx, 31, 0x18B0ACu);
    ctx->pc = 0x1DF5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF5C0u, 0x18B0A4u, 0x18B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B0ACu;
label_18b0ac:
    // 0x18b0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b0b0:
    // 0x18b0b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18B0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0B4u;
        // 0x18b0b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B0BCu;
}
