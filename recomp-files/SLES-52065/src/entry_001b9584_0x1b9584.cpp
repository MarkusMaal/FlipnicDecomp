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

// Function: entry_001b9584
// Address: 0x1b9584 - 0x1b95b0
void entry_001b9584_0x1b9584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9584_0x1b9584");
#endif

    switch (ctx->pc) {
        case 0x1b958cu: goto label_1b958c;
        case 0x1b95a8u: goto label_1b95a8;
        default: break;
    }

    ctx->pc = 0x1b9584u;

    // 0x1b9584: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9584u;
    SET_GPR_U32(ctx, 31, 0x1B958Cu);
    ctx->pc = 0x1B9588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9584u;
    // 0x1b9588: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9584u, 0x1B958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B958Cu;
label_1b958c:
    // 0x1b958c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b958cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9590: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1b9590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1b9594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9598: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b9598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b959c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b959cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b95a0: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1B95A0u;
    SET_GPR_U32(ctx, 31, 0x1B95A8u);
    ctx->pc = 0x1B95A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95A0u;
    // 0x1b95a4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1B95A0u, 0x1B95A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B95A8u;
label_1b95a8:
    // 0x1b95a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b95a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b95ac: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x1b95acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    ctx->pc = 0x1b95b0u;
}
