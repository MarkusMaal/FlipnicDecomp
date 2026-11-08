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

// Function: entry_001ad880
// Address: 0x1ad880 - 0x1ad908
void entry_001ad880_0x1ad880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad880_0x1ad880");
#endif

    switch (ctx->pc) {
        case 0x1ad8d8u: goto label_1ad8d8;
        case 0x1ad8fcu: goto label_1ad8fc;
        default: break;
    }

    ctx->pc = 0x1ad880u;

    // 0x1ad880: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ad880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad884: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1ad884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1ad888: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ad888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1ad88c: 0x8e320800  lw          $s2, 0x800($s1)
    ctx->pc = 0x1ad88cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x1ad890: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ad890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad894: 0x0  nop
    ctx->pc = 0x1ad894u;
    // NOP
    // 0x1ad898: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ad89c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad89cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad8a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad8a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ad8a4: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x1ad8a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1ad8a8: 0x0  nop
    ctx->pc = 0x1ad8a8u;
    // NOP
    // 0x1ad8ac: 0x253001a  div         $zero, $s2, $s3
    ctx->pc = 0x1ad8acu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad8b0: 0x0  nop
    ctx->pc = 0x1ad8b0u;
    // NOP
    // 0x1ad8b4: 0x0  nop
    ctx->pc = 0x1ad8b4u;
    // NOP
    // 0x1ad8b8: 0x1810  mfhi        $v1
    ctx->pc = 0x1ad8b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ad8bc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AD8BCu;
    {
        const bool branch_taken_0x1ad8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8bc) {
            ctx->pc = 0x1AD908u;
            return;
        }
    }
    ctx->pc = 0x1AD8C4u;
    // 0x1ad8c4: 0x8e2307fc  lw          $v1, 0x7FC($s1)
    ctx->pc = 0x1ad8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2044)));
    // 0x1ad8c8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1AD8C8u;
    {
        const bool branch_taken_0x1ad8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8c8) {
            ctx->pc = 0x1AD908u;
            return;
        }
    }
    ctx->pc = 0x1AD8D0u;
    // 0x1ad8d0: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AD8D0u;
    SET_GPR_U32(ctx, 31, 0x1AD8D8u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AD8D0u, 0x1AD8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8D8u;
label_1ad8d8:
    // 0x1ad8d8: 0x253001a  div         $zero, $s2, $s3
    ctx->pc = 0x1ad8d8u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad8dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad8e0: 0x240500d5  addiu       $a1, $zero, 0xD5
    ctx->pc = 0x1ad8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    // 0x1ad8e4: 0x240300d6  addiu       $v1, $zero, 0xD6
    ctx->pc = 0x1ad8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x1ad8e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ad8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad8ec: 0x3812  mflo        $a3
    ctx->pc = 0x1ad8ecu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1ad8f0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1ad8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1ad8f4: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AD8F4u;
    SET_GPR_U32(ctx, 31, 0x1AD8FCu);
    ctx->pc = 0x1AD8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8F4u;
    // 0x1ad8f8: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AD8F4u, 0x1AD8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8FCu;
label_1ad8fc:
    // 0x1ad8fc: 0x8e2307fc  lw          $v1, 0x7FC($s1)
    ctx->pc = 0x1ad8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2044)));
    // 0x1ad900: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ad900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ad904: 0xae2307fc  sw          $v1, 0x7FC($s1)
    ctx->pc = 0x1ad904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2044), GPR_U32(ctx, 3));
    ctx->pc = 0x1ad908u;
}
