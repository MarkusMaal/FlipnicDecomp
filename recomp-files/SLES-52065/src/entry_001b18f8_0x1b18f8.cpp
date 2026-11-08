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

// Function: entry_001b18f8
// Address: 0x1b18f8 - 0x1b1944
void entry_001b18f8_0x1b18f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b18f8_0x1b18f8");
#endif

    ctx->pc = 0x1b18f8u;

    // 0x1b18f8: 0xa2400  sll         $a0, $t2, 16
    ctx->pc = 0x1b18f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1b18fc: 0xa2a00  sll         $a1, $t2, 8
    ctx->pc = 0x1b18fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1b1900: 0x873025  or          $a2, $a0, $a3
    ctx->pc = 0x1b1900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x1b1904: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b1908: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1b1908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1b190c: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1b190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1b1910: 0x1452825  or          $a1, $t2, $a1
    ctx->pc = 0x1b1910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x1b1914: 0xac8503d0  sw          $a1, 0x3D0($a0)
    ctx->pc = 0x1b1914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 976), GPR_U32(ctx, 5));
    // 0x1b1918: 0x28440004  slti        $a0, $v0, 0x4
    ctx->pc = 0x1b1918u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b191c: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B191Cu;
    {
        const bool branch_taken_0x1b191c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B191Cu;
        // 0x1b1920: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b191c) {
            ctx->pc = 0x1B18B4u;
            return;
        }
    }
    ctx->pc = 0x1B1924u;
    // 0x1b1924: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1b1924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1b1928: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B1928u;
    {
        const bool branch_taken_0x1b1928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1928u;
        // 0x1b192c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1928) {
            ctx->pc = 0x1B1984u;
            return;
        }
    }
    ctx->pc = 0x1B1930u;
    // 0x1b1930: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x1b1930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b1934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1934u;
    {
        const bool branch_taken_0x1b1934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1934) {
            ctx->pc = 0x1B1944u;
            return;
        }
    }
    ctx->pc = 0x1B193Cu;
    // 0x1b193c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B193Cu;
    {
        const bool branch_taken_0x1b193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b193c) {
            ctx->pc = 0x1B1980u;
            return;
        }
    }
    ctx->pc = 0x1B1944u;
}
