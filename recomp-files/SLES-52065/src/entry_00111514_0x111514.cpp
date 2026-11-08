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

// Function: entry_00111514
// Address: 0x111514 - 0x11155c
void entry_00111514_0x111514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111514_0x111514");
#endif

    ctx->pc = 0x111514u;

    // 0x111514: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x111514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x111518: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x111518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x11151c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x11151cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111524: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x111524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x111528: 0x8c492cd8  lw          $t1, 0x2CD8($v0)
    ctx->pc = 0x111528u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11152c: 0x91240224  lbu         $a0, 0x224($t1)
    ctx->pc = 0x11152cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 548)));
    // 0x111530: 0x416fc  dsll32      $v0, $a0, 27
    ctx->pc = 0x111530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 27));
    // 0x111534: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x111534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x111538: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111538u;
    {
        const bool branch_taken_0x111538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111538u;
        // 0x11153c: 0x416bc  dsll32      $v0, $a0, 26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111538) {
            ctx->pc = 0x11155Cu;
            return;
        }
    }
    ctx->pc = 0x111540u;
    // 0x111540: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x111540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x111544: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111544u;
    {
        const bool branch_taken_0x111544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111544) {
            ctx->pc = 0x11155Cu;
            return;
        }
    }
    ctx->pc = 0x11154Cu;
    // 0x11154c: 0x8d220228  lw          $v0, 0x228($t1)
    ctx->pc = 0x11154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 552)));
    // 0x111550: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x111550u;
    {
        const bool branch_taken_0x111550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111550u;
        // 0x111554: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111550) {
            ctx->pc = 0x11155Cu;
            return;
        }
    }
    ctx->pc = 0x111558u;
    // 0x111558: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x111558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x11155cu;
}
