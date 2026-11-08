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

// Function: entry_001544e4
// Address: 0x1544e4 - 0x15455c
void entry_001544e4_0x1544e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001544e4_0x1544e4");
#endif

    switch (ctx->pc) {
        case 0x154554u: goto label_154554;
        default: break;
    }

    ctx->pc = 0x1544e4u;

    // 0x1544e4: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x1544e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1544e8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1544e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1544ec: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x1544ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1544f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1544f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544f4: 0xc7a60078  lwc1        $f6, 0x78($sp)
    ctx->pc = 0x1544f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1544f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1544f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544fc: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1544fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154500: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x154500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x154504: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x154504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154508: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x154508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15450c: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x15450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154510: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x154510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x154514: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x154514u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x154518: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x154518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x15451c: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x15451cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x154520: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x154520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x154524: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x154524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x154528: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x154528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x15452c: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x15452cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x154530: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x154530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x154534: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x154534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x154538: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x154538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x15453c: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x15453cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x154540: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x154540u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x154544: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x154544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x154548: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x154548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x15454c: 0xc0552e8  jal         func_154BA0
    ctx->pc = 0x15454Cu;
    SET_GPR_U32(ctx, 31, 0x154554u);
    ctx->pc = 0x154550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15454Cu;
    // 0x154550: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x154BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154BA0u, 0x15454Cu, 0x154554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154554u;
label_154554:
    // 0x154554: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x154554u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x154558: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x154558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x15455cu;
}
