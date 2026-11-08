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

// Function: entry_001e5020
// Address: 0x1e5020 - 0x1e503c
void entry_001e5020_0x1e5020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5020_0x1e5020");
#endif

    switch (ctx->pc) {
        case 0x1e5034u: goto label_1e5034;
        default: break;
    }

    ctx->pc = 0x1e5020u;

    // 0x1e5020: 0x92020051  lbu         $v0, 0x51($s0)
    ctx->pc = 0x1e5020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x1e5024: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5024u;
    {
        const bool branch_taken_0x1e5024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5024u;
        // 0x1e5028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5024) {
            ctx->pc = 0x1E503Cu;
            return;
        }
    }
    ctx->pc = 0x1E502Cu;
    // 0x1e502c: 0xc079544  jal         func_1E5510
    ctx->pc = 0x1E502Cu;
    SET_GPR_U32(ctx, 31, 0x1E5034u);
    ctx->pc = 0x1E5030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E502Cu;
    // 0x1e5030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5510u, 0x1E502Cu, 0x1E5034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5034u;
label_1e5034:
    // 0x1e5034: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E5034u;
    {
        const bool branch_taken_0x1e5034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5034u;
        // 0x1e5038: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5034) {
            ctx->pc = 0x1E50ACu;
            return;
        }
    }
    ctx->pc = 0x1E503Cu;
}
