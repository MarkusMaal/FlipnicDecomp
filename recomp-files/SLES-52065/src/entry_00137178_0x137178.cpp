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

// Function: entry_00137178
// Address: 0x137178 - 0x1371d4
void entry_00137178_0x137178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137178_0x137178");
#endif

    ctx->pc = 0x137178u;

    // 0x137178: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x137178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x13717c: 0x24426990  addiu       $v0, $v0, 0x6990
    ctx->pc = 0x13717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27024));
    // 0x137180: 0x3c093e00  lui         $t1, 0x3E00
    ctx->pc = 0x137180u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15872 << 16));
    // 0x137184: 0xaf8285b0  sw          $v0, -0x7A50($gp)
    ctx->pc = 0x137184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935984), GPR_U32(ctx, 2));
    // 0x137188: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x137188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13718c: 0x8f8285b0  lw          $v0, -0x7A50($gp)
    ctx->pc = 0x13718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x137190: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x137190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137194: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x137194u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137198: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x137198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x13719c: 0x8f8285b0  lw          $v0, -0x7A50($gp)
    ctx->pc = 0x13719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1371a0: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x1371a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x1371a4: 0x8f8285b0  lw          $v0, -0x7A50($gp)
    ctx->pc = 0x1371a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1371a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1371a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1371ac: 0x8f8285b0  lw          $v0, -0x7A50($gp)
    ctx->pc = 0x1371acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x1371b0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1371b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1371b4: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1371b4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1371b8: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1371b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1371bc: 0x3c073e80  lui         $a3, 0x3E80
    ctx->pc = 0x1371bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16000 << 16));
    // 0x1371c0: 0x3c063ec0  lui         $a2, 0x3EC0
    ctx->pc = 0x1371c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16064 << 16));
    // 0x1371c4: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1371c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1371c8: 0x3c043f20  lui         $a0, 0x3F20
    ctx->pc = 0x1371c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16160 << 16));
    // 0x1371cc: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1371ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x1371d0: 0x3c023f60  lui         $v0, 0x3F60
    ctx->pc = 0x1371d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16224 << 16));
    ctx->pc = 0x1371d4u;
}
