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

// Function: caseD_3
// Address: 0x1b99d4 - 0x1b9a74
void caseD_3_0x1b99d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1b99d4");
#endif

    switch (ctx->pc) {
        case 0x1b9a38u: goto label_1b9a38;
        default: break;
    }

    ctx->pc = 0x1b99d4u;

    // 0x1b99d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b99d8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1b99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b99dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b99dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b99e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b99e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b99e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b99e8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b99ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b99ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b99f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b99f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b99f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b99f8: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1b99f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1b99fc: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1b99fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1b9a00: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1b9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9a04: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1b9a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9a08: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b9a08u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9a0c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b9a10: 0x0  nop
    ctx->pc = 0x1b9a10u;
    // NOP
    // 0x1b9a14: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9a14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9a18: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1b9a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b9a1c: 0x0  nop
    ctx->pc = 0x1b9a1cu;
    // NOP
    // 0x1b9a20: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1b9a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1b9a24: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x1b9a24u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x1b9a28: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1b9a28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1b9a2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b9a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b9a30: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9A30u;
    SET_GPR_U32(ctx, 31, 0x1B9A38u);
    ctx->pc = 0x1B9A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9A30u;
    // 0x1b9a34: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9A30u, 0x1B9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A38u;
label_1b9a38:
    // 0x1b9a38: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1b9a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1b9a3c: 0x3c043f40  lui         $a0, 0x3F40
    ctx->pc = 0x1b9a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16192 << 16));
    // 0x1b9a40: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9a44: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b9a44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9a48: 0x0  nop
    ctx->pc = 0x1b9a48u;
    // NOP
    // 0x1b9a4c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b9a4cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b9a50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9a54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9a58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9a5c: 0x0  nop
    ctx->pc = 0x1b9a5cu;
    // NOP
    // 0x1b9a60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b9a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9a64: 0x0  nop
    ctx->pc = 0x1b9a64u;
    // NOP
    // 0x1b9a68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9A68u;
    {
        const bool branch_taken_0x1b9a68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9a68) {
            ctx->pc = 0x1B9A74u;
            return;
        }
    }
    ctx->pc = 0x1B9A70u;
    // 0x1b9a70: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1b9a70u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    ctx->pc = 0x1b9a74u;
}
