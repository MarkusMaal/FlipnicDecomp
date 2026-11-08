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

// Function: caseD_1
// Address: 0x1706f8 - 0x170720
void caseD_1_0x1706f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1706f8");
#endif

    ctx->pc = 0x1706f8u;

    // 0x1706f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1706f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1706fc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1706fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x170700: 0xae0301d4  sw          $v1, 0x1D4($s0)
    ctx->pc = 0x170700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
    // 0x170704: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x170704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170708: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x170708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x17070c: 0xc601025c  lwc1        $f1, 0x25C($s0)
    ctx->pc = 0x17070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170710: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x170710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170714: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x170714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x170718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x170718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17071c: 0xe6000244  swc1        $f0, 0x244($s0)
    ctx->pc = 0x17071cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
    ctx->pc = 0x170720u;
}
