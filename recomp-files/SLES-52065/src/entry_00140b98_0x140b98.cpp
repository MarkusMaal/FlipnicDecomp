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

// Function: entry_00140b98
// Address: 0x140b98 - 0x140bf4
void entry_00140b98_0x140b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140b98_0x140b98");
#endif

    ctx->pc = 0x140b98u;

    // 0x140b98: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x140b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x140b9c: 0x27ae00a0  addiu       $t6, $sp, 0xA0
    ctx->pc = 0x140b9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x140ba0: 0xdced0000  ld          $t5, 0x0($a3)
    ctx->pc = 0x140ba0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140ba4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x140ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140ba8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x140ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x140bac: 0x27ac0000  addiu       $t4, $sp, 0x0
    ctx->pc = 0x140bacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x140bb0: 0x27ab0080  addiu       $t3, $sp, 0x80
    ctx->pc = 0x140bb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x140bb4: 0x27a800a8  addiu       $t0, $sp, 0xA8
    ctx->pc = 0x140bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x140bb8: 0x27a90088  addiu       $t1, $sp, 0x88
    ctx->pc = 0x140bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x140bbc: 0xfdcd0000  sd          $t5, 0x0($t6)
    ctx->pc = 0x140bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 13));
    // 0x140bc0: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x140bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x140bc4: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x140bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x140bc8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x140bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140bcc: 0xc5e10004  lwc1        $f1, 0x4($t7)
    ctx->pc = 0x140bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140bd0: 0xc5e00008  lwc1        $f0, 0x8($t7)
    ctx->pc = 0x140bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140bd4: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x140bd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x140bd8: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x140bd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x140bdc: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x140bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x140be0: 0xdd8a0000  ld          $t2, 0x0($t4)
    ctx->pc = 0x140be0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x140be4: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x140be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140be8: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x140be8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
    // 0x140bec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x140BECu;
    {
        const bool branch_taken_0x140bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BECu;
        // 0x140bf0: 0xe5600008  swc1        $f0, 0x8($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bec) {
            ctx->pc = 0x140C78u;
            return;
        }
    }
    ctx->pc = 0x140BF4u;
}
