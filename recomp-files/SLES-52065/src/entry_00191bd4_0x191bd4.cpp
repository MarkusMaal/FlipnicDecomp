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

// Function: entry_00191bd4
// Address: 0x191bd4 - 0x191bf4
void entry_00191bd4_0x191bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191bd4_0x191bd4");
#endif

    ctx->pc = 0x191bd4u;

    // 0x191bd4: 0x0  nop
    ctx->pc = 0x191bd4u;
    // NOP
    // 0x191bd8: 0x24a4002c  addiu       $a0, $a1, 0x2C
    ctx->pc = 0x191bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    // 0x191bdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191be0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191be0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191be4: 0xac4504d0  sw          $a1, 0x4D0($v0)
    ctx->pc = 0x191be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
    // 0x191be8: 0x8f8885f4  lw          $t0, -0x7A0C($gp)
    ctx->pc = 0x191be8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191bec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x191BECu;
    {
        const bool branch_taken_0x191bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BECu;
        // 0x191bf0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bec) {
            ctx->pc = 0x191C54u;
            return;
        }
    }
    ctx->pc = 0x191BF4u;
}
