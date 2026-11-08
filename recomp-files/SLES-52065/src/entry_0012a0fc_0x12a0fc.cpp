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

// Function: entry_0012a0fc
// Address: 0x12a0fc - 0x12a168
void entry_0012a0fc_0x12a0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a0fc_0x12a0fc");
#endif

    switch (ctx->pc) {
        case 0x12a118u: goto label_12a118;
        default: break;
    }

    ctx->pc = 0x12a0fcu;

    // 0x12a0fc: 0x0  nop
    ctx->pc = 0x12a0fcu;
    // NOP
    // 0x12a100: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x12a100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x12a104: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12a104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a108: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A108u;
    {
        const bool branch_taken_0x12a108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a108) {
            ctx->pc = 0x12A0F4u;
            return;
        }
    }
    ctx->pc = 0x12A110u;
    // 0x12a110: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x12A110u;
    SET_GPR_U32(ctx, 31, 0x12A118u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x12A110u, 0x12A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A118u;
label_12a118:
    // 0x12a118: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12a118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12a11c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x12a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x12a120: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x12a120u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a124: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a128: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12a128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12a12c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12a12cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a130: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12a130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a134: 0x0  nop
    ctx->pc = 0x12a134u;
    // NOP
    // 0x12a138: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12a138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12a13c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x12a13cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x12a140: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12a140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12a144: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12a144u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12a148: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12a148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12a14c: 0x0  nop
    ctx->pc = 0x12a14cu;
    // NOP
    // 0x12a150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12a150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12a154: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12a158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a15c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a160: 0x3e00008  jr          $ra
    ctx->pc = 0x12A160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A160u;
        // 0x12a164: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A168u;
}
