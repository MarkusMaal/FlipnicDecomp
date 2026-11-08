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

// Function: entry_00178068
// Address: 0x178068 - 0x17808c
void entry_00178068_0x178068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178068_0x178068");
#endif

    switch (ctx->pc) {
        case 0x178070u: goto label_178070;
        default: break;
    }

    ctx->pc = 0x178068u;

    // 0x178068: 0xc07ef92  jal         func_1FBE48
    ctx->pc = 0x178068u;
    SET_GPR_U32(ctx, 31, 0x178070u);
    ctx->pc = 0x1FBE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE48u, 0x178068u, 0x178070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178070u;
label_178070:
    // 0x178070: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x178070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x178074: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x178074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x178078: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x178078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17807c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17807cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x178080: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x178080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178084: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x178084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x178088: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x178088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    ctx->pc = 0x17808cu;
}
