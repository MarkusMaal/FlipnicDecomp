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

// Function: entry_0011c038
// Address: 0x11c038 - 0x11c064
void entry_0011c038_0x11c038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c038_0x11c038");
#endif

    ctx->pc = 0x11c038u;

    // 0x11c038: 0x8e510050  lw          $s1, 0x50($s2)
    ctx->pc = 0x11c038u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x11c03c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c040: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C040u;
    {
        const bool branch_taken_0x11c040 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x11c040) {
            ctx->pc = 0x11C064u;
            return;
        }
    }
    ctx->pc = 0x11C048u;
    // 0x11c048: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x11c048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x11c04c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11c050: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11c050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11c054: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C054u;
    {
        const bool branch_taken_0x11c054 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C054u;
        // 0x11c058: 0x28843  sra         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c054) {
            ctx->pc = 0x11C064u;
            return;
        }
    }
    ctx->pc = 0x11C05Cu;
    // 0x11c05c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c060: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x11c060u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x11c064u;
}
