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

// Function: entry_0013adf0
// Address: 0x13adf0 - 0x13ae10
void entry_0013adf0_0x13adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013adf0_0x13adf0");
#endif

    switch (ctx->pc) {
        case 0x13adfcu: goto label_13adfc;
        default: break;
    }

    ctx->pc = 0x13adf0u;

    // 0x13adf0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13adf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13adf4: 0xc04ee34  jal         func_13B8D0
    ctx->pc = 0x13ADF4u;
    SET_GPR_U32(ctx, 31, 0x13ADFCu);
    ctx->pc = 0x13ADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ADF4u;
    // 0x13adf8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B8D0u, 0x13ADF4u, 0x13ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ADFCu;
label_13adfc:
    // 0x13adfc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13ae00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ae04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ae04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x13AE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE08u;
        // 0x13ae0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AE10u;
}
