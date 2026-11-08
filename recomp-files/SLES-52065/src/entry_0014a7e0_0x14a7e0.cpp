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

// Function: entry_0014a7e0
// Address: 0x14a7e0 - 0x14a800
void entry_0014a7e0_0x14a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a7e0_0x14a7e0");
#endif

    switch (ctx->pc) {
        case 0x14a7e8u: goto label_14a7e8;
        case 0x14a7f4u: goto label_14a7f4;
        default: break;
    }

    ctx->pc = 0x14a7e0u;

    // 0x14a7e0: 0xc0525e8  jal         func_1497A0
    ctx->pc = 0x14A7E0u;
    SET_GPR_U32(ctx, 31, 0x14A7E8u);
    ctx->pc = 0x14A7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A7E0u;
    // 0x14a7e4: 0x27a40660  addiu       $a0, $sp, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1497A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1497A0u, 0x14A7E0u, 0x14A7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7E8u;
label_14a7e8:
    // 0x14a7e8: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x14a7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14a7ec: 0xc0525e8  jal         func_1497A0
    ctx->pc = 0x14A7ECu;
    SET_GPR_U32(ctx, 31, 0x14A7F4u);
    ctx->pc = 0x14A7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A7ECu;
    // 0x14a7f0: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1497A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1497A0u, 0x14A7ECu, 0x14A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7F4u;
label_14a7f4:
    // 0x14a7f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14a7f8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x14a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a7fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14a7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->pc = 0x14a800u;
}
