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

// Function: entry_00120880
// Address: 0x120880 - 0x1208b0
void entry_00120880_0x120880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120880_0x120880");
#endif

    ctx->pc = 0x120880u;

    // 0x120880: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x120880u;
    {
        const bool branch_taken_0x120880 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x120880) {
            ctx->pc = 0x1208E4u;
            return;
        }
    }
    ctx->pc = 0x120888u;
    // 0x120888: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x120888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12088c: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x12088cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x120890: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x120890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x120894: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x120894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x120898: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x120898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x12089c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12089Cu;
    {
        const bool branch_taken_0x12089c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12089c) {
            ctx->pc = 0x1208B0u;
            return;
        }
    }
    ctx->pc = 0x1208A4u;
    // 0x1208a4: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1208a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1208a8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1208a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1208ac: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x1208acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1208b0u;
}
