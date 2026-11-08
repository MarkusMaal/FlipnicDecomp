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

// Function: entry_001fc738
// Address: 0x1fc738 - 0x1fc754
void entry_001fc738_0x1fc738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc738_0x1fc738");
#endif

    switch (ctx->pc) {
        case 0x1fc750u: goto label_1fc750;
        default: break;
    }

    ctx->pc = 0x1fc738u;

    // 0x1fc738: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1fc738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1fc73c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC73Cu;
    {
        const bool branch_taken_0x1fc73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC73Cu;
        // 0x1fc740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc73c) {
            ctx->pc = 0x1FC754u;
            return;
        }
    }
    ctx->pc = 0x1FC744u;
    // 0x1fc744: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x1fc744u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fc748: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC748u;
    SET_GPR_U32(ctx, 31, 0x1FC750u);
    ctx->pc = 0x1FC74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC748u;
    // 0x1fc74c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC748u, 0x1FC750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC750u;
label_1fc750:
    // 0x1fc750: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fc754u;
}
