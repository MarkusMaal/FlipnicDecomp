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

// Function: entry_001e9230
// Address: 0x1e9230 - 0x1e9260
void entry_001e9230_0x1e9230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9230_0x1e9230");
#endif

    ctx->pc = 0x1e9230u;

    // 0x1e9230: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e9230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9234: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x1e9234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1e9238: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9238u;
    {
        const bool branch_taken_0x1e9238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9238) {
            ctx->pc = 0x1E9268u;
            return;
        }
    }
    ctx->pc = 0x1E9240u;
    // 0x1e9240: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1e9240u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9244: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1e9244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1e9248: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9248u;
    {
        const bool branch_taken_0x1e9248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9248u;
        // 0x1e924c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9248) {
            ctx->pc = 0x1E9260u;
            return;
        }
    }
    ctx->pc = 0x1E9250u;
    // 0x1e9250: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1e9250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1e9254: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9254u;
    {
        const bool branch_taken_0x1e9254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9254u;
        // 0x1e9258: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9254) {
            ctx->pc = 0x1E926Cu;
            return;
        }
    }
    ctx->pc = 0x1E925Cu;
    // 0x1e925c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1e9260u;
}
