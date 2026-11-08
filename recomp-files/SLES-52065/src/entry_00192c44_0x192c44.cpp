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

// Function: entry_00192c44
// Address: 0x192c44 - 0x192c9c
void entry_00192c44_0x192c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192c44_0x192c44");
#endif

    switch (ctx->pc) {
        case 0x192c74u: goto label_192c74;
        default: break;
    }

    ctx->pc = 0x192c44u;

    // 0x192c44: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x192c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x192c48: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x192c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x192c4c: 0x8f868384  lw          $a2, -0x7C7C($gp)
    ctx->pc = 0x192c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x192c50: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x192c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x192c54: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x192c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    // 0x192c58: 0x8c6528dc  lw          $a1, 0x28DC($v1)
    ctx->pc = 0x192c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10460)));
    // 0x192c5c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x192c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192c60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x192c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192c64: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x192c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x192c68: 0x2253018  mult        $a2, $s1, $a1
    ctx->pc = 0x192c68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x192c6c: 0xc04bf38  jal         func_12FCE0
    ctx->pc = 0x192C6Cu;
    SET_GPR_U32(ctx, 31, 0x192C74u);
    ctx->pc = 0x192C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C6Cu;
    // 0x192c70: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x192C6Cu, 0x192C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C74u;
label_192c74:
    // 0x192c74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x192c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192c78: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x192c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x192c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c84: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x192c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x192c88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x192c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192c8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x192c8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c90: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x192c90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x192c94: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x192C94u;
    SET_GPR_U32(ctx, 31, 0x192C9Cu);
    ctx->pc = 0x192C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C94u;
    // 0x192c98: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x192C94u, 0x192C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C9Cu;
}
