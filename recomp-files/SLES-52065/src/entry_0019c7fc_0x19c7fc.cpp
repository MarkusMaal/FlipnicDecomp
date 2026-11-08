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

// Function: entry_0019c7fc
// Address: 0x19c7fc - 0x19c818
void entry_0019c7fc_0x19c7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c7fc_0x19c7fc");
#endif

    ctx->pc = 0x19c7fcu;

    // 0x19c7fc: 0x93868488  lbu         $a2, -0x7B78($gp)
    ctx->pc = 0x19c7fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x19c800: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C800u;
    {
        const bool branch_taken_0x19c800 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C800u;
        // 0x19c804: 0x3c03002b  lui         $v1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c800) {
            ctx->pc = 0x19C818u;
            return;
        }
    }
    ctx->pc = 0x19C808u;
    // 0x19c808: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x19c808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x19c80c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c810: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x19c810u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c814: 0x0  nop
    ctx->pc = 0x19c814u;
    // NOP
    ctx->pc = 0x19c818u;
}
