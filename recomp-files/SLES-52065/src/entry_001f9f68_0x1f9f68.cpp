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

// Function: entry_001f9f68
// Address: 0x1f9f68 - 0x1f9f8c
void entry_001f9f68_0x1f9f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9f68_0x1f9f68");
#endif

    switch (ctx->pc) {
        case 0x1f9f80u: goto label_1f9f80;
        case 0x1f9f88u: goto label_1f9f88;
        default: break;
    }

    ctx->pc = 0x1f9f68u;

    // 0x1f9f68: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x1f9f68u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f9f6c: 0x0  nop
    ctx->pc = 0x1f9f6cu;
    // NOP
    // 0x1f9f70: 0x0  nop
    ctx->pc = 0x1f9f70u;
    // NOP
    // 0x1f9f74: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1f9f74u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1f9f78: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x1F9F78u;
    SET_GPR_U32(ctx, 31, 0x1F9F80u);
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x1F9F78u, 0x1F9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F80u;
label_1f9f80:
    // 0x1f9f80: 0xc07ed0e  jal         func_1FB438
    ctx->pc = 0x1F9F80u;
    SET_GPR_U32(ctx, 31, 0x1F9F88u);
    ctx->pc = 0x1F9F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9F80u;
    // 0x1f9f84: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB438u, 0x1F9F80u, 0x1F9F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F88u;
label_1f9f88:
    // 0x1f9f88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f9f88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    ctx->pc = 0x1f9f8cu;
}
