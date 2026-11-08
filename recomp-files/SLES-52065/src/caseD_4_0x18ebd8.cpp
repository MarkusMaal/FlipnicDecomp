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

// Function: caseD_4
// Address: 0x18ebd8 - 0x18ec04
void caseD_4_0x18ebd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x18ebd8");
#endif

    switch (ctx->pc) {
        case 0x18ebe0u: goto label_18ebe0;
        case 0x18ec00u: goto label_18ec00;
        default: break;
    }

    ctx->pc = 0x18ebd8u;

    // 0x18ebd8: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x18EBD8u;
    SET_GPR_U32(ctx, 31, 0x18EBE0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x18EBD8u, 0x18EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EBE0u;
label_18ebe0:
    // 0x18ebe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebe4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EBE4u;
    {
        const bool branch_taken_0x18ebe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBE4u;
        // 0x18ebe8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebe4) {
            ctx->pc = 0x18EC04u;
            return;
        }
    }
    ctx->pc = 0x18EBECu;
    // 0x18ebec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18ebf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ebf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebf4: 0x24a5fd68  addiu       $a1, $a1, -0x298
    ctx->pc = 0x18ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966632));
    // 0x18ebf8: 0xc064a64  jal         func_192990
    ctx->pc = 0x18EBF8u;
    SET_GPR_U32(ctx, 31, 0x18EC00u);
    ctx->pc = 0x18EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBF8u;
    // 0x18ebfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192990u, 0x18EBF8u, 0x18EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC00u;
label_18ec00:
    // 0x18ec00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x18ec04u;
}
