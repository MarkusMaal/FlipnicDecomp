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

// Function: entry_001b7210
// Address: 0x1b7210 - 0x1b7264
void entry_001b7210_0x1b7210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7210_0x1b7210");
#endif

    ctx->pc = 0x1b7210u;

    // 0x1b7210: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x1b7210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1b7214: 0x18600024  blez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B7214u;
    {
        const bool branch_taken_0x1b7214 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1b7214) {
            ctx->pc = 0x1B72A8u;
            return;
        }
    }
    ctx->pc = 0x1B721Cu;
    // 0x1b721c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b721cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b7220: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x1b7220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x1b7224: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x1b7224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1b7228: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B7228u;
    {
        const bool branch_taken_0x1b7228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7228) {
            ctx->pc = 0x1B72A8u;
            return;
        }
    }
    ctx->pc = 0x1B7230u;
    // 0x1b7230: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x1b7230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1b7234: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b7234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b7238: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B7238u;
    {
        const bool branch_taken_0x1b7238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7238u;
        // 0x1b723c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7238) {
            ctx->pc = 0x1B729Cu;
            return;
        }
    }
    ctx->pc = 0x1B7240u;
    // 0x1b7240: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B7240u;
    {
        const bool branch_taken_0x1b7240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7240) {
            ctx->pc = 0x1B728Cu;
            return;
        }
    }
    ctx->pc = 0x1B7248u;
    // 0x1b7248: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b7248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b724c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B724Cu;
    {
        const bool branch_taken_0x1b724c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B724Cu;
        // 0x1b7250: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b724c) {
            ctx->pc = 0x1B7278u;
            return;
        }
    }
    ctx->pc = 0x1B7254u;
    // 0x1b7254: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7254u;
    {
        const bool branch_taken_0x1b7254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7254) {
            ctx->pc = 0x1B7264u;
            return;
        }
    }
    ctx->pc = 0x1B725Cu;
    // 0x1b725c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B725Cu;
    {
        const bool branch_taken_0x1b725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B725Cu;
        // 0x1b7260: 0x8e63005c  lw          $v1, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b725c) {
            ctx->pc = 0x1B72ACu;
            return;
        }
    }
    ctx->pc = 0x1B7264u;
}
