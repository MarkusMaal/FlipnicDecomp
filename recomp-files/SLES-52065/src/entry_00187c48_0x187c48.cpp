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

// Function: entry_00187c48
// Address: 0x187c48 - 0x187c74
void entry_00187c48_0x187c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187c48_0x187c48");
#endif

    ctx->pc = 0x187c48u;

    // 0x187c48: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x187c48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187c4c: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x187c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x187c50: 0x10a4000c  beq         $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x187C50u;
    {
        const bool branch_taken_0x187c50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x187C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C50u;
        // 0x187c54: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c50) {
            ctx->pc = 0x187C84u;
            return;
        }
    }
    ctx->pc = 0x187C58u;
    // 0x187c58: 0x10a4000a  beq         $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x187C58u;
    {
        const bool branch_taken_0x187c58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187c58) {
            ctx->pc = 0x187C84u;
            return;
        }
    }
    ctx->pc = 0x187C60u;
    // 0x187c60: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x187c64: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187C64u;
    {
        const bool branch_taken_0x187c64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187c64) {
            ctx->pc = 0x187C74u;
            return;
        }
    }
    ctx->pc = 0x187C6Cu;
    // 0x187c6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x187C6Cu;
    {
        const bool branch_taken_0x187c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c6c) {
            ctx->pc = 0x187C90u;
            return;
        }
    }
    ctx->pc = 0x187C74u;
}
