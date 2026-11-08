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

// Function: entry_001269b4
// Address: 0x1269b4 - 0x1269cc
void entry_001269b4_0x1269b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001269b4_0x1269b4");
#endif

    switch (ctx->pc) {
        case 0x1269c4u: goto label_1269c4;
        default: break;
    }

    ctx->pc = 0x1269b4u;

    // 0x1269b4: 0x0  nop
    ctx->pc = 0x1269b4u;
    // NOP
    // 0x1269b8: 0x26a40100  addiu       $a0, $s5, 0x100
    ctx->pc = 0x1269b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x1269bc: 0xc080702  jal         func_201C08
    ctx->pc = 0x1269BCu;
    SET_GPR_U32(ctx, 31, 0x1269C4u);
    ctx->pc = 0x1269C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1269BCu;
    // 0x1269c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1269BCu, 0x1269C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269C4u;
label_1269c4:
    // 0x1269c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1269C4u;
    {
        const bool branch_taken_0x1269c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1269C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269C4u;
        // 0x1269c8: 0xc6a00090  lwc1        $f0, 0x90($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269c4) {
            ctx->pc = 0x1269D4u;
            return;
        }
    }
    ctx->pc = 0x1269CCu;
}
