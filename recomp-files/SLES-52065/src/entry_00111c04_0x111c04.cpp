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

// Function: entry_00111c04
// Address: 0x111c04 - 0x111c34
void entry_00111c04_0x111c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111c04_0x111c04");
#endif

    ctx->pc = 0x111c04u;

    // 0x111c04: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x111c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x111c08: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x111c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x111c0c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x111c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111c10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111c14: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x111c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111c18: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x111c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111c1c: 0x90420224  lbu         $v0, 0x224($v0)
    ctx->pc = 0x111c1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x111c20: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x111c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x111c24: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x111C24u;
    {
        const bool branch_taken_0x111c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x111C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C24u;
        // 0x111c28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c24) {
            ctx->pc = 0x111C34u;
            return;
        }
    }
    ctx->pc = 0x111C2Cu;
    // 0x111c2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x111C2Cu;
    {
        const bool branch_taken_0x111c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c2c) {
            ctx->pc = 0x111C4Cu;
            return;
        }
    }
    ctx->pc = 0x111C34u;
}
