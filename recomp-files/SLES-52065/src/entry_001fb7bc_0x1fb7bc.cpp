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

// Function: entry_001fb7bc
// Address: 0x1fb7bc - 0x1fb7d4
void entry_001fb7bc_0x1fb7bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb7bc_0x1fb7bc");
#endif

    switch (ctx->pc) {
        case 0x1fb7ccu: goto label_1fb7cc;
        default: break;
    }

    ctx->pc = 0x1fb7bcu;

    // 0x1fb7bc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1fb7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fb7c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fb7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb7c4: 0xc07ebfc  jal         func_1FAFF0
    ctx->pc = 0x1FB7C4u;
    SET_GPR_U32(ctx, 31, 0x1FB7CCu);
    ctx->pc = 0x1FB7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7C4u;
    // 0x1fb7c8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFF0u, 0x1FB7C4u, 0x1FB7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7CCu;
label_1fb7cc:
    // 0x1fb7cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB7CCu;
    {
        const bool branch_taken_0x1fb7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7CCu;
        // 0x1fb7d0: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7cc) {
            ctx->pc = 0x1FB7ECu;
            return;
        }
    }
    ctx->pc = 0x1FB7D4u;
}
