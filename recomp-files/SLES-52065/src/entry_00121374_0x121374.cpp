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

// Function: entry_00121374
// Address: 0x121374 - 0x12138c
void entry_00121374_0x121374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121374_0x121374");
#endif

    ctx->pc = 0x121374u;

    // 0x121374: 0x0  nop
    ctx->pc = 0x121374u;
    // NOP
    // 0x121378: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x121378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x12137c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12137Cu;
    {
        const bool branch_taken_0x12137c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x121380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12137Cu;
        // 0x121380: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12137c) {
            ctx->pc = 0x12138Cu;
            return;
        }
    }
    ctx->pc = 0x121384u;
    // 0x121384: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x121384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x121388: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x121388u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x12138cu;
}
