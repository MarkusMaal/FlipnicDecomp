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

// Function: FUN_001ebdf8
// Address: 0x1ebdf8 - 0x1ebe20
void FUN_001ebdf8_0x1ebdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebdf8_0x1ebdf8");
#endif

    switch (ctx->pc) {
        case 0x1ebe10u: goto label_1ebe10;
        default: break;
    }

    ctx->pc = 0x1ebdf8u;

    // 0x1ebdf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ebdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ebdfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebe00: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBE00u;
    {
        const bool branch_taken_0x1ebe00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE00u;
        // 0x1ebe04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe00) {
            ctx->pc = 0x1EBE10u;
            goto label_1ebe10;
        }
    }
    ctx->pc = 0x1EBE08u;
    // 0x1ebe08: 0xc07d274  jal         func_1F49D0
    ctx->pc = 0x1EBE08u;
    SET_GPR_U32(ctx, 31, 0x1EBE10u);
    ctx->pc = 0x1EBE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBE08u;
    // 0x1ebe0c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F49D0u, 0x1EBE08u, 0x1EBE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBE10u;
label_1ebe10:
    // 0x1ebe10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebe10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebe14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ebe14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe18: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE18u;
        // 0x1ebe1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBE20u;
}
