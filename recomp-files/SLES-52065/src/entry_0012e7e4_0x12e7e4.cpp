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

// Function: entry_0012e7e4
// Address: 0x12e7e4 - 0x12e80c
void entry_0012e7e4_0x12e7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e7e4_0x12e7e4");
#endif

    ctx->pc = 0x12e7e4u;

    // 0x12e7e4: 0x0  nop
    ctx->pc = 0x12e7e4u;
    // NOP
    // 0x12e7e8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x12e7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12e7ec: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x12e7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x12e7f0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x12e7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12e7f4: 0xb0182b  sltu        $v1, $a1, $s0
    ctx->pc = 0x12e7f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12e7f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12e7fc: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12E7FCu;
    {
        const bool branch_taken_0x12e7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7FCu;
        // 0x12e800: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7fc) {
            ctx->pc = 0x12E79Cu;
            return;
        }
    }
    ctx->pc = 0x12E804u;
    // 0x12e804: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x12E804u;
    {
        const bool branch_taken_0x12e804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e804) {
            ctx->pc = 0x12E8E0u;
            return;
        }
    }
    ctx->pc = 0x12E80Cu;
}
