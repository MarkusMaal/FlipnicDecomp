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

// Function: entry_0013e8d4
// Address: 0x13e8d4 - 0x13e914
void entry_0013e8d4_0x13e8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e8d4_0x13e8d4");
#endif

    ctx->pc = 0x13e8d4u;

    // 0x13e8d4: 0x8e250178  lw          $a1, 0x178($s1)
    ctx->pc = 0x13e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x13e8d8: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x13E8D8u;
    {
        const bool branch_taken_0x13e8d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e8d8) {
            ctx->pc = 0x13E96Cu;
            return;
        }
    }
    ctx->pc = 0x13E8E0u;
    // 0x13e8e0: 0x8e24017c  lw          $a0, 0x17C($s1)
    ctx->pc = 0x13e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x13e8e4: 0x8e23016c  lw          $v1, 0x16C($s1)
    ctx->pc = 0x13e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x13e8e8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x13e8e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e8ec: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x13E8ECu;
    {
        const bool branch_taken_0x13e8ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e8ec) {
            ctx->pc = 0x13E96Cu;
            return;
        }
    }
    ctx->pc = 0x13E8F4u;
    // 0x13e8f4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x13e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13e8f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e8fc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x13e8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13e900: 0x80a40004  lb          $a0, 0x4($a1)
    ctx->pc = 0x13e900u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13e904: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x13E904u;
    {
        const bool branch_taken_0x13e904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e904) {
            ctx->pc = 0x13E96Cu;
            return;
        }
    }
    ctx->pc = 0x13E90Cu;
    // 0x13e90c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E90Cu;
    {
        const bool branch_taken_0x13e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e90c) {
            ctx->pc = 0x13E918u;
            return;
        }
    }
    ctx->pc = 0x13E914u;
}
