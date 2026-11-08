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

// Function: entry_002038ec
// Address: 0x2038ec - 0x20391c
void entry_002038ec_0x2038ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002038ec_0x2038ec");
#endif

    ctx->pc = 0x2038ecu;

    // 0x2038ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2038ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2038f0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2038f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2038f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2038f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2038f8: 0x26060042  addiu       $a2, $s0, 0x42
    ctx->pc = 0x2038f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x2038fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2038fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x203900: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x203900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x203904: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x203904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203908: 0xae070038  sw          $a3, 0x38($s0)
    ctx->pc = 0x203908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
    // 0x20390c: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x20390cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x203910: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x203910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x203914: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x203914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x203918: 0xa2110042  sb          $s1, 0x42($s0)
    ctx->pc = 0x203918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
    ctx->pc = 0x20391cu;
}
