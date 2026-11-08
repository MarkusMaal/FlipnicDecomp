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

// Function: entry_0018fff4
// Address: 0x18fff4 - 0x19003c
void entry_0018fff4_0x18fff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fff4_0x18fff4");
#endif

    ctx->pc = 0x18fff4u;

    // 0x18fff4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x18fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x18fff8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18fff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x18fffc: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x18fffcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190000: 0x2463d3a0  addiu       $v1, $v1, -0x2C60
    ctx->pc = 0x190000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955936));
    // 0x190004: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x190004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x190008: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x190008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19000c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19000Cu;
    {
        const bool branch_taken_0x19000c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19000Cu;
        // 0x190010: 0x24a5d390  addiu       $a1, $a1, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19000c) {
            ctx->pc = 0x19003Cu;
            return;
        }
    }
    ctx->pc = 0x190014u;
    // 0x190014: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x190014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x190018: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x190018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19001c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x19001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x190020: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x190020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x190024: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x190024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x190028: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x190028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x19002c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x19002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x190030: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x190030u;
    {
        const bool branch_taken_0x190030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190030) {
            ctx->pc = 0x19003Cu;
            return;
        }
    }
    ctx->pc = 0x190038u;
    // 0x190038: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x190038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x19003cu;
}
