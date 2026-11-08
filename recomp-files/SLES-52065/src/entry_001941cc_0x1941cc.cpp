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

// Function: entry_001941cc
// Address: 0x1941cc - 0x1941fc
void entry_001941cc_0x1941cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001941cc_0x1941cc");
#endif

    ctx->pc = 0x1941ccu;

    // 0x1941cc: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1941ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1941d0: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1941d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1941d4: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1941d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1941d8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x1941d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1941dc: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1941dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1941e0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1941e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1941e4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1941e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1941e8: 0x90c6003f  lbu         $a2, 0x3F($a2)
    ctx->pc = 0x1941e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 63)));
    // 0x1941ec: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1941ECu;
    {
        const bool branch_taken_0x1941ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1941ec) {
            ctx->pc = 0x1941FCu;
            return;
        }
    }
    ctx->pc = 0x1941F4u;
    // 0x1941f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1941F4u;
    {
        const bool branch_taken_0x1941f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1941F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941F4u;
        // 0x1941f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941f4) {
            ctx->pc = 0x194224u;
            return;
        }
    }
    ctx->pc = 0x1941FCu;
}
