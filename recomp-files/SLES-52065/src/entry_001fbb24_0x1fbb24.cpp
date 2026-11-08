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

// Function: entry_001fbb24
// Address: 0x1fbb24 - 0x1fbb38
void entry_001fbb24_0x1fbb24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbb24_0x1fbb24");
#endif

    switch (ctx->pc) {
        case 0x1fbb30u: goto label_1fbb30;
        default: break;
    }

    ctx->pc = 0x1fbb24u;

    // 0x1fbb24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fbb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbb28: 0xc07ebfc  jal         func_1FAFF0
    ctx->pc = 0x1FBB28u;
    SET_GPR_U32(ctx, 31, 0x1FBB30u);
    ctx->pc = 0x1FBB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB28u;
    // 0x1fbb2c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFF0u, 0x1FBB28u, 0x1FBB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB30u;
label_1fbb30:
    // 0x1fbb30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FBB30u;
    {
        const bool branch_taken_0x1fbb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB30u;
        // 0x1fbb34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb30) {
            ctx->pc = 0x1FBB70u;
            return;
        }
    }
    ctx->pc = 0x1FBB38u;
}
