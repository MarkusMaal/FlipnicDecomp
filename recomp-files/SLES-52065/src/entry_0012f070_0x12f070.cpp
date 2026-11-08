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

// Function: entry_0012f070
// Address: 0x12f070 - 0x12f0c0
void entry_0012f070_0x12f070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f070_0x12f070");
#endif

    ctx->pc = 0x12f070u;

    // 0x12f070: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x12F070u;
    {
        const bool branch_taken_0x12f070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f070) {
            ctx->pc = 0x12F0C0u;
            return;
        }
    }
    ctx->pc = 0x12F078u;
    // 0x12f078: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f07c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12f080: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x12f080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12f084: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x12f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f088: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x12f088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f08c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x12f08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f090: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x12f090u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12f094: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x12f094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12f098: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x12f098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x12f09c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x12f09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x12f0a0: 0xc6230014  lwc1        $f3, 0x14($s1)
    ctx->pc = 0x12f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12f0a4: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x12f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f0a8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x12f0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f0ac: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x12f0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f0b0: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x12f0b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x12f0b4: 0xe4620018  swc1        $f2, 0x18($v1)
    ctx->pc = 0x12f0b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x12f0b8: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x12f0b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x12f0bc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x12f0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    ctx->pc = 0x12f0c0u;
}
