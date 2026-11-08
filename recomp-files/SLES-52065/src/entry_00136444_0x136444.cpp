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

// Function: entry_00136444
// Address: 0x136444 - 0x136464
void entry_00136444_0x136444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136444_0x136444");
#endif

    ctx->pc = 0x136444u;

    // 0x136444: 0x0  nop
    ctx->pc = 0x136444u;
    // NOP
    // 0x136448: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x136448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13644c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x13644cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x136450: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x136450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x136454: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x136454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x136458: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x136458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13645c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x13645Cu;
    {
        const bool branch_taken_0x13645c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13645Cu;
        // 0x136460: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13645c) {
            ctx->pc = 0x136434u;
            return;
        }
    }
    ctx->pc = 0x136464u;
}
