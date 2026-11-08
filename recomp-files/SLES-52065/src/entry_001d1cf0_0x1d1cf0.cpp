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

// Function: entry_001d1cf0
// Address: 0x1d1cf0 - 0x1d1d10
void entry_001d1cf0_0x1d1cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1cf0_0x1d1cf0");
#endif

    switch (ctx->pc) {
        case 0x1d1d08u: goto label_1d1d08;
        default: break;
    }

    ctx->pc = 0x1d1cf0u;

    // 0x1d1cf0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1CF0u;
    {
        const bool branch_taken_0x1d1cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1cf0) {
            ctx->pc = 0x1D1D10u;
            return;
        }
    }
    ctx->pc = 0x1D1CF8u;
    // 0x1d1cf8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d1cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d1cfc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d1cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d00: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D1D00u;
    SET_GPR_U32(ctx, 31, 0x1D1D08u);
    ctx->pc = 0x1D1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D00u;
    // 0x1d1d04: 0x2484fd40  addiu       $a0, $a0, -0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D1D00u, 0x1D1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D08u;
label_1d1d08:
    // 0x1d1d08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1d0c: 0xac20fd80  sw          $zero, -0x280($at)
    ctx->pc = 0x1d1d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36FD80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FD80u, _value); } while (0);
    ctx->pc = 0x1d1d10u;
}
