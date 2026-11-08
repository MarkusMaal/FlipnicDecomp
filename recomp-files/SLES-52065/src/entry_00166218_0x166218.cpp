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

// Function: entry_00166218
// Address: 0x166218 - 0x166238
void entry_00166218_0x166218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166218_0x166218");
#endif

    ctx->pc = 0x166218u;

    // 0x166218: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x166218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x16621c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16621Cu;
    {
        const bool branch_taken_0x16621c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16621c) {
            ctx->pc = 0x166270u;
            return;
        }
    }
    ctx->pc = 0x166224u;
    // 0x166224: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166224u;
    {
        const bool branch_taken_0x166224 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x166224) {
            ctx->pc = 0x166238u;
            return;
        }
    }
    ctx->pc = 0x16622Cu;
    // 0x16622c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x166230: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x166230u;
    {
        const bool branch_taken_0x166230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166230u;
        // 0x166234: 0xa6020226  sh          $v0, 0x226($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166230) {
            ctx->pc = 0x166270u;
            return;
        }
    }
    ctx->pc = 0x166238u;
}
