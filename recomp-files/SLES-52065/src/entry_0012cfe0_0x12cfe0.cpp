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

// Function: entry_0012cfe0
// Address: 0x12cfe0 - 0x12cffc
void entry_0012cfe0_0x12cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cfe0_0x12cfe0");
#endif

    switch (ctx->pc) {
        case 0x12cff4u: goto label_12cff4;
        default: break;
    }

    ctx->pc = 0x12cfe0u;

    // 0x12cfe0: 0xa2400010  sb          $zero, 0x10($s2)
    ctx->pc = 0x12cfe0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cfe4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x12cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cfe8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x12cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x12cfec: 0xc04b440  jal         func_12D100
    ctx->pc = 0x12CFECu;
    SET_GPR_U32(ctx, 31, 0x12CFF4u);
    ctx->pc = 0x12CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CFECu;
    // 0x12cff0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D100u, 0x12CFECu, 0x12CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFF4u;
label_12cff4:
    // 0x12cff4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12CFF4u;
    {
        const bool branch_taken_0x12cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cff4) {
            ctx->pc = 0x12D03Cu;
            return;
        }
    }
    ctx->pc = 0x12CFFCu;
}
