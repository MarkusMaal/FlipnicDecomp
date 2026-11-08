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

// Function: entry_0013eddc
// Address: 0x13eddc - 0x13edf8
void entry_0013eddc_0x13eddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eddc_0x13eddc");
#endif

    switch (ctx->pc) {
        case 0x13ede8u: goto label_13ede8;
        default: break;
    }

    ctx->pc = 0x13eddcu;

    // 0x13eddc: 0xc61400bc  lwc1        $f20, 0xBC($s0)
    ctx->pc = 0x13eddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13ede0: 0xc050c80  jal         func_143200
    ctx->pc = 0x13EDE0u;
    SET_GPR_U32(ctx, 31, 0x13EDE8u);
    ctx->pc = 0x13EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDE0u;
    // 0x13ede4: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143200u, 0x13EDE0u, 0x13EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDE8u;
label_13ede8:
    // 0x13ede8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x13ede8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x13edec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13edf0: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x13edf0u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x13edf4: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x13edf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    ctx->pc = 0x13edf8u;
}
