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

// Function: entry_001f2af0
// Address: 0x1f2af0 - 0x1f2b14
void entry_001f2af0_0x1f2af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2af0_0x1f2af0");
#endif

    switch (ctx->pc) {
        case 0x1f2b04u: goto label_1f2b04;
        default: break;
    }

    ctx->pc = 0x1f2af0u;

    // 0x1f2af0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f2af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f2af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2af8: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x1f2af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x1f2afc: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F2AFCu;
    SET_GPR_U32(ctx, 31, 0x1F2B04u);
    ctx->pc = 0x1F2B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2AFCu;
    // 0x1f2b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F2AFCu, 0x1F2B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B04u;
label_1f2b04:
    // 0x1f2b04: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2B04u;
    {
        const bool branch_taken_0x1f2b04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f2b04) {
            ctx->pc = 0x1F2B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2B04u;
            // 0x1f2b08: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2B14u;
            return;
        }
    }
    ctx->pc = 0x1F2B0Cu;
    // 0x1f2b0c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1F2B0Cu;
    {
        const bool branch_taken_0x1f2b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B0Cu;
        // 0x1f2b10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b0c) {
            ctx->pc = 0x1F2BB0u;
            return;
        }
    }
    ctx->pc = 0x1F2B14u;
}
