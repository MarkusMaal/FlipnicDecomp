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

// Function: entry_002037fc
// Address: 0x2037fc - 0x203820
void entry_002037fc_0x2037fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002037fc_0x2037fc");
#endif

    ctx->pc = 0x2037fcu;

    // 0x2037fc: 0x3043ffdf  andi        $v1, $v0, 0xFFDF
    ctx->pc = 0x2037fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x203800: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x203800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x203804: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x203804u;
    {
        const bool branch_taken_0x203804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203804u;
        // 0x203808: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203804) {
            ctx->pc = 0x203858u;
            return;
        }
    }
    ctx->pc = 0x20380Cu;
    // 0x20380c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x20380cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x203810: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203810u;
    {
        const bool branch_taken_0x203810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203810u;
        // 0x203814: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203810) {
            ctx->pc = 0x203820u;
            return;
        }
    }
    ctx->pc = 0x203818u;
    // 0x203818: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x203818u;
    {
        const bool branch_taken_0x203818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203818u;
        // 0x20381c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203818) {
            ctx->pc = 0x20391Cu;
            return;
        }
    }
    ctx->pc = 0x203820u;
}
