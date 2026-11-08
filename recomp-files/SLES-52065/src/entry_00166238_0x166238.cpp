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

// Function: entry_00166238
// Address: 0x166238 - 0x16626c
void entry_00166238_0x166238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166238_0x166238");
#endif

    ctx->pc = 0x166238u;

    // 0x166238: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x166238u;
    {
        const bool branch_taken_0x166238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166238) {
            ctx->pc = 0x166270u;
            return;
        }
    }
    ctx->pc = 0x166240u;
    // 0x166240: 0x8602022e  lh          $v0, 0x22E($s0)
    ctx->pc = 0x166240u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
    // 0x166244: 0xa6020226  sh          $v0, 0x226($s0)
    ctx->pc = 0x166244u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 2));
    // 0x166248: 0x86020220  lh          $v0, 0x220($s0)
    ctx->pc = 0x166248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x16624c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16624Cu;
    {
        const bool branch_taken_0x16624c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x166250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16624Cu;
        // 0x166250: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16624c) {
            ctx->pc = 0x16626Cu;
            return;
        }
    }
    ctx->pc = 0x166254u;
    // 0x166254: 0xa6030220  sh          $v1, 0x220($s0)
    ctx->pc = 0x166254u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x166258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16625c: 0x86030232  lh          $v1, 0x232($s0)
    ctx->pc = 0x16625cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x166260: 0xa6030222  sh          $v1, 0x222($s0)
    ctx->pc = 0x166260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 3));
    // 0x166264: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x166264u;
    {
        const bool branch_taken_0x166264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166264u;
        // 0x166268: 0xa6020224  sh          $v0, 0x224($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166264) {
            ctx->pc = 0x166270u;
            return;
        }
    }
    ctx->pc = 0x16626Cu;
}
