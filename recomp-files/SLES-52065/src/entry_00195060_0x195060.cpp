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

// Function: entry_00195060
// Address: 0x195060 - 0x195080
void entry_00195060_0x195060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195060_0x195060");
#endif

    ctx->pc = 0x195060u;

    // 0x195060: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x195060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x195064: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x195064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x195068: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x195068u;
    {
        const bool branch_taken_0x195068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195068) {
            ctx->pc = 0x19508Cu;
            return;
        }
    }
    ctx->pc = 0x195070u;
    // 0x195070: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x195070u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x195074: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x195074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x195078: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x195078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19507c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19507cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x195080u;
}
