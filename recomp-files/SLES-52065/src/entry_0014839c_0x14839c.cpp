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

// Function: entry_0014839c
// Address: 0x14839c - 0x1483e8
void entry_0014839c_0x14839c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014839c_0x14839c");
#endif

    switch (ctx->pc) {
        case 0x1483acu: goto label_1483ac;
        default: break;
    }

    ctx->pc = 0x14839cu;

    // 0x14839c: 0x0  nop
    ctx->pc = 0x14839cu;
    // NOP
    // 0x1483a0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1483a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1483a4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1483A4u;
    SET_GPR_U32(ctx, 31, 0x1483ACu);
    ctx->pc = 0x1483A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1483A4u;
    // 0x1483a8: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1483A4u, 0x1483ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483ACu;
label_1483ac:
    // 0x1483ac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1483acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1483b0: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x1483b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1483b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1483b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1483b8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1483b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1483bc: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1483bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1483c0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1483c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1483c4: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x1483c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x1483c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1483c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1483cc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1483ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1483d0: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x1483d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1483d4: 0x0  nop
    ctx->pc = 0x1483d4u;
    // NOP
    // 0x1483d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1483D8u;
    {
        const bool branch_taken_0x1483d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1483DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1483D8u;
        // 0x1483dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1483d8) {
            ctx->pc = 0x1483E8u;
            return;
        }
    }
    ctx->pc = 0x1483E0u;
    // 0x1483e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1483E0u;
    {
        const bool branch_taken_0x1483e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1483E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1483E0u;
        // 0x1483e4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1483e0) {
            ctx->pc = 0x148430u;
            return;
        }
    }
    ctx->pc = 0x1483E8u;
}
