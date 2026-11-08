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

// Function: entry_00174664
// Address: 0x174664 - 0x174694
void entry_00174664_0x174664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174664_0x174664");
#endif

    ctx->pc = 0x174664u;

    // 0x174664: 0x0  nop
    ctx->pc = 0x174664u;
    // NOP
    // 0x174668: 0x2e620006  sltiu       $v0, $s3, 0x6
    ctx->pc = 0x174668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x17466c: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x17466Cu;
    {
        const bool branch_taken_0x17466c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17466c) {
            ctx->pc = 0x17452Cu;
            return;
        }
    }
    ctx->pc = 0x174674u;
    // 0x174674: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x174674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174678: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x174678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x17467c: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x17467cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x174680: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x174684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174688: 0x0  nop
    ctx->pc = 0x174688u;
    // NOP
    // 0x17468c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17468cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174690: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x174690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    ctx->pc = 0x174694u;
}
