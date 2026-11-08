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

// Function: entry_001a1214
// Address: 0x1a1214 - 0x1a1230
void entry_001a1214_0x1a1214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1214_0x1a1214");
#endif

    ctx->pc = 0x1a1214u;

    // 0x1a1214: 0x0  nop
    ctx->pc = 0x1a1214u;
    // NOP
    // 0x1a1218: 0x8e8206a8  lw          $v0, 0x6A8($s4)
    ctx->pc = 0x1a1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
    // 0x1a121c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A121Cu;
    {
        const bool branch_taken_0x1a121c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a121c) {
            ctx->pc = 0x1A1238u;
            return;
        }
    }
    ctx->pc = 0x1A1224u;
    // 0x1a1224: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x1a1224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1a1228: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1228u;
    {
        const bool branch_taken_0x1a1228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1228u;
        // 0x1a122c: 0xae8206a8  sw          $v0, 0x6A8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1228) {
            ctx->pc = 0x1A1238u;
            return;
        }
    }
    ctx->pc = 0x1A1230u;
}
