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

// Function: entry_00111344
// Address: 0x111344 - 0x111368
void entry_00111344_0x111344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111344_0x111344");
#endif

    ctx->pc = 0x111344u;

    // 0x111344: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111344u;
    {
        const bool branch_taken_0x111344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111344) {
            ctx->pc = 0x111368u;
            return;
        }
    }
    ctx->pc = 0x11134Cu;
    // 0x11134c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111350: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x111350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x111354: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x111354u;
    {
        const bool branch_taken_0x111354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x111354) {
            ctx->pc = 0x111368u;
            return;
        }
    }
    ctx->pc = 0x11135Cu;
    // 0x11135c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x11135cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x111360: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x111360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x111364: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x111364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x111368u;
}
