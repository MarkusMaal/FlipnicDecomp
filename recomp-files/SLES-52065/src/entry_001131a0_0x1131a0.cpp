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

// Function: entry_001131a0
// Address: 0x1131a0 - 0x1131c8
void entry_001131a0_0x1131a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001131a0_0x1131a0");
#endif

    ctx->pc = 0x1131a0u;

    // 0x1131a0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1131a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1131a4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1131a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1131a8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1131A8u;
    {
        const bool branch_taken_0x1131a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1131a8) {
            ctx->pc = 0x11314Cu;
            return;
        }
    }
    ctx->pc = 0x1131B0u;
    // 0x1131b0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1131b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x1131b4: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1131b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x1131b8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1131b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1131bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1131bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1131c0: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x1131C0u;
    {
        const bool branch_taken_0x1131c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131C0u;
        // 0x1131c4: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131c0) {
            ctx->pc = 0x113600u;
            return;
        }
    }
    ctx->pc = 0x1131C8u;
}
