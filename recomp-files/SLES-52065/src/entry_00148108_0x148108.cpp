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

// Function: entry_00148108
// Address: 0x148108 - 0x148144
void entry_00148108_0x148108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148108_0x148108");
#endif

    switch (ctx->pc) {
        case 0x14812cu: goto label_14812c;
        default: break;
    }

    ctx->pc = 0x148108u;

    // 0x148108: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x148108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14810c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x14810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x148110: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x148110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148114: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148118: 0x0  nop
    ctx->pc = 0x148118u;
    // NOP
    // 0x14811c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x14811Cu;
    {
        const bool branch_taken_0x14811c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14811Cu;
        // 0x148120: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14811c) {
            ctx->pc = 0x148144u;
            return;
        }
    }
    ctx->pc = 0x148124u;
    // 0x148124: 0xc052118  jal         func_148460
    ctx->pc = 0x148124u;
    SET_GPR_U32(ctx, 31, 0x14812Cu);
    ctx->pc = 0x148128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148124u;
    // 0x148128: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148460u, 0x148124u, 0x14812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14812Cu;
label_14812c:
    // 0x14812c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148130: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x148130u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x148134: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x148134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x148138: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x148138u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x14813c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148140: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x148140u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x148144u;
}
