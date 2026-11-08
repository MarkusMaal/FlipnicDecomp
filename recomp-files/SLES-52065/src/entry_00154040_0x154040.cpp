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

// Function: entry_00154040
// Address: 0x154040 - 0x1540b4
void entry_00154040_0x154040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154040_0x154040");
#endif

    switch (ctx->pc) {
        case 0x1540b0u: goto label_1540b0;
        default: break;
    }

    ctx->pc = 0x154040u;

    // 0x154040: 0xc7a50070  lwc1        $f5, 0x70($sp)
    ctx->pc = 0x154040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x154044: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x154044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x154048: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x154048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15404c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15404cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154050: 0xc7a60088  lwc1        $f6, 0x88($sp)
    ctx->pc = 0x154050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x154054: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x154054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154058: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x154058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15405c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x15405cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x154060: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x154060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154064: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x154064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154068: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x154068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15406c: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x15406cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x154070: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x154070u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x154074: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x154074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x154078: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x154078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x15407c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x15407cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x154080: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x154080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x154084: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x154084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x154088: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x154088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x15408c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x15408cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x154090: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x154090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x154094: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x154094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x154098: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x154098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15409c: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x15409cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1540a0: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1540a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1540a4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1540a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1540a8: 0xc0552e8  jal         func_154BA0
    ctx->pc = 0x1540A8u;
    SET_GPR_U32(ctx, 31, 0x1540B0u);
    ctx->pc = 0x1540ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540A8u;
    // 0x1540ac: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x154BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154BA0u, 0x1540A8u, 0x1540B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540B0u;
label_1540b0:
    // 0x1540b0: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1540b0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1540b4u;
}
