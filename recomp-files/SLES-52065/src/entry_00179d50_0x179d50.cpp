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

// Function: entry_00179d50
// Address: 0x179d50 - 0x179d68
void entry_00179d50_0x179d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179d50_0x179d50");
#endif

    ctx->pc = 0x179d50u;

    // 0x179d50: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x179d50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179d54: 0x0  nop
    ctx->pc = 0x179d54u;
    // NOP
    // 0x179d58: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x179D58u;
    {
        const bool branch_taken_0x179d58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179d58) {
            ctx->pc = 0x179D68u;
            return;
        }
    }
    ctx->pc = 0x179D60u;
    // 0x179d60: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x179d60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x179d64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x179d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179d68u;
}
