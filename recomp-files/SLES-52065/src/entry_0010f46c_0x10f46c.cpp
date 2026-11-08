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

// Function: entry_0010f46c
// Address: 0x10f46c - 0x10f484
void entry_0010f46c_0x10f46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f46c_0x10f46c");
#endif

    ctx->pc = 0x10f46cu;

    // 0x10f46c: 0x92030224  lbu         $v1, 0x224($s0)
    ctx->pc = 0x10f46cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10f470: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x10f470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10f474: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F474u;
    {
        const bool branch_taken_0x10f474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F474u;
        // 0x10f478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f474) {
            ctx->pc = 0x10F484u;
            return;
        }
    }
    ctx->pc = 0x10F47Cu;
    // 0x10f47c: 0xc043e3c  jal         func_10F8F0
    ctx->pc = 0x10F47Cu;
    SET_GPR_U32(ctx, 31, 0x10F484u);
    ctx->pc = 0x10F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F8F0u, 0x10F47Cu, 0x10F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F484u;
}
