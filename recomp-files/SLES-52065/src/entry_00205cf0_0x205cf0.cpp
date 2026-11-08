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

// Function: entry_00205cf0
// Address: 0x205cf0 - 0x205d00
void entry_00205cf0_0x205cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205cf0_0x205cf0");
#endif

    switch (ctx->pc) {
        case 0x205cf8u: goto label_205cf8;
        default: break;
    }

    ctx->pc = 0x205cf0u;

    // 0x205cf0: 0xc082222  jal         func_208888
    ctx->pc = 0x205CF0u;
    SET_GPR_U32(ctx, 31, 0x205CF8u);
    ctx->pc = 0x205CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CF0u;
    // 0x205cf4: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x205CF0u, 0x205CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CF8u;
label_205cf8:
    // 0x205cf8: 0x8eb0fff8  lw          $s0, -0x8($s5)
    ctx->pc = 0x205cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x205cfc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x205cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->pc = 0x205d00u;
}
