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

// Function: entry_0018cc8c
// Address: 0x18cc8c - 0x18ccc4
void entry_0018cc8c_0x18cc8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cc8c_0x18cc8c");
#endif

    ctx->pc = 0x18cc8cu;

    // 0x18cc8c: 0x8e030560  lw          $v1, 0x560($s0)
    ctx->pc = 0x18cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x18cc90: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18CC90u;
    {
        const bool branch_taken_0x18cc90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cc90) {
            ctx->pc = 0x18CCC4u;
            return;
        }
    }
    ctx->pc = 0x18CC98u;
    // 0x18cc98: 0xc60104e0  lwc1        $f1, 0x4E0($s0)
    ctx->pc = 0x18cc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cc9c: 0xc6000570  lwc1        $f0, 0x570($s0)
    ctx->pc = 0x18cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cca0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18cca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18cca4: 0xe60004e0  swc1        $f0, 0x4E0($s0)
    ctx->pc = 0x18cca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1248), bits); }
    // 0x18cca8: 0xc60104e4  lwc1        $f1, 0x4E4($s0)
    ctx->pc = 0x18cca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ccac: 0xc6000574  lwc1        $f0, 0x574($s0)
    ctx->pc = 0x18ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ccb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ccb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18ccb4: 0xe60004e4  swc1        $f0, 0x4E4($s0)
    ctx->pc = 0x18ccb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1252), bits); }
    // 0x18ccb8: 0x8e030560  lw          $v1, 0x560($s0)
    ctx->pc = 0x18ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x18ccbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ccc0: 0xae030560  sw          $v1, 0x560($s0)
    ctx->pc = 0x18ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 3));
    ctx->pc = 0x18ccc4u;
}
