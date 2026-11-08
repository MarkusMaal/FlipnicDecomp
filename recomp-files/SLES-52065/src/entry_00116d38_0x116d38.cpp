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

// Function: entry_00116d38
// Address: 0x116d38 - 0x116d70
void entry_00116d38_0x116d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d38_0x116d38");
#endif

    ctx->pc = 0x116d38u;

    // 0x116d38: 0x94a50020  lhu         $a1, 0x20($a1)
    ctx->pc = 0x116d38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x116d3c: 0x14a20054  bne         $a1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x116D3Cu;
    {
        const bool branch_taken_0x116d3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x116D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D3Cu;
        // 0x116d40: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d3c) {
            ctx->pc = 0x116E90u;
            return;
        }
    }
    ctx->pc = 0x116D44u;
    // 0x116d44: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x116d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x116d48: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x116d48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x116d4c: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x116d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116d50: 0x8d260014  lw          $a2, 0x14($t1)
    ctx->pc = 0x116d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x116d54: 0x1242821  addu        $a1, $t1, $a0
    ctx->pc = 0x116d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x116d58: 0x94a50022  lhu         $a1, 0x22($a1)
    ctx->pc = 0x116d58u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x116d5c: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x116d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x116d60: 0xc54821  addu        $t1, $a2, $a1
    ctx->pc = 0x116d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x116d64: 0x2526000c  addiu       $a2, $t1, 0xC
    ctx->pc = 0x116d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x116d68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116D68u;
    {
        const bool branch_taken_0x116d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D68u;
        // 0x116d6c: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d68) {
            ctx->pc = 0x116D78u;
            return;
        }
    }
    ctx->pc = 0x116D70u;
}
