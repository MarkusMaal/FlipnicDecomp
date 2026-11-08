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

// Function: entry_00131fb4
// Address: 0x131fb4 - 0x131ff0
void entry_00131fb4_0x131fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131fb4_0x131fb4");
#endif

    ctx->pc = 0x131fb4u;

    // 0x131fb4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x131fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x131fb8: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x131fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x131fbc: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x131fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x131fc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x131FC0u;
    {
        const bool branch_taken_0x131fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131fc0) {
            ctx->pc = 0x131FF0u;
            return;
        }
    }
    ctx->pc = 0x131FC8u;
    // 0x131fc8: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x131fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131fcc: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x131fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131fd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x131fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x131fd4: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x131fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x131fd8: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x131fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x131fdc: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x131fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131fe0: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x131fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131fe4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x131fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x131fe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131FE8u;
    {
        const bool branch_taken_0x131fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FE8u;
        // 0x131fec: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131fe8) {
            ctx->pc = 0x132000u;
            return;
        }
    }
    ctx->pc = 0x131FF0u;
}
