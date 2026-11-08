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

// Function: entry_001388f0
// Address: 0x1388f0 - 0x138924
void entry_001388f0_0x1388f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001388f0_0x1388f0");
#endif

    ctx->pc = 0x1388f0u;

    // 0x1388f0: 0x34028022  ori         $v0, $zero, 0x8022
    ctx->pc = 0x1388f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32802);
    // 0x1388f4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1388f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1388f8: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x1388f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1388fc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1388fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x138900: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x138900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x138904: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x138904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x138908: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x138908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13890c: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x13890cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x138910: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x138910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x138914: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x138914u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x138918: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x138918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13891c: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x13891cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x138920: 0xfe840018  sd          $a0, 0x18($s4)
    ctx->pc = 0x138920u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 4));
    ctx->pc = 0x138924u;
}
