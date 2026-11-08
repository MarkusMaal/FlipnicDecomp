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

// Function: entry_001363ac
// Address: 0x1363ac - 0x1363c4
void entry_001363ac_0x1363ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001363ac_0x1363ac");
#endif

    ctx->pc = 0x1363acu;

    // 0x1363ac: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1363acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1363b0: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x1363b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1363b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1363B4u;
    {
        const bool branch_taken_0x1363b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1363b4) {
            ctx->pc = 0x1363C4u;
            return;
        }
    }
    ctx->pc = 0x1363BCu;
    // 0x1363bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1363BCu;
    {
        const bool branch_taken_0x1363bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1363C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363BCu;
        // 0x1363c0: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363bc) {
            ctx->pc = 0x1363CCu;
            return;
        }
    }
    ctx->pc = 0x1363C4u;
}
