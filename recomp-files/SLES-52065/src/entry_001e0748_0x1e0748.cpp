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

// Function: entry_001e0748
// Address: 0x1e0748 - 0x1e0790
void entry_001e0748_0x1e0748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0748_0x1e0748");
#endif

    ctx->pc = 0x1e0748u;

    // 0x1e0748: 0x26270060  addiu       $a3, $s1, 0x60
    ctx->pc = 0x1e0748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1e074c: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x1e074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1e0750: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1e0750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e0754: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x1e0754u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e0758: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e0758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e075c: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1e075cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1e0760: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1e0760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e0764: 0x90c90000  lbu         $t1, 0x0($a2)
    ctx->pc = 0x1e0764u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e0768: 0x1102002d  beq         $t0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1E0768u;
    {
        const bool branch_taken_0x1e0768 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0768u;
        // 0x1e076c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0768) {
            ctx->pc = 0x1E0820u;
            return;
        }
    }
    ctx->pc = 0x1E0770u;
    // 0x1e0770: 0x29020052  slti        $v0, $t0, 0x52
    ctx->pc = 0x1e0770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)82) ? 1 : 0);
    // 0x1e0774: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0774u;
    {
        const bool branch_taken_0x1e0774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0774u;
        // 0x1e0778: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0774) {
            ctx->pc = 0x1E0790u;
            return;
        }
    }
    ctx->pc = 0x1E077Cu;
    // 0x1e077c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1e077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1e0780: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0780u;
    {
        const bool branch_taken_0x1e0780 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0780) {
            ctx->pc = 0x1E0784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0780u;
            // 0x1e0784: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E07A0u;
            return;
        }
    }
    ctx->pc = 0x1E0788u;
    // 0x1e0788: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1E0788u;
    {
        const bool branch_taken_0x1e0788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0788u;
        // 0x1e078c: 0x8e220060  lw          $v0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0788) {
            ctx->pc = 0x1E0940u;
            return;
        }
    }
    ctx->pc = 0x1E0790u;
}
