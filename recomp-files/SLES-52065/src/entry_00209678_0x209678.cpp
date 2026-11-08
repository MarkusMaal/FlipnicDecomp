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

// Function: entry_00209678
// Address: 0x209678 - 0x2096a4
void entry_00209678_0x209678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209678_0x209678");
#endif

    ctx->pc = 0x209678u;

    // 0x209678: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x209678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20967c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20967Cu;
    {
        const bool branch_taken_0x20967c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20967c) {
            ctx->pc = 0x209680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20967Cu;
            // 0x209680: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2096A4u;
            return;
        }
    }
    ctx->pc = 0x209684u;
    // 0x209684: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209688: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x209688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x20968c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20968cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x209690: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x209690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x209694: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x209694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x209698: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x209698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x20969c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x20969cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x2096a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2096a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x2096a4u;
}
