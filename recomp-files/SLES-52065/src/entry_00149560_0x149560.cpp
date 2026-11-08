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

// Function: entry_00149560
// Address: 0x149560 - 0x149590
void entry_00149560_0x149560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149560_0x149560");
#endif

    ctx->pc = 0x149560u;

    // 0x149560: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x149560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x149564: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x149564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x149568: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x149568u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x14956c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14956cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x149570: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x149570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x149574: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x149574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x149578: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x149578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14957c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14957cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149580: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x149580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x149584: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x149584u;
    {
        const bool branch_taken_0x149584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149584) {
            ctx->pc = 0x149590u;
            return;
        }
    }
    ctx->pc = 0x14958Cu;
    // 0x14958c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14958cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x149590u;
}
