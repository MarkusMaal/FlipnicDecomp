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

// Function: entry_00167444
// Address: 0x167444 - 0x16746c
void entry_00167444_0x167444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167444_0x167444");
#endif

    ctx->pc = 0x167444u;

    // 0x167444: 0x86030224  lh          $v1, 0x224($s0)
    ctx->pc = 0x167444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x167448: 0x240207f8  addiu       $v0, $zero, 0x7F8
    ctx->pc = 0x167448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x16744c: 0xa6030226  sh          $v1, 0x226($s0)
    ctx->pc = 0x16744cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 3));
    // 0x167450: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x167450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x167454: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x167454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x167458: 0xa6030222  sh          $v1, 0x222($s0)
    ctx->pc = 0x167458u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 3));
    // 0x16745c: 0x86030222  lh          $v1, 0x222($s0)
    ctx->pc = 0x16745cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x167460: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x167460u;
    {
        const bool branch_taken_0x167460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x167464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167460u;
        // 0x167464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167460) {
            ctx->pc = 0x16746Cu;
            return;
        }
    }
    ctx->pc = 0x167468u;
    // 0x167468: 0xa6020222  sh          $v0, 0x222($s0)
    ctx->pc = 0x167468u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x16746cu;
}
