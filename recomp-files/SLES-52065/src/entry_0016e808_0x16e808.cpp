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

// Function: entry_0016e808
// Address: 0x16e808 - 0x16e820
void entry_0016e808_0x16e808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e808_0x16e808");
#endif

    switch (ctx->pc) {
        case 0x16e81cu: goto label_16e81c;
        default: break;
    }

    ctx->pc = 0x16e808u;

    // 0x16e808: 0x16050005  bne         $s0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E808u;
    {
        const bool branch_taken_0x16e808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x16E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E808u;
        // 0x16e80c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e808) {
            ctx->pc = 0x16E820u;
            return;
        }
    }
    ctx->pc = 0x16E810u;
    // 0x16e810: 0xc64c021c  lwc1        $f12, 0x21C($s2)
    ctx->pc = 0x16e810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e814: 0xc0561f4  jal         func_1587D0
    ctx->pc = 0x16E814u;
    SET_GPR_U32(ctx, 31, 0x16E81Cu);
    ctx->pc = 0x16E818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E814u;
    // 0x16e818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1587D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1587D0u, 0x16E814u, 0x16E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E81Cu;
label_16e81c:
    // 0x16e81c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16e820u;
}
