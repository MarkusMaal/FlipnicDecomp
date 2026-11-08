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

// Function: entry_001fba38
// Address: 0x1fba38 - 0x1fba4c
void entry_001fba38_0x1fba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fba38_0x1fba38");
#endif

    switch (ctx->pc) {
        case 0x1fba44u: goto label_1fba44;
        default: break;
    }

    ctx->pc = 0x1fba38u;

    // 0x1fba38: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1fba38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fba3c: 0xc07edb8  jal         func_1FB6E0
    ctx->pc = 0x1FBA3Cu;
    SET_GPR_U32(ctx, 31, 0x1FBA44u);
    ctx->pc = 0x1FBA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA3Cu;
    // 0x1fba40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6E0u, 0x1FBA3Cu, 0x1FBA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA44u;
label_1fba44:
    // 0x1fba44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FBA44u;
    {
        const bool branch_taken_0x1fba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA44u;
        // 0x1fba48: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba44) {
            ctx->pc = 0x1FBA78u;
            return;
        }
    }
    ctx->pc = 0x1FBA4Cu;
}
