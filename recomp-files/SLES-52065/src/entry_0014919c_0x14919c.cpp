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

// Function: entry_0014919c
// Address: 0x14919c - 0x1491bc
void entry_0014919c_0x14919c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014919c_0x14919c");
#endif

    switch (ctx->pc) {
        case 0x1491a4u: goto label_1491a4;
        case 0x1491b0u: goto label_1491b0;
        default: break;
    }

    ctx->pc = 0x14919cu;

    // 0x14919c: 0xc0525e8  jal         func_1497A0
    ctx->pc = 0x14919Cu;
    SET_GPR_U32(ctx, 31, 0x1491A4u);
    ctx->pc = 0x1491A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14919Cu;
    // 0x1491a0: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1497A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1497A0u, 0x14919Cu, 0x1491A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491A4u;
label_1491a4:
    // 0x1491a4: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x1491a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1491a8: 0xc0525e8  jal         func_1497A0
    ctx->pc = 0x1491A8u;
    SET_GPR_U32(ctx, 31, 0x1491B0u);
    ctx->pc = 0x1491ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1491A8u;
    // 0x1491ac: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1497A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1497A0u, 0x1491A8u, 0x1491B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491B0u;
label_1491b0:
    // 0x1491b0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1491b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1491b4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1491b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1491b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1491b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->pc = 0x1491bcu;
}
