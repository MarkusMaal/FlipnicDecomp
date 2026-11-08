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

// Function: entry_001eedf8
// Address: 0x1eedf8 - 0x1eee10
void entry_001eedf8_0x1eedf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eedf8_0x1eedf8");
#endif

    switch (ctx->pc) {
        case 0x1eee00u: goto label_1eee00;
        default: break;
    }

    ctx->pc = 0x1eedf8u;

    // 0x1eedf8: 0xc07ae78  jal         func_1EB9E0
    ctx->pc = 0x1EEDF8u;
    SET_GPR_U32(ctx, 31, 0x1EEE00u);
    ctx->pc = 0x1EEDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDF8u;
    // 0x1eedfc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x1EEDF8u, 0x1EEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE00u;
label_1eee00:
    // 0x1eee00: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EEE00u;
    {
        const bool branch_taken_0x1eee00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE00u;
        // 0x1eee04: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee00) {
            ctx->pc = 0x1EEE38u;
            return;
        }
    }
    ctx->pc = 0x1EEE08u;
    // 0x1eee08: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1eee08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1eee0c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1eee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1eee10u;
}
