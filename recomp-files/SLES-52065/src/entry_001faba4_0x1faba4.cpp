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

// Function: entry_001faba4
// Address: 0x1faba4 - 0x1fabc8
void entry_001faba4_0x1faba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faba4_0x1faba4");
#endif

    ctx->pc = 0x1faba4u;

    // 0x1faba4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1FABA4u;
    {
        const bool branch_taken_0x1faba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABA4u;
        // 0x1faba8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faba4) {
            ctx->pc = 0x1FABECu;
            return;
        }
    }
    ctx->pc = 0x1FABACu;
    // 0x1fabac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fabacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fabb0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fabb4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1fabb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fabb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fabb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fabbc: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1FABBCu;
    {
        const bool branch_taken_0x1fabbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABBCu;
        // 0x1fabc0: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabbc) {
            ctx->pc = 0x1FAC70u;
            return;
        }
    }
    ctx->pc = 0x1FABC4u;
    // 0x1fabc4: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x1fabc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    ctx->pc = 0x1fabc8u;
}
