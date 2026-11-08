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

// Function: entry_001ff5e8
// Address: 0x1ff5e8 - 0x1ff614
void entry_001ff5e8_0x1ff5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff5e8_0x1ff5e8");
#endif

    ctx->pc = 0x1ff5e8u;

    // 0x1ff5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff5ec: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x1ff5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ff5f0: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1ff5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1ff5f4: 0x36230001  ori         $v1, $s1, 0x1
    ctx->pc = 0x1ff5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1ff5f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff5fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ff5fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ff600: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x1ff600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1ff604: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ff604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1ff608: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1ff608u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1ff60c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff610: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1ff610u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    ctx->pc = 0x1ff614u;
}
