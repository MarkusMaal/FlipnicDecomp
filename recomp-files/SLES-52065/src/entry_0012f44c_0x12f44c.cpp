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

// Function: entry_0012f44c
// Address: 0x12f44c - 0x12f460
void entry_0012f44c_0x12f44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f44c_0x12f44c");
#endif

    switch (ctx->pc) {
        case 0x12f454u: goto label_12f454;
        default: break;
    }

    ctx->pc = 0x12f44cu;

    // 0x12f44c: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x12F44Cu;
    SET_GPR_U32(ctx, 31, 0x12F454u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x12F44Cu, 0x12F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F454u;
label_12f454:
    // 0x12f454: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x12f454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f458: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x12f458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x12f45c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x12f45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    ctx->pc = 0x12f460u;
}
