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

// Function: entry_00194a3c
// Address: 0x194a3c - 0x194a4c
void entry_00194a3c_0x194a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194a3c_0x194a3c");
#endif

    ctx->pc = 0x194a3cu;

    // 0x194a3c: 0x0  nop
    ctx->pc = 0x194a3cu;
    // NOP
    // 0x194a40: 0xae800334  sw          $zero, 0x334($s4)
    ctx->pc = 0x194a40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 0));
    // 0x194a44: 0x100004cb  b           . + 4 + (0x4CB << 2)
    ctx->pc = 0x194A44u;
    {
        const bool branch_taken_0x194a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A44u;
        // 0x194a48: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a44) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194A4Cu;
}
