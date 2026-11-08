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

// Function: entry_00161218
// Address: 0x161218 - 0x161238
void entry_00161218_0x161218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161218_0x161218");
#endif

    switch (ctx->pc) {
        case 0x161228u: goto label_161228;
        default: break;
    }

    ctx->pc = 0x161218u;

    // 0x161218: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x161218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x16121c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x161220: 0xc054848  jal         func_152120
    ctx->pc = 0x161220u;
    SET_GPR_U32(ctx, 31, 0x161228u);
    ctx->pc = 0x161224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161220u;
    // 0x161224: 0x248415f0  addiu       $a0, $a0, 0x15F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152120u, 0x161220u, 0x161228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161228u;
label_161228:
    // 0x161228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16122c: 0x0  nop
    ctx->pc = 0x16122cu;
    // NOP
    // 0x161230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x161234: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x161234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->pc = 0x161238u;
}
