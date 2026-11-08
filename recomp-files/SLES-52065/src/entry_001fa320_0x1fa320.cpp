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

// Function: entry_001fa320
// Address: 0x1fa320 - 0x1fa348
void entry_001fa320_0x1fa320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa320_0x1fa320");
#endif

    ctx->pc = 0x1fa320u;

    // 0x1fa320: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x1fa320u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x1fa324: 0x2466ff7a  addiu       $a2, $v1, -0x86
    ctx->pc = 0x1fa324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967162));
    // 0x1fa328: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x1fa328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x1fa32c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1fa32cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fa330: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1fa330u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fa334: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1fa334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1fa338: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fa338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa33c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa340: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fa340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa344: 0x0  nop
    ctx->pc = 0x1fa344u;
    // NOP
    ctx->pc = 0x1fa348u;
}
