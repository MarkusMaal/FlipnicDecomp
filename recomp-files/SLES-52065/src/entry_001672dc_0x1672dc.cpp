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

// Function: entry_001672dc
// Address: 0x1672dc - 0x167300
void entry_001672dc_0x1672dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001672dc_0x1672dc");
#endif

    ctx->pc = 0x1672dcu;

    // 0x1672dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1672dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1672e0: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1672E0u;
    {
        const bool branch_taken_0x1672e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1672E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672E0u;
        // 0x1672e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672e0) {
            ctx->pc = 0x167340u;
            return;
        }
    }
    ctx->pc = 0x1672E8u;
    // 0x1672e8: 0x1085000d  beq         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1672E8u;
    {
        const bool branch_taken_0x1672e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1672e8) {
            ctx->pc = 0x167320u;
            return;
        }
    }
    ctx->pc = 0x1672F0u;
    // 0x1672f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1672F0u;
    {
        const bool branch_taken_0x1672f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1672f0) {
            ctx->pc = 0x167300u;
            return;
        }
    }
    ctx->pc = 0x1672F8u;
    // 0x1672f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1672F8u;
    {
        const bool branch_taken_0x1672f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672F8u;
        // 0x1672fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672f8) {
            ctx->pc = 0x167364u;
            return;
        }
    }
    ctx->pc = 0x167300u;
}
