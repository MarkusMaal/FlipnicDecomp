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

// Function: caseD_5
// Address: 0x1b9a7c - 0x1b9b14
void caseD_5_0x1b9a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1b9a7c");
#endif

    switch (ctx->pc) {
        case 0x1b9ae0u: goto label_1b9ae0;
        default: break;
    }

    ctx->pc = 0x1b9a7cu;

    // 0x1b9a7c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9a80: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1b9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9a84: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1b9a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b9a88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b9a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9a8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9a90: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b9a94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b9a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9a9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9aa0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1b9aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1b9aa4: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1b9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1b9aa8: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1b9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9aac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9ab0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b9ab0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9ab4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b9ab8: 0x0  nop
    ctx->pc = 0x1b9ab8u;
    // NOP
    // 0x1b9abc: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9abcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9ac0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b9ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9ac4: 0x0  nop
    ctx->pc = 0x1b9ac4u;
    // NOP
    // 0x1b9ac8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b9acc: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b9accu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b9ad0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1b9ad0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1b9ad4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b9ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b9ad8: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9AD8u;
    SET_GPR_U32(ctx, 31, 0x1B9AE0u);
    ctx->pc = 0x1B9ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9AD8u;
    // 0x1b9adc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9AD8u, 0x1B9AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9AE0u;
label_1b9ae0:
    // 0x1b9ae0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1b9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1b9ae4: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1b9ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9ae8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9aec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b9aecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9af0: 0x0  nop
    ctx->pc = 0x1b9af0u;
    // NOP
    // 0x1b9af4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b9af4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b9af8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9afc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9b00: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1b9b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1b9b04: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x1b9b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x1b9b08: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x1b9b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1b9b0c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1B9B0Cu;
    {
        const bool branch_taken_0x1b9b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B0Cu;
        // 0x1b9b10: 0xae03009c  sw          $v1, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b0c) {
            ctx->pc = 0x1B9C34u;
            return;
        }
    }
    ctx->pc = 0x1B9B14u;
}
