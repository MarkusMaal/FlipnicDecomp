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

// Function: entry_001d54a0
// Address: 0x1d54a0 - 0x1d54d8
void entry_001d54a0_0x1d54a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d54a0_0x1d54a0");
#endif

    ctx->pc = 0x1d54a0u;

    // 0x1d54a0: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x1d54a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1d54a4: 0x26300248  addiu       $s0, $s1, 0x248
    ctx->pc = 0x1d54a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 584));
    // 0x1d54a8: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1d54a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d54ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d54acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d54b0: 0xf41821  addu        $v1, $a3, $s4
    ctx->pc = 0x1d54b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x1d54b4: 0x26a89f10  addiu       $t0, $s5, -0x60F0
    ctx->pc = 0x1d54b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942480));
    // 0x1d54b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d54b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d54bc: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x1d54bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d54c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d54c4: 0xa0a60200  sb          $a2, 0x200($a1)
    ctx->pc = 0x1d54c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 512), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d54c8: 0x44202a  slt         $a0, $v0, $a0
    ctx->pc = 0x1d54c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d54cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D54CCu;
    {
        const bool branch_taken_0x1d54cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54CCu;
        // 0x1d54d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54cc) {
            ctx->pc = 0x1D54E8u;
            return;
        }
    }
    ctx->pc = 0x1D54D4u;
    // 0x1d54d4: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x1d54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->pc = 0x1d54d8u;
}
