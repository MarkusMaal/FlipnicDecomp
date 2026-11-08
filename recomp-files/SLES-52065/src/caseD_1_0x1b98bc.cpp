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

// Function: caseD_1
// Address: 0x1b98bc - 0x1b9948
void caseD_1_0x1b98bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1b98bc");
#endif

    switch (ctx->pc) {
        case 0x1b9920u: goto label_1b9920;
        default: break;
    }

    ctx->pc = 0x1b98bcu;

    // 0x1b98bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b98c0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1b98c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b98c4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1b98c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b98c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b98cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b98ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b98d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b98d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b98d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b98d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b98d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b98dc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b98e0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1b98e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1b98e4: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1b98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1b98e8: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1b98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b98ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b98ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b98f0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b98f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b98f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b98f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b98f8: 0x0  nop
    ctx->pc = 0x1b98f8u;
    // NOP
    // 0x1b98fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1b98fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9900: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b9900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9904: 0x0  nop
    ctx->pc = 0x1b9904u;
    // NOP
    // 0x1b9908: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b990c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1b990cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1b9910: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1b9910u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1b9914: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1b9914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b9918: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9918u;
    SET_GPR_U32(ctx, 31, 0x1B9920u);
    ctx->pc = 0x1B991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9918u;
    // 0x1b991c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9918u, 0x1B9920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9920u;
label_1b9920:
    // 0x1b9920: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1b9920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9924: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b9924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9928: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1b9928u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b992c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b992cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9930: 0x0  nop
    ctx->pc = 0x1b9930u;
    // NOP
    // 0x1b9934: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b9934u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b9938: 0x0  nop
    ctx->pc = 0x1b9938u;
    // NOP
    // 0x1b993c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b993cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9940: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x1B9940u;
    {
        const bool branch_taken_0x1b9940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9940u;
        // 0x1b9944: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9940) {
            ctx->pc = 0x1B9C34u;
            return;
        }
    }
    ctx->pc = 0x1B9948u;
}
