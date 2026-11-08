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

// Function: entry_0012ea4c
// Address: 0x12ea4c - 0x12ea6c
void entry_0012ea4c_0x12ea4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ea4c_0x12ea4c");
#endif

    ctx->pc = 0x12ea4cu;

    // 0x12ea4c: 0x0  nop
    ctx->pc = 0x12ea4cu;
    // NOP
    // 0x12ea50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ea54: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x12ea54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12ea58: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x12ea58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x12ea5c: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x12ea5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x12ea60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12ea64: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12EA64u;
    {
        const bool branch_taken_0x12ea64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA64u;
        // 0x12ea68: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea64) {
            ctx->pc = 0x12EA04u;
            return;
        }
    }
    ctx->pc = 0x12EA6Cu;
}
