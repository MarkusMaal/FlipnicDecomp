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

// Function: entry_001117ec
// Address: 0x1117ec - 0x111828
void entry_001117ec_0x1117ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001117ec_0x1117ec");
#endif

    ctx->pc = 0x1117ecu;

    // 0x1117ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1117ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1117f0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1117f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1117f4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1117f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1117f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1117f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1117fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1117fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111800: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x111800u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111804: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x111804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x111808: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x111808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x11180c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x11180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x111810: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111810u;
    {
        const bool branch_taken_0x111810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111810) {
            ctx->pc = 0x111828u;
            return;
        }
    }
    ctx->pc = 0x111818u;
    // 0x111818: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x111818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x11181c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11181Cu;
    {
        const bool branch_taken_0x11181c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11181Cu;
        // 0x111820: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11181c) {
            ctx->pc = 0x111828u;
            return;
        }
    }
    ctx->pc = 0x111824u;
    // 0x111824: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x111824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x111828u;
}
