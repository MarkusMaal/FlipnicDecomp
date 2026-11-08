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

// Function: entry_001ee708
// Address: 0x1ee708 - 0x1ee76c
void entry_001ee708_0x1ee708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee708_0x1ee708");
#endif

    ctx->pc = 0x1ee708u;

    // 0x1ee708: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x1ee708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x1ee70c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1ee70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ee710: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1ee710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ee714: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x1ee714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x1ee718: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x1ee718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x1ee71c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1ee71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ee720: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x1ee720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x1ee724: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1ee724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1ee728: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1ee728u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1ee72c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1ee72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1ee730: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x1ee730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x1ee734: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1ee734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1ee738: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1ee738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1ee73c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1ee73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ee740: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x1ee740u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x1ee744: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1ee744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ee748: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x1ee748u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x1ee74c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1ee74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ee750: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE750u;
    {
        const bool branch_taken_0x1ee750 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1ee750) {
            ctx->pc = 0x1EE76Cu;
            return;
        }
    }
    ctx->pc = 0x1EE758u;
    // 0x1ee758: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1ee758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1ee75c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE75Cu;
    {
        const bool branch_taken_0x1ee75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee75c) {
            ctx->pc = 0x1EE76Cu;
            return;
        }
    }
    ctx->pc = 0x1EE764u;
    // 0x1ee764: 0x807b134  j           func_1EC4D0
    ctx->pc = 0x1EE764u;
    ctx->pc = 0x1EC4D0u;
    FUN_001ec4d0_0x1ec4d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1EE76Cu;
}
