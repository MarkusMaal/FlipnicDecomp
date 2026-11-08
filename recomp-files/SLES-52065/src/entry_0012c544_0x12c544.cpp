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

// Function: entry_0012c544
// Address: 0x12c544 - 0x12c560
void entry_0012c544_0x12c544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c544_0x12c544");
#endif

    switch (ctx->pc) {
        case 0x12c54cu: goto label_12c54c;
        default: break;
    }

    ctx->pc = 0x12c544u;

    // 0x12c544: 0xc07d84c  jal         func_1F6130
    ctx->pc = 0x12C544u;
    SET_GPR_U32(ctx, 31, 0x12C54Cu);
    ctx->pc = 0x12C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C544u;
    // 0x12c548: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6130u, 0x12C544u, 0x12C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C54Cu;
label_12c54c:
    // 0x12c54c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x12C54Cu;
    {
        const bool branch_taken_0x12c54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c54c) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C554u;
    // 0x12c554: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x12c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12c558: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x12C558u;
    {
        const bool branch_taken_0x12c558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C558u;
        // 0x12c55c: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c558) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C560u;
}
