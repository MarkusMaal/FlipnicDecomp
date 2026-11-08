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

// Function: entry_001fbb4c
// Address: 0x1fbb4c - 0x1fbb60
void entry_001fbb4c_0x1fbb4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbb4c_0x1fbb4c");
#endif

    switch (ctx->pc) {
        case 0x1fbb58u: goto label_1fbb58;
        default: break;
    }

    ctx->pc = 0x1fbb4cu;

    // 0x1fbb4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fbb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbb50: 0xc07ebfc  jal         func_1FAFF0
    ctx->pc = 0x1FBB50u;
    SET_GPR_U32(ctx, 31, 0x1FBB58u);
    ctx->pc = 0x1FBB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB50u;
    // 0x1fbb54: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFF0u, 0x1FBB50u, 0x1FBB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB58u;
label_1fbb58:
    // 0x1fbb58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBB58u;
    {
        const bool branch_taken_0x1fbb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB58u;
        // 0x1fbb5c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb58) {
            ctx->pc = 0x1FBB6Cu;
            return;
        }
    }
    ctx->pc = 0x1FBB60u;
}
