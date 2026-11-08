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

// Function: entry_0019b034
// Address: 0x19b034 - 0x19b07c
void entry_0019b034_0x19b034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b034_0x19b034");
#endif

    ctx->pc = 0x19b034u;

    // 0x19b034: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19b034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19b038: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b03c: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x19B03Cu;
    {
        const bool branch_taken_0x19b03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b03c) {
            ctx->pc = 0x19B130u;
            return;
        }
    }
    ctx->pc = 0x19B044u;
    // 0x19b044: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x19b044u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19b048: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x19B048u;
    {
        const bool branch_taken_0x19b048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b048) {
            ctx->pc = 0x19B124u;
            return;
        }
    }
    ctx->pc = 0x19B050u;
    // 0x19b050: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x19b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x19b054: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19B054u;
    {
        const bool branch_taken_0x19b054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b054) {
            ctx->pc = 0x19B0B8u;
            return;
        }
    }
    ctx->pc = 0x19B05Cu;
    // 0x19b05c: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x19b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x19b060: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B060u;
    {
        const bool branch_taken_0x19b060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b060) {
            ctx->pc = 0x19B088u;
            return;
        }
    }
    ctx->pc = 0x19B068u;
    // 0x19b068: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x19b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x19b06c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B06Cu;
    {
        const bool branch_taken_0x19b06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b06c) {
            ctx->pc = 0x19B07Cu;
            return;
        }
    }
    ctx->pc = 0x19B074u;
    // 0x19b074: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19B074u;
    {
        const bool branch_taken_0x19b074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b074) {
            ctx->pc = 0x19B0E8u;
            return;
        }
    }
    ctx->pc = 0x19B07Cu;
}
