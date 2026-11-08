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

// Function: entry_0015ffec
// Address: 0x15ffec - 0x160020
void entry_0015ffec_0x15ffec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ffec_0x15ffec");
#endif

    ctx->pc = 0x15ffecu;

    // 0x15ffec: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x15ffecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15fff0: 0x91030234  lbu         $v1, 0x234($t0)
    ctx->pc = 0x15fff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 564)));
    // 0x15fff4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15FFF4u;
    {
        const bool branch_taken_0x15fff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fff4) {
            ctx->pc = 0x160020u;
            return;
        }
    }
    ctx->pc = 0x15FFFCu;
    // 0x15fffc: 0x85030228  lh          $v1, 0x228($t0)
    ctx->pc = 0x15fffcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x160000: 0x28610000  slti        $at, $v1, 0x0
    ctx->pc = 0x160000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x160004: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x160004u;
    {
        const bool branch_taken_0x160004 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160004u;
        // 0x160008: 0x25090228  addiu       $t1, $t0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160004) {
            ctx->pc = 0x160020u;
            return;
        }
    }
    ctx->pc = 0x16000Cu;
    // 0x16000c: 0xa5250000  sh          $a1, 0x0($t1)
    ctx->pc = 0x16000cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x160010: 0xa505022a  sh          $a1, 0x22A($t0)
    ctx->pc = 0x160010u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 554), (uint16_t)GPR_U32(ctx, 5));
    // 0x160014: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x160014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x160018: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x160018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16001c: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x16001cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    ctx->pc = 0x160020u;
}
