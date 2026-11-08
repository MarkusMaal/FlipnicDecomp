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

// Function: entry_0010b240
// Address: 0x10b240 - 0x10b260
void entry_0010b240_0x10b240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b240_0x10b240");
#endif

    ctx->pc = 0x10b240u;

    // 0x10b240: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10b240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10b244: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x10B244u;
    {
        const bool branch_taken_0x10b244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B244u;
        // 0x10b248: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b244) {
            ctx->pc = 0x10B278u;
            return;
        }
    }
    ctx->pc = 0x10B24Cu;
    // 0x10b24c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x10b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x10b250: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B250u;
    {
        const bool branch_taken_0x10b250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x10b250) {
            ctx->pc = 0x10B260u;
            return;
        }
    }
    ctx->pc = 0x10B258u;
    // 0x10b258: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10B258u;
    {
        const bool branch_taken_0x10b258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B258u;
        // 0x10b25c: 0xac8501d4  sw          $a1, 0x1D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b258) {
            ctx->pc = 0x10B28Cu;
            return;
        }
    }
    ctx->pc = 0x10B260u;
}
