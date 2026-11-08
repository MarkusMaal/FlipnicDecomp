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

// Function: entry_001e95f0
// Address: 0x1e95f0 - 0x1e9614
void entry_001e95f0_0x1e95f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e95f0_0x1e95f0");
#endif

    ctx->pc = 0x1e95f0u;

    // 0x1e95f0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e95f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1e95f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E95F4u;
    {
        const bool branch_taken_0x1e95f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E95F4u;
        // 0x1e95f8: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e95f4) {
            ctx->pc = 0x1E9614u;
            return;
        }
    }
    ctx->pc = 0x1E95FCu;
    // 0x1e95fc: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x1e95fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1e9600: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x1e9600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1e9604: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1e9604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1e9608: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e9608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e960c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E960Cu;
    {
        const bool branch_taken_0x1e960c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E960Cu;
        // 0x1e9610: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e960c) {
            ctx->pc = 0x1E9668u;
            return;
        }
    }
    ctx->pc = 0x1E9614u;
}
