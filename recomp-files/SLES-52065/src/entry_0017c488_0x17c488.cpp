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

// Function: entry_0017c488
// Address: 0x17c488 - 0x17c4ac
void entry_0017c488_0x17c488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c488_0x17c488");
#endif

    ctx->pc = 0x17c488u;

    // 0x17c488: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17c488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c48c: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x17c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x17c490: 0x90840023  lbu         $a0, 0x23($a0)
    ctx->pc = 0x17c490u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x17c494: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17c494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17c498: 0xa6040222  sh          $a0, 0x222($s0)
    ctx->pc = 0x17c498u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 4));
    // 0x17c49c: 0x86040222  lh          $a0, 0x222($s0)
    ctx->pc = 0x17c49cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x17c4a0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C4A0u;
    {
        const bool branch_taken_0x17c4a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4A0u;
        // 0x17c4a4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4a0) {
            ctx->pc = 0x17C4ACu;
            return;
        }
    }
    ctx->pc = 0x17C4A8u;
    // 0x17c4a8: 0xa6030222  sh          $v1, 0x222($s0)
    ctx->pc = 0x17c4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x17c4acu;
}
