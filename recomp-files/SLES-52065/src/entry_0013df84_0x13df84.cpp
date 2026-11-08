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

// Function: entry_0013df84
// Address: 0x13df84 - 0x13dfec
void entry_0013df84_0x13df84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013df84_0x13df84");
#endif

    switch (ctx->pc) {
        case 0x13df94u: goto label_13df94;
        case 0x13dfa4u: goto label_13dfa4;
        default: break;
    }

    ctx->pc = 0x13df84u;

    // 0x13df84: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13df84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13df88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13df88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df8c: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13DF8Cu;
    SET_GPR_U32(ctx, 31, 0x13DF94u);
    ctx->pc = 0x13DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF8Cu;
    // 0x13df90: 0x24a5f028  addiu       $a1, $a1, -0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13DF8Cu, 0x13DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF94u;
label_13df94:
    // 0x13df94: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13DF94u;
    {
        const bool branch_taken_0x13df94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df94) {
            ctx->pc = 0x13DFECu;
            return;
        }
    }
    ctx->pc = 0x13DF9Cu;
    // 0x13df9c: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x13DF9Cu;
    SET_GPR_U32(ctx, 31, 0x13DFA4u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x13DF9Cu, 0x13DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFA4u;
label_13dfa4:
    // 0x13dfa4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13dfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13dfa8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x13dfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x13dfac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13dfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dfb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13dfb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13dfb4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x13dfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13dfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dfbc: 0x0  nop
    ctx->pc = 0x13dfbcu;
    // NOP
    // 0x13dfc0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13dfc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13dfc4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x13dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x13dfc8: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x13dfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x13dfcc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13dfd0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x13dfd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13dfd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13dfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dfd8: 0x0  nop
    ctx->pc = 0x13dfd8u;
    // NOP
    // 0x13dfdc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x13dfdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13dfe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13dfe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13dfe4: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x13DFE4u;
    SET_GPR_U32(ctx, 31, 0x13DFECu);
    ctx->pc = 0x13DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DFE4u;
    // 0x13dfe8: 0x46020301  sub.s       $f12, $f0, $f2 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x13DFE4u, 0x13DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFECu;
}
