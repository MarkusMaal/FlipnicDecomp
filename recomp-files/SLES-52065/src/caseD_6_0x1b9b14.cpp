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

// Function: caseD_6
// Address: 0x1b9b14 - 0x1b9bb8
void caseD_6_0x1b9b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1b9b14");
#endif

    switch (ctx->pc) {
        case 0x1b9b78u: goto label_1b9b78;
        default: break;
    }

    ctx->pc = 0x1b9b14u;

    // 0x1b9b14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9b18: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1b9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9b1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b9b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9b20: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9b24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9b28: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b9b2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b9b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9b34: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9b38: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1b9b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x1b9b3c: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1b9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1b9b40: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1b9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9b44: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1b9b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9b48: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b9b48u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9b4c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b9b50: 0x0  nop
    ctx->pc = 0x1b9b50u;
    // NOP
    // 0x1b9b54: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9b54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9b58: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1b9b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b9b5c: 0x0  nop
    ctx->pc = 0x1b9b5cu;
    // NOP
    // 0x1b9b60: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1b9b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1b9b64: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x1b9b64u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x1b9b68: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1b9b68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1b9b6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b9b6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b9b70: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1B9B70u;
    SET_GPR_U32(ctx, 31, 0x1B9B78u);
    ctx->pc = 0x1B9B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B70u;
    // 0x1b9b74: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1B9B70u, 0x1B9B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B78u;
label_1b9b78:
    // 0x1b9b78: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x1b9b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
    // 0x1b9b7c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1b9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1b9b80: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1b9b80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9b84: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1b9b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b9b88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9b88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9b8c: 0x0  nop
    ctx->pc = 0x1b9b8cu;
    // NOP
    // 0x1b9b90: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b9b90u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b9b94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b9b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9b98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9b9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9ba0: 0x0  nop
    ctx->pc = 0x1b9ba0u;
    // NOP
    // 0x1b9ba4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b9ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9ba8: 0x0  nop
    ctx->pc = 0x1b9ba8u;
    // NOP
    // 0x1b9bac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9BACu;
    {
        const bool branch_taken_0x1b9bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9bac) {
            ctx->pc = 0x1B9BB8u;
            return;
        }
    }
    ctx->pc = 0x1B9BB4u;
    // 0x1b9bb4: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1b9bb4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    ctx->pc = 0x1b9bb8u;
}
