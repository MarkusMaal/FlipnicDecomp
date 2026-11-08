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

// Function: entry_0019ef74
// Address: 0x19ef74 - 0x19ef98
void entry_0019ef74_0x19ef74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef74_0x19ef74");
#endif

    ctx->pc = 0x19ef74u;

    // 0x19ef74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19ef78: 0xae82069c  sw          $v0, 0x69C($s4)
    ctx->pc = 0x19ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 2));
    // 0x19ef7c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ef80: 0x9062282a  lbu         $v0, 0x282A($v1)
    ctx->pc = 0x19ef80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10282)));
    // 0x19ef84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19EF84u;
    {
        const bool branch_taken_0x19ef84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ef84) {
            ctx->pc = 0x19EF98u;
            return;
        }
    }
    ctx->pc = 0x19EF8Cu;
    // 0x19ef8c: 0x9062282c  lbu         $v0, 0x282C($v1)
    ctx->pc = 0x19ef8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
    // 0x19ef90: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x19EF90u;
    {
        const bool branch_taken_0x19ef90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef90) {
            ctx->pc = 0x19F034u;
            return;
        }
    }
    ctx->pc = 0x19EF98u;
}
