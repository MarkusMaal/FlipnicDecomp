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

// Function: entry_001e9614
// Address: 0x1e9614 - 0x1e9640
void entry_001e9614_0x1e9614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9614_0x1e9614");
#endif

    ctx->pc = 0x1e9614u;

    // 0x1e9614: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e9614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e9618: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9618u;
    {
        const bool branch_taken_0x1e9618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9618u;
        // 0x1e961c: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9618) {
            ctx->pc = 0x1E9640u;
            return;
        }
    }
    ctx->pc = 0x1E9620u;
    // 0x1e9620: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x1e9620u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x1e9624: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1e9624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1e9628: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x1e9628u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e962c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1e962cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1e9630: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x1e9630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1e9634: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x1e9634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1e9638: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E9638u;
    {
        const bool branch_taken_0x1e9638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9638u;
        // 0x1e963c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9638) {
            ctx->pc = 0x1E9668u;
            return;
        }
    }
    ctx->pc = 0x1E9640u;
}
