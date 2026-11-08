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

// Function: entry_001c2b44
// Address: 0x1c2b44 - 0x1c2b5c
void entry_001c2b44_0x1c2b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2b44_0x1c2b44");
#endif

    ctx->pc = 0x1c2b44u;

    // 0x1c2b44: 0x21a80  sll         $v1, $v0, 10
    ctx->pc = 0x1c2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1c2b48: 0x212bc  dsll32      $v0, $v0, 10
    ctx->pc = 0x1c2b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 10));
    // 0x1c2b4c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2B4Cu;
    {
        const bool branch_taken_0x1c2b4c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B4Cu;
        // 0x1c2b50: 0x212bf  dsra32      $v0, $v0, 10 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b4c) {
            ctx->pc = 0x1C2B5Cu;
            return;
        }
    }
    ctx->pc = 0x1C2B54u;
    // 0x1c2b54: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x1c2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1c2b58: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1c2b58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    ctx->pc = 0x1c2b5cu;
}
