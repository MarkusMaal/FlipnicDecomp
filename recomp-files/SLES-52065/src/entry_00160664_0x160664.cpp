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

// Function: entry_00160664
// Address: 0x160664 - 0x1606a4
void entry_00160664_0x160664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160664_0x160664");
#endif

    ctx->pc = 0x160664u;

    // 0x160664: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x160664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160668: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x160668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16066c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16066cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x160670: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x160670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x160674: 0x2464003e  addiu       $a0, $v1, 0x3E
    ctx->pc = 0x160674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x160678: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x160678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16067c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x16067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x160680: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x160680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160684: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x160684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160688: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x160688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16068c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16068Cu;
    {
        const bool branch_taken_0x16068c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16068c) {
            ctx->pc = 0x1606A4u;
            return;
        }
    }
    ctx->pc = 0x160694u;
    // 0x160694: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x160694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x160698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16069c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16069Cu;
    {
        const bool branch_taken_0x16069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1606A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16069Cu;
        // 0x1606a0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16069c) {
            ctx->pc = 0x1606A8u;
            return;
        }
    }
    ctx->pc = 0x1606A4u;
}
