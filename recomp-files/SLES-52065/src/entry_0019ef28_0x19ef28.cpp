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

// Function: entry_0019ef28
// Address: 0x19ef28 - 0x19ef48
void entry_0019ef28_0x19ef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef28_0x19ef28");
#endif

    ctx->pc = 0x19ef28u;

    // 0x19ef28: 0xae800320  sw          $zero, 0x320($s4)
    ctx->pc = 0x19ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 0));
    // 0x19ef2c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ef30: 0x9062282c  lbu         $v0, 0x282C($v1)
    ctx->pc = 0x19ef30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
    // 0x19ef34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19EF34u;
    {
        const bool branch_taken_0x19ef34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ef34) {
            ctx->pc = 0x19EF48u;
            return;
        }
    }
    ctx->pc = 0x19EF3Cu;
    // 0x19ef3c: 0x9062282a  lbu         $v0, 0x282A($v1)
    ctx->pc = 0x19ef3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10282)));
    // 0x19ef40: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x19EF40u;
    {
        const bool branch_taken_0x19ef40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef40) {
            ctx->pc = 0x19F034u;
            return;
        }
    }
    ctx->pc = 0x19EF48u;
}
