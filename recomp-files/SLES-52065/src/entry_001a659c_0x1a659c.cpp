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

// Function: entry_001a659c
// Address: 0x1a659c - 0x1a65d8
void entry_001a659c_0x1a659c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a659c_0x1a659c");
#endif

    switch (ctx->pc) {
        case 0x1a65b8u: goto label_1a65b8;
        default: break;
    }

    ctx->pc = 0x1a659cu;

    // 0x1a659c: 0x3c03c0b0  lui         $v1, 0xC0B0
    ctx->pc = 0x1a659cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49328 << 16));
    // 0x1a65a0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a65a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1a65a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a65a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a65a8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a65a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a65ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a65acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a65b0: 0xc069994  jal         func_1A6650
    ctx->pc = 0x1A65B0u;
    SET_GPR_U32(ctx, 31, 0x1A65B8u);
    ctx->pc = 0x1A65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A65B0u;
    // 0x1a65b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A65B0u, 0x1A65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A65B8u;
label_1a65b8:
    // 0x1a65b8: 0x8e8300f4  lw          $v1, 0xF4($s4)
    ctx->pc = 0x1a65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
    // 0x1a65bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a65bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a65c0: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a65c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x1a65c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a65c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a65c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a65cc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a65d0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1a65d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a65d4: 0x0  nop
    ctx->pc = 0x1a65d4u;
    // NOP
    ctx->pc = 0x1a65d8u;
}
