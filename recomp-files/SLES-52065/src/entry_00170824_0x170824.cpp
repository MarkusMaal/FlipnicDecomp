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

// Function: entry_00170824
// Address: 0x170824 - 0x170840
void entry_00170824_0x170824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170824_0x170824");
#endif

    ctx->pc = 0x170824u;

    // 0x170824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170828: 0x0  nop
    ctx->pc = 0x170828u;
    // NOP
    // 0x17082c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17082cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170830: 0x0  nop
    ctx->pc = 0x170830u;
    // NOP
    // 0x170834: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x170834u;
    {
        const bool branch_taken_0x170834 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x170834) {
            ctx->pc = 0x170840u;
            return;
        }
    }
    ctx->pc = 0x17083Cu;
    // 0x17083c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x17083cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x170840u;
}
