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

// Function: entry_00138708
// Address: 0x138708 - 0x13873c
void entry_00138708_0x138708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138708_0x138708");
#endif

    ctx->pc = 0x138708u;

    // 0x138708: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x138708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x13870c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x138710: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x138710u;
    {
        const bool branch_taken_0x138710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x138710) {
            ctx->pc = 0x138748u;
            return;
        }
    }
    ctx->pc = 0x138718u;
    // 0x138718: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x138718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13871c: 0x38142  srl         $s0, $v1, 5
    ctx->pc = 0x13871cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x138720: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x138720u;
    {
        const bool branch_taken_0x138720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x138724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138720u;
        // 0x138724: 0x101140  sll         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138720) {
            ctx->pc = 0x138740u;
            return;
        }
    }
    ctx->pc = 0x138728u;
    // 0x138728: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x138728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x13872c: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x13872cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x138730: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x138730u;
    {
        const bool branch_taken_0x138730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138730) {
            ctx->pc = 0x13873Cu;
            return;
        }
    }
    ctx->pc = 0x138738u;
    // 0x138738: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x138738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x13873cu;
}
