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

// Function: entry_00170c70
// Address: 0x170c70 - 0x170cb8
void entry_00170c70_0x170c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170c70_0x170c70");
#endif

    ctx->pc = 0x170c70u;

    // 0x170c70: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x170c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x170c74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x170c74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170c7c: 0x0  nop
    ctx->pc = 0x170c7cu;
    // NOP
    // 0x170c80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x170c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x170c84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170c88: 0x0  nop
    ctx->pc = 0x170c88u;
    // NOP
    // 0x170c8c: 0x4501fff5  bc1t        . + 4 + (-0xB << 2)
    ctx->pc = 0x170C8Cu;
    {
        const bool branch_taken_0x170c8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C8Cu;
        // 0x170c90: 0x9d1021  addu        $v0, $a0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c8c) {
            ctx->pc = 0x170C64u;
            return;
        }
    }
    ctx->pc = 0x170C94u;
    // 0x170c94: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x170c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x170c98: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x170c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x170c9c: 0xa0430020  sb          $v1, 0x20($v0)
    ctx->pc = 0x170c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x170ca0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x170ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x170ca4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x170ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x170ca8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x170ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x170cac: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x170cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x170cb0: 0xc062804  jal         func_18A010
    ctx->pc = 0x170CB0u;
    SET_GPR_U32(ctx, 31, 0x170CB8u);
    ctx->pc = 0x170CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170CB0u;
    // 0x170cb4: 0xa0400020  sb          $zero, 0x20($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x170CB0u, 0x170CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170CB8u;
}
