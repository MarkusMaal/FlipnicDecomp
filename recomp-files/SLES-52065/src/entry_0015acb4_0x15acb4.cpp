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

// Function: entry_0015acb4
// Address: 0x15acb4 - 0x15acf8
void entry_0015acb4_0x15acb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015acb4_0x15acb4");
#endif

    switch (ctx->pc) {
        case 0x15acf4u: goto label_15acf4;
        default: break;
    }

    ctx->pc = 0x15acb4u;

    // 0x15acb4: 0x864301f4  lh          $v1, 0x1F4($s2)
    ctx->pc = 0x15acb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x15acb8: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x15acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x15acbc: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x15acbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x15acc0: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x15acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x15acc4: 0xc62c01c0  lwc1        $f12, 0x1C0($s1)
    ctx->pc = 0x15acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15acc8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15acc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15accc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x15acccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15acd0: 0x26280300  addiu       $t0, $s1, 0x300
    ctx->pc = 0x15acd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x15acd4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x15acd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acd8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15acd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15acdc: 0x0  nop
    ctx->pc = 0x15acdcu;
    // NOP
    // 0x15ace0: 0x0  nop
    ctx->pc = 0x15ace0u;
    // NOP
    // 0x15ace4: 0x1010  mfhi        $v0
    ctx->pc = 0x15ace4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15ace8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15acec: 0xc054ae0  jal         func_152B80
    ctx->pc = 0x15ACECu;
    SET_GPR_U32(ctx, 31, 0x15ACF4u);
    ctx->pc = 0x15ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ACECu;
    // 0x15acf0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B80u, 0x15ACECu, 0x15ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACF4u;
label_15acf4:
    // 0x15acf4: 0xae220338  sw          $v0, 0x338($s1)
    ctx->pc = 0x15acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
    ctx->pc = 0x15acf8u;
}
