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

// Function: entry_0015ac60
// Address: 0x15ac60 - 0x15acb4
void entry_0015ac60_0x15ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ac60_0x15ac60");
#endif

    switch (ctx->pc) {
        case 0x15acacu: goto label_15acac;
        default: break;
    }

    ctx->pc = 0x15ac60u;

    // 0x15ac60: 0x924201f6  lbu         $v0, 0x1F6($s2)
    ctx->pc = 0x15ac60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 502)));
    // 0x15ac64: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x15AC64u;
    {
        const bool branch_taken_0x15ac64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ac64) {
            ctx->pc = 0x15ACB4u;
            return;
        }
    }
    ctx->pc = 0x15AC6Cu;
    // 0x15ac6c: 0x864301f4  lh          $v1, 0x1F4($s2)
    ctx->pc = 0x15ac6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x15ac70: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x15ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x15ac74: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x15ac74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x15ac78: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x15ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x15ac7c: 0xc62c01c0  lwc1        $f12, 0x1C0($s1)
    ctx->pc = 0x15ac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ac80: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15ac80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ac84: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x15ac84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15ac88: 0x26280300  addiu       $t0, $s1, 0x300
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x15ac8c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x15ac8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac90: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15ac90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15ac94: 0x0  nop
    ctx->pc = 0x15ac94u;
    // NOP
    // 0x15ac98: 0x0  nop
    ctx->pc = 0x15ac98u;
    // NOP
    // 0x15ac9c: 0x1010  mfhi        $v0
    ctx->pc = 0x15ac9cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15aca0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15aca4: 0xc054aac  jal         func_152AB0
    ctx->pc = 0x15ACA4u;
    SET_GPR_U32(ctx, 31, 0x15ACACu);
    ctx->pc = 0x15ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ACA4u;
    // 0x15aca8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AB0u, 0x15ACA4u, 0x15ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACACu;
label_15acac:
    // 0x15acac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15ACACu;
    {
        const bool branch_taken_0x15acac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACACu;
        // 0x15acb0: 0xae220338  sw          $v0, 0x338($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acac) {
            ctx->pc = 0x15ACF8u;
            return;
        }
    }
    ctx->pc = 0x15ACB4u;
}
