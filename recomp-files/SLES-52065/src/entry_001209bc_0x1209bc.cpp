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

// Function: entry_001209bc
// Address: 0x1209bc - 0x1209f8
void entry_001209bc_0x1209bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001209bc_0x1209bc");
#endif

    ctx->pc = 0x1209bcu;

    // 0x1209bc: 0x401027  not         $v0, $v0
    ctx->pc = 0x1209bcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1209c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1209c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1209c4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1209C4u;
    {
        const bool branch_taken_0x1209c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1209c4) {
            ctx->pc = 0x120A2Cu;
            return;
        }
    }
    ctx->pc = 0x1209CCu;
    // 0x1209cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1209ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1209d0: 0x64020005  daddiu      $v0, $zero, 0x5
    ctx->pc = 0x1209d0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
    // 0x1209d4: 0x9064003a  lbu         $a0, 0x3A($v1)
    ctx->pc = 0x1209d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1209d8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1209d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1209dc: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x1209dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1209e0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1209e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1209e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1209E4u;
    {
        const bool branch_taken_0x1209e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1209e4) {
            ctx->pc = 0x1209F8u;
            return;
        }
    }
    ctx->pc = 0x1209ECu;
    // 0x1209ec: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1209ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1209f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1209f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1209f4: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x1209f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1209f8u;
}
