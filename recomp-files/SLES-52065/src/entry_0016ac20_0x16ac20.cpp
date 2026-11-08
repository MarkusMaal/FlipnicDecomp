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

// Function: entry_0016ac20
// Address: 0x16ac20 - 0x16ac3c
void entry_0016ac20_0x16ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ac20_0x16ac20");
#endif

    ctx->pc = 0x16ac20u;

    // 0x16ac20: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AC20u;
    {
        const bool branch_taken_0x16ac20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC20u;
        // 0x16ac24: 0x200082a  slt         $at, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac20) {
            ctx->pc = 0x16AC3Cu;
            return;
        }
    }
    ctx->pc = 0x16AC28u;
    // 0x16ac28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ac2c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AC2Cu;
    {
        const bool branch_taken_0x16ac2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x16AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC2Cu;
        // 0x16ac30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac2c) {
            ctx->pc = 0x16AC3Cu;
            return;
        }
    }
    ctx->pc = 0x16AC34u;
    // 0x16ac34: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x16AC34u;
    {
        const bool branch_taken_0x16ac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC34u;
        // 0x16ac38: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac34) {
            ctx->pc = 0x16AEBCu;
            return;
        }
    }
    ctx->pc = 0x16AC3Cu;
}
