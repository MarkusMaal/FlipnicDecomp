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

// Function: entry_00134700
// Address: 0x134700 - 0x134718
void entry_00134700_0x134700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134700_0x134700");
#endif

    ctx->pc = 0x134700u;

    // 0x134700: 0x8fa203e8  lw          $v0, 0x3E8($sp)
    ctx->pc = 0x134700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
    // 0x134704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134704u;
    {
        const bool branch_taken_0x134704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134704u;
        // 0x134708: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134704) {
            ctx->pc = 0x134718u;
            return;
        }
    }
    ctx->pc = 0x13470Cu;
    // 0x13470c: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x13470cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
    // 0x134710: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x134710u;
    {
        const bool branch_taken_0x134710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134710u;
        // 0x134714: 0x26730080  addiu       $s3, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134710) {
            ctx->pc = 0x13471Cu;
            return;
        }
    }
    ctx->pc = 0x134718u;
}
