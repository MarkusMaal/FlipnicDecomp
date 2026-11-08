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

// Function: entry_00116cbc
// Address: 0x116cbc - 0x116cd4
void entry_00116cbc_0x116cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116cbc_0x116cbc");
#endif

    ctx->pc = 0x116cbcu;

    // 0x116cbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x116cc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x116cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x116cc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x116cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116cc8: 0x0  nop
    ctx->pc = 0x116cc8u;
    // NOP
    // 0x116ccc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x116cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x116cd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x116cd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x116cd4u;
}
