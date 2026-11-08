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

// Function: caseD_2
// Address: 0x1b9948 - 0x1b99d4
void caseD_2_0x1b9948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1b9948");
#endif

    switch (ctx->pc) {
        case 0x1b99acu: goto label_1b99ac;
        default: break;
    }

    ctx->pc = 0x1b9948u;

    // 0x1b9948: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b9948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b994c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1b994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9950: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1b9950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b9954: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b9954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b995c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b995cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b9960: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b9964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9968: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b9968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b996c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1b996cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1b9970: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1b9970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1b9974: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1b9974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9978: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b997c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b997cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9980: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b9984: 0x0  nop
    ctx->pc = 0x1b9984u;
    // NOP
    // 0x1b9988: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9988u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b998c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b998cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9990: 0x0  nop
    ctx->pc = 0x1b9990u;
    // NOP
    // 0x1b9994: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b9998: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b9998u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b999c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1b999cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1b99a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b99a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b99a4: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B99A4u;
    SET_GPR_U32(ctx, 31, 0x1B99ACu);
    ctx->pc = 0x1B99A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B99A4u;
    // 0x1b99a8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B99A4u, 0x1B99ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B99ACu;
label_1b99ac:
    // 0x1b99ac: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x1b99acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x1b99b0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b99b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b99b4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1b99b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b99b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b99b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b99bc: 0x0  nop
    ctx->pc = 0x1b99bcu;
    // NOP
    // 0x1b99c0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b99c0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b99c4: 0x0  nop
    ctx->pc = 0x1b99c4u;
    // NOP
    // 0x1b99c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b99c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b99cc: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1B99CCu;
    {
        const bool branch_taken_0x1b99cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99CCu;
        // 0x1b99d0: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99cc) {
            ctx->pc = 0x1B9C34u;
            return;
        }
    }
    ctx->pc = 0x1B99D4u;
}
