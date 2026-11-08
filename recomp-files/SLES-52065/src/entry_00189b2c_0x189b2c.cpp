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

// Function: entry_00189b2c
// Address: 0x189b2c - 0x189ba8
void entry_00189b2c_0x189b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189b2c_0x189b2c");
#endif

    ctx->pc = 0x189b2cu;

    // 0x189b2c: 0x0  nop
    ctx->pc = 0x189b2cu;
    // NOP
    // 0x189b30: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x189b30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x189b34: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x189b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x189b38: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x189b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x189b3c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x189B3Cu;
    {
        const bool branch_taken_0x189b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B3Cu;
        // 0x189b40: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b3c) {
            ctx->pc = 0x189BA8u;
            return;
        }
    }
    ctx->pc = 0x189B44u;
    // 0x189b44: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x189b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x189b48: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x189b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x189b4c: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x189b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189b50: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x189b50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x189b54: 0x3c024390  lui         $v0, 0x4390
    ctx->pc = 0x189b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17296 << 16));
    // 0x189b58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189b58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x189b5c: 0xc6840010  lwc1        $f4, 0x10($s4)
    ctx->pc = 0x189b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x189b60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189b60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189b64: 0x46142081  sub.s       $f2, $f4, $f20
    ctx->pc = 0x189b64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[20]);
    // 0x189b68: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x189b68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x189b6c: 0xc6830014  lwc1        $f3, 0x14($s4)
    ctx->pc = 0x189b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x189b70: 0x46022902  mul.s       $f4, $f5, $f2
    ctx->pc = 0x189b70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x189b74: 0x46032882  mul.s       $f2, $f5, $f3
    ctx->pc = 0x189b74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x189b78: 0x460020e4  .word       0x460020E4                   # cvt.w.s     $f3, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189b78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x189b7c: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x189b7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x189b80: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x189b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x189b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189b88: 0x24657ff8  addiu       $a1, $v1, 0x7FF8
    ctx->pc = 0x189b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32760));
    // 0x189b8c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x189b90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189b90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189b94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189b94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x189b98: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x189b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x189b9c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x189b9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x189ba0: 0xc06217c  jal         func_1885F0
    ctx->pc = 0x189BA0u;
    SET_GPR_U32(ctx, 31, 0x189BA8u);
    ctx->pc = 0x189BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BA0u;
    // 0x189ba4: 0x24667ff8  addiu       $a2, $v1, 0x7FF8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1885F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1885F0u, 0x189BA0u, 0x189BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BA8u;
}
