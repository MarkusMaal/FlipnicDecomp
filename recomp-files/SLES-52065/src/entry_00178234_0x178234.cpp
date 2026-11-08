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

// Function: entry_00178234
// Address: 0x178234 - 0x178254
void entry_00178234_0x178234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178234_0x178234");
#endif

    switch (ctx->pc) {
        case 0x178240u: goto label_178240;
        default: break;
    }

    ctx->pc = 0x178234u;

    // 0x178234: 0x0  nop
    ctx->pc = 0x178234u;
    // NOP
    // 0x178238: 0xc07ef92  jal         func_1FBE48
    ctx->pc = 0x178238u;
    SET_GPR_U32(ctx, 31, 0x178240u);
    ctx->pc = 0x1FBE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE48u, 0x178238u, 0x178240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178240u;
label_178240:
    // 0x178240: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x178240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x178244: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x178244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x178248: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x178248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17824c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x17824cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x178250: 0xe440fffc  swc1        $f0, -0x4($v0)
    ctx->pc = 0x178250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    ctx->pc = 0x178254u;
}
