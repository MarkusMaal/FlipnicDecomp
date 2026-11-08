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

// Function: entry_001fba4c
// Address: 0x1fba4c - 0x1fba78
void entry_001fba4c_0x1fba4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fba4c_0x1fba4c");
#endif

    ctx->pc = 0x1fba4cu;

    // 0x1fba4c: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x1fba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x1fba50: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x1fba50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x1fba54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fba54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fba58: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x1fba58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x1fba5c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1fba5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1fba60: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1fba60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fba64: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x1fba64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x1fba68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fba68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fba6c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1fba6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fba70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fba70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fba74: 0x0  nop
    ctx->pc = 0x1fba74u;
    // NOP
    ctx->pc = 0x1fba78u;
}
