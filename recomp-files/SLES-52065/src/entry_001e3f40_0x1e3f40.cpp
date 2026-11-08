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

// Function: entry_001e3f40
// Address: 0x1e3f40 - 0x1e3f5c
void entry_001e3f40_0x1e3f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3f40_0x1e3f40");
#endif

    switch (ctx->pc) {
        case 0x1e3f54u: goto label_1e3f54;
        default: break;
    }

    ctx->pc = 0x1e3f40u;

    // 0x1e3f40: 0x92020041  lbu         $v0, 0x41($s0)
    ctx->pc = 0x1e3f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x1e3f44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3F44u;
    {
        const bool branch_taken_0x1e3f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F44u;
        // 0x1e3f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f44) {
            ctx->pc = 0x1E3F5Cu;
            return;
        }
    }
    ctx->pc = 0x1E3F4Cu;
    // 0x1e3f4c: 0xc0795dc  jal         func_1E5770
    ctx->pc = 0x1E3F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E3F54u);
    ctx->pc = 0x1E3F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3F4Cu;
    // 0x1e3f50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5770u, 0x1E3F4Cu, 0x1E3F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F54u;
label_1e3f54:
    // 0x1e3f54: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E3F54u;
    {
        const bool branch_taken_0x1e3f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F54u;
        // 0x1e3f58: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f54) {
            ctx->pc = 0x1E3FCCu;
            return;
        }
    }
    ctx->pc = 0x1E3F5Cu;
}
