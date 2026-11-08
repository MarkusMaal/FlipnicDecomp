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

// Function: FUN_00135eb0
// Address: 0x135eb0 - 0x13601c
void FUN_00135eb0_0x135eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135eb0_0x135eb0");
#endif

    ctx->pc = 0x135eb0u;

    // 0x135eb0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x135eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135eb4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135eb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x135eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x135ebc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x135ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x135ec0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x135ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135ec4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135ec8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x135ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x135ecc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x135eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135ed0: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135ed4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x135ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x135ed8: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135edc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x135edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x135ee0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x135ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135ee4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135ee8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x135ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x135eec: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x135eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135ef0: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135ef4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x135ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x135ef8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x135ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135efc: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f00: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x135f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x135f04: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f08: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x135f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x135f0c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x135f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f10: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f14: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x135f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x135f18: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x135f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f1c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f20: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x135f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x135f24: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x135f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f28: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f2c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x135f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x135f30: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f34: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x135f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x135f38: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x135f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f3c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f40: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x135f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x135f44: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x135f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f48: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f4c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x135f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x135f50: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x135f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f54: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f58: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x135f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x135f5c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f60: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x135f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x135f64: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x135f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f68: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f6c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x135f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x135f70: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x135f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f74: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f78: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x135f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x135f7c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x135f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f80: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f84: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x135f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x135f88: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f8c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x135f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x135f90: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x135f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f94: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135f98: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x135f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x135f9c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x135f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135fa0: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135fa4: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x135fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x135fa8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x135fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135fac: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135fb0: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x135fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x135fb4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135fb8: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x135fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x135fbc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x135fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135fc0: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135fc4: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x135fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x135fc8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x135fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135fcc: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135fd0: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x135fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x135fd4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x135fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135fd8: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135fdc: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x135fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x135fe0: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135fe4: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x135fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
    // 0x135fe8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x135fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135fec: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135ff0: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x135ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x135ff4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x135ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135ff8: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x135ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x135ffc: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x135ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x136000: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x136000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136004: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x136004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x136008: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x136008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x13600c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x13600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x136010: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x136010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
    // 0x136014: 0x804faf4  j           func_13EBD0
    ctx->pc = 0x136014u;
    ctx->pc = 0x136018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136014u;
    // 0x136018: 0x8c8400a0  lw          $a0, 0xA0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EBD0u;
    FUN_0013ebd0_0x13ebd0(rdram, ctx, runtime); return;
    ctx->pc = 0x13601Cu;
}
