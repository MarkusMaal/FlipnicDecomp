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

// Function: entry_0012786c
// Address: 0x12786c - 0x12788c
void entry_0012786c_0x12786c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012786c_0x12786c");
#endif

    ctx->pc = 0x12786cu;

    // 0x12786c: 0x0  nop
    ctx->pc = 0x12786cu;
    // NOP
    // 0x127870: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x127870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x127874: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127874u;
    {
        const bool branch_taken_0x127874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127874u;
        // 0x127878: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127874) {
            ctx->pc = 0x12788Cu;
            return;
        }
    }
    ctx->pc = 0x12787Cu;
    // 0x12787c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12787Cu;
    {
        const bool branch_taken_0x12787c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12787Cu;
        // 0x127880: 0x13143c  dsll32      $v0, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12787c) {
            ctx->pc = 0x127890u;
            return;
        }
    }
    ctx->pc = 0x127884u;
    // 0x127884: 0xc048414  jal         func_121050
    ctx->pc = 0x127884u;
    SET_GPR_U32(ctx, 31, 0x12788Cu);
    ctx->pc = 0x127888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127884u;
    // 0x127888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x127884u, 0x12788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12788Cu;
}
