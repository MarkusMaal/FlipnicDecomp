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

// Function: entry_00200a04
// Address: 0x200a04 - 0x200a28
void entry_00200a04_0x200a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200a04_0x200a04");
#endif

    switch (ctx->pc) {
        case 0x200a10u: goto label_200a10;
        default: break;
    }

    ctx->pc = 0x200a04u;

    // 0x200a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a08: 0xc0820d8  jal         func_208360
    ctx->pc = 0x200A08u;
    SET_GPR_U32(ctx, 31, 0x200A10u);
    ctx->pc = 0x200A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A08u;
    // 0x200a0c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x200A08u, 0x200A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A10u;
label_200a10:
    // 0x200a10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x200a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200a14: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x200a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200a18: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x200a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200a1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x200a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200a20: 0x3e00008  jr          $ra
    ctx->pc = 0x200A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A20u;
        // 0x200a24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200A28u;
}
