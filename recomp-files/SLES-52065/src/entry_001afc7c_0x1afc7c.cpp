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

// Function: entry_001afc7c
// Address: 0x1afc7c - 0x1afc98
void entry_001afc7c_0x1afc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afc7c_0x1afc7c");
#endif

    switch (ctx->pc) {
        case 0x1afc88u: goto label_1afc88;
        default: break;
    }

    ctx->pc = 0x1afc7cu;

    // 0x1afc7c: 0x0  nop
    ctx->pc = 0x1afc7cu;
    // NOP
    // 0x1afc80: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1AFC80u;
    SET_GPR_U32(ctx, 31, 0x1AFC88u);
    ctx->pc = 0x1AFC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC80u;
    // 0x1afc84: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1AFC80u, 0x1AFC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC88u;
label_1afc88:
    // 0x1afc88: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC88u;
    {
        const bool branch_taken_0x1afc88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC88u;
        // 0x1afc8c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc88) {
            ctx->pc = 0x1AFC98u;
            return;
        }
    }
    ctx->pc = 0x1AFC90u;
    // 0x1afc90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFC90u;
    {
        const bool branch_taken_0x1afc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC90u;
        // 0x1afc94: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc90) {
            ctx->pc = 0x1AFC9Cu;
            return;
        }
    }
    ctx->pc = 0x1AFC98u;
}
