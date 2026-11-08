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

// Function: entry_0016ae30
// Address: 0x16ae30 - 0x16ae54
void entry_0016ae30_0x16ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ae30_0x16ae30");
#endif

    switch (ctx->pc) {
        case 0x16ae38u: goto label_16ae38;
        default: break;
    }

    ctx->pc = 0x16ae30u;

    // 0x16ae30: 0xc042118  jal         func_108460
    ctx->pc = 0x16AE30u;
    SET_GPR_U32(ctx, 31, 0x16AE38u);
    ctx->pc = 0x16AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE30u;
    // 0x16ae34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16AE30u, 0x16AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE38u;
label_16ae38:
    // 0x16ae38: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x16ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ae3c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16ae40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ae40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ae44: 0x0  nop
    ctx->pc = 0x16ae44u;
    // NOP
    // 0x16ae48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16ae48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16ae4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AE4Cu;
    {
        const bool branch_taken_0x16ae4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE4Cu;
        // 0x16ae50: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae4c) {
            ctx->pc = 0x16AE60u;
            return;
        }
    }
    ctx->pc = 0x16AE54u;
}
