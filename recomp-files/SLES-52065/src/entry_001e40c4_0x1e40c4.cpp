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

// Function: entry_001e40c4
// Address: 0x1e40c4 - 0x1e40e4
void entry_001e40c4_0x1e40c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e40c4_0x1e40c4");
#endif

    switch (ctx->pc) {
        case 0x1e40dcu: goto label_1e40dc;
        default: break;
    }

    ctx->pc = 0x1e40c4u;

    // 0x1e40c4: 0x92020041  lbu         $v0, 0x41($s0)
    ctx->pc = 0x1e40c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x1e40c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E40C8u;
    {
        const bool branch_taken_0x1e40c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40C8u;
        // 0x1e40cc: 0x602826  xor         $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40c8) {
            ctx->pc = 0x1E40E4u;
            return;
        }
    }
    ctx->pc = 0x1E40D0u;
    // 0x1e40d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e40d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e40d4: 0xc0795dc  jal         func_1E5770
    ctx->pc = 0x1E40D4u;
    SET_GPR_U32(ctx, 31, 0x1E40DCu);
    ctx->pc = 0x1E40D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E40D4u;
    // 0x1e40d8: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5770u, 0x1E40D4u, 0x1E40DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E40DCu;
label_1e40dc:
    // 0x1e40dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1E40DCu;
    {
        const bool branch_taken_0x1e40dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40DCu;
        // 0x1e40e0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40dc) {
            ctx->pc = 0x1E4168u;
            return;
        }
    }
    ctx->pc = 0x1E40E4u;
}
