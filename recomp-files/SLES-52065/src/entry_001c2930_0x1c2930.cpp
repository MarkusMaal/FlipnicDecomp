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

// Function: entry_001c2930
// Address: 0x1c2930 - 0x1c2948
void entry_001c2930_0x1c2930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2930_0x1c2930");
#endif

    ctx->pc = 0x1c2930u;

    // 0x1c2930: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2934: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2938: 0x146200cd  bne         $v1, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x1C2938u;
    {
        const bool branch_taken_0x1c2938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2938u;
        // 0x1c293c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2938) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2940u;
    // 0x1c2940: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x1C2940u;
    {
        const bool branch_taken_0x1c2940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2940u;
        // 0x1c2944: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2940) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2948u;
}
