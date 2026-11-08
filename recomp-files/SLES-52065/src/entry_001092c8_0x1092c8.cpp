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

// Function: entry_001092c8
// Address: 0x1092c8 - 0x1092e4
void entry_001092c8_0x1092c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001092c8_0x1092c8");
#endif

    switch (ctx->pc) {
        case 0x1092d0u: goto label_1092d0;
        case 0x1092dcu: goto label_1092dc;
        default: break;
    }

    ctx->pc = 0x1092c8u;

    // 0x1092c8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1092C8u;
    SET_GPR_U32(ctx, 31, 0x1092D0u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1092C8u, 0x1092D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092D0u;
label_1092d0:
    // 0x1092d0: 0xc60c0348  lwc1        $f12, 0x348($s0)
    ctx->pc = 0x1092d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1092d4: 0xc049f2c  jal         func_127CB0
    ctx->pc = 0x1092D4u;
    SET_GPR_U32(ctx, 31, 0x1092DCu);
    ctx->pc = 0x1092D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092D4u;
    // 0x1092d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CB0u, 0x1092D4u, 0x1092DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092DCu;
label_1092dc:
    // 0x1092dc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1092DCu;
    {
        const bool branch_taken_0x1092dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092DCu;
        // 0x1092e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092dc) {
            ctx->pc = 0x109370u;
            return;
        }
    }
    ctx->pc = 0x1092E4u;
}
