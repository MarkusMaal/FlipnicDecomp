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

// Function: entry_0015a6f4
// Address: 0x15a6f4 - 0x15a738
void entry_0015a6f4_0x15a6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a6f4_0x15a6f4");
#endif

    switch (ctx->pc) {
        case 0x15a734u: goto label_15a734;
        default: break;
    }

    ctx->pc = 0x15a6f4u;

    // 0x15a6f4: 0x864301f4  lh          $v1, 0x1F4($s2)
    ctx->pc = 0x15a6f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x15a6f8: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x15a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x15a6fc: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x15a6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x15a700: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x15a700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x15a704: 0xc62c01c0  lwc1        $f12, 0x1C0($s1)
    ctx->pc = 0x15a704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a708: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15a708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15a70c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x15a70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15a710: 0x26280300  addiu       $t0, $s1, 0x300
    ctx->pc = 0x15a710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x15a714: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x15a714u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a718: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15a718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a71c: 0x0  nop
    ctx->pc = 0x15a71cu;
    // NOP
    // 0x15a720: 0x0  nop
    ctx->pc = 0x15a720u;
    // NOP
    // 0x15a724: 0x1010  mfhi        $v0
    ctx->pc = 0x15a724u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15a728: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15a728u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15a72c: 0xc054a78  jal         func_1529E0
    ctx->pc = 0x15A72Cu;
    SET_GPR_U32(ctx, 31, 0x15A734u);
    ctx->pc = 0x15A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A72Cu;
    // 0x15a730: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1529E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1529E0u, 0x15A72Cu, 0x15A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A734u;
label_15a734:
    // 0x15a734: 0xae220338  sw          $v0, 0x338($s1)
    ctx->pc = 0x15a734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
    ctx->pc = 0x15a738u;
}
