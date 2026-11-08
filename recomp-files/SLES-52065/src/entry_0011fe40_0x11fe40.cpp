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

// Function: entry_0011fe40
// Address: 0x11fe40 - 0x11fe60
void entry_0011fe40_0x11fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fe40_0x11fe40");
#endif

    ctx->pc = 0x11fe40u;

    // 0x11fe40: 0x14c200a9  bne         $a2, $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x11FE40u;
    {
        const bool branch_taken_0x11fe40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE40u;
        // 0x11fe44: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe40) {
            ctx->pc = 0x1200E8u;
            return;
        }
    }
    ctx->pc = 0x11FE48u;
    // 0x11fe48: 0x14e200a7  bne         $a3, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x11FE48u;
    {
        const bool branch_taken_0x11fe48 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fe48) {
            ctx->pc = 0x1200E8u;
            return;
        }
    }
    ctx->pc = 0x11FE50u;
    // 0x11fe50: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fe54: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11fe58: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x11FE58u;
    {
        const bool branch_taken_0x11fe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE58u;
        // 0x11fe5c: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe58) {
            ctx->pc = 0x1200E8u;
            return;
        }
    }
    ctx->pc = 0x11FE60u;
}
