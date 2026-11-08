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

// Function: entry_001c59d8
// Address: 0x1c59d8 - 0x1c5a3c
void entry_001c59d8_0x1c59d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c59d8_0x1c59d8");
#endif

    ctx->pc = 0x1c59d8u;

    // 0x1c59d8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1c59d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c59dc: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x1c59dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c59e0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C59E0u;
    {
        const bool branch_taken_0x1c59e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c59e0) {
            ctx->pc = 0x1C5A48u;
            return;
        }
    }
    ctx->pc = 0x1C59E8u;
    // 0x1c59e8: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x1c59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1c59ec: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C59ECu;
    {
        const bool branch_taken_0x1c59ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c59ec) {
            ctx->pc = 0x1C5A3Cu;
            return;
        }
    }
    ctx->pc = 0x1C59F4u;
    // 0x1c59f4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1c59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1c59f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c59f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c59fc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1c59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1c5a00: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1c5a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c5a04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c5a08: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x1c5a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c5a0c: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x1c5a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5a10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c5a14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5a18: 0x460208c0  add.s       $f3, $f1, $f2
    ctx->pc = 0x1c5a18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c5a1c: 0x46022040  add.s       $f1, $f4, $f2
    ctx->pc = 0x1c5a1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1c5a20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c5a20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c5a24: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x1c5a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x1c5a28: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x1c5a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5a2c: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x1c5a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1c5a30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5a34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c5a34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c5a38: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x1c5a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    ctx->pc = 0x1c5a3cu;
}
