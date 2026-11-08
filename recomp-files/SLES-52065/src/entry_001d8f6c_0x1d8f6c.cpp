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

// Function: entry_001d8f6c
// Address: 0x1d8f6c - 0x1d8fa4
void entry_001d8f6c_0x1d8f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8f6c_0x1d8f6c");
#endif

    switch (ctx->pc) {
        case 0x1d8fa0u: goto label_1d8fa0;
        default: break;
    }

    ctx->pc = 0x1d8f6cu;

label_1d8f6c:
    // 0x1d8f6c: 0x0  nop
    ctx->pc = 0x1d8f6cu;
    // NOP
    // 0x1d8f70: 0x0  nop
    ctx->pc = 0x1d8f70u;
    // NOP
    // 0x1d8f74: 0x0  nop
    ctx->pc = 0x1d8f74u;
    // NOP
    // 0x1d8f78: 0x0  nop
    ctx->pc = 0x1d8f78u;
    // NOP
    // 0x1d8f7c: 0x0  nop
    ctx->pc = 0x1d8f7cu;
    // NOP
    // 0x1d8f80: 0x5c60fffa  bgtzl       $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D8F80u;
    {
        const bool branch_taken_0x1d8f80 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d8f80) {
            ctx->pc = 0x1D8F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8F80u;
            // 0x1d8f84: 0x2463fd8f  addiu       $v1, $v1, -0x271 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966671));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8f6c;
        }
    }
    ctx->pc = 0x1D8F88u;
    // 0x1d8f88: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d8f8c: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D8F8Cu;
    {
        const bool branch_taken_0x1d8f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F8Cu;
        // 0x1d8f90: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f8c) {
            ctx->pc = 0x1D8F40u;
            return;
        }
    }
    ctx->pc = 0x1D8F94u;
    // 0x1d8f94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d8f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8f98: 0xc074bee  jal         func_1D2FB8
    ctx->pc = 0x1D8F98u;
    SET_GPR_U32(ctx, 31, 0x1D8FA0u);
    ctx->pc = 0x1D8F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F98u;
    // 0x1d8f9c: 0x24a58d98  addiu       $a1, $a1, -0x7268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2FB8u, 0x1D8F98u, 0x1D8FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FA0u;
label_1d8fa0:
    // 0x1d8fa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d8fa4u;
}
