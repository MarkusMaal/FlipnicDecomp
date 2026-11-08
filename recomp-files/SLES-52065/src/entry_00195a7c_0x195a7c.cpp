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

// Function: entry_00195a7c
// Address: 0x195a7c - 0x195ac8
void entry_00195a7c_0x195a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a7c_0x195a7c");
#endif

    switch (ctx->pc) {
        case 0x195a98u: goto label_195a98;
        case 0x195ac0u: goto label_195ac0;
        default: break;
    }

    ctx->pc = 0x195a7cu;

    // 0x195a7c: 0x0  nop
    ctx->pc = 0x195a7cu;
    // NOP
    // 0x195a80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195a84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x195a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195a88: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x195a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x195a8c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x195a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    // 0x195a90: 0xc04bf38  jal         func_12FCE0
    ctx->pc = 0x195A90u;
    SET_GPR_U32(ctx, 31, 0x195A98u);
    ctx->pc = 0x195A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A90u;
    // 0x195a94: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x195A90u, 0x195A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A98u;
label_195a98:
    // 0x195a98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195a98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195a9c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x195a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x195aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195aa8: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x195aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x195aac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195ab0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195ab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ab4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x195ab4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x195ab8: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x195AB8u;
    SET_GPR_U32(ctx, 31, 0x195AC0u);
    ctx->pc = 0x195ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195AB8u;
    // 0x195abc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195AB8u, 0x195AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195AC0u;
label_195ac0:
    // 0x195ac0: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x195AC0u;
    {
        const bool branch_taken_0x195ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ac0) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195AC8u;
}
