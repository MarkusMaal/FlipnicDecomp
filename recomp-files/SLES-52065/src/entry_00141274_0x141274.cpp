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

// Function: entry_00141274
// Address: 0x141274 - 0x1412d4
void entry_00141274_0x141274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141274_0x141274");
#endif

    ctx->pc = 0x141274u;

    // 0x141274: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x141274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x141278: 0x27a901d0  addiu       $t1, $sp, 0x1D0
    ctx->pc = 0x141278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x14127c: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x14127cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141280: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x141280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141284: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x141284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x141288: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x141288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x14128c: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x14128cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x141290: 0x27a401c4  addiu       $a0, $sp, 0x1C4
    ctx->pc = 0x141290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x141294: 0xfd280000  sd          $t0, 0x0($t1)
    ctx->pc = 0x141294u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 8));
    // 0x141298: 0x27a301b8  addiu       $v1, $sp, 0x1B8
    ctx->pc = 0x141298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x14129c: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x14129cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1412a0: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x1412a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1412a4: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x1412a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1412a8: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x1412a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1412ac: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x1412acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1412b0: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x1412b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1412b4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1412b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1412b8: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x1412b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1412bc: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x1412bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1412c0: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x1412c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1412c4: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x1412c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1412c8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1412c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1412cc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1412CCu;
    {
        const bool branch_taken_0x1412cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1412D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412CCu;
        // 0x1412d0: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412cc) {
            ctx->pc = 0x141360u;
            return;
        }
    }
    ctx->pc = 0x1412D4u;
}
