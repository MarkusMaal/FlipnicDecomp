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

// Function: entry_00141194
// Address: 0x141194 - 0x1411bc
void entry_00141194_0x141194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141194_0x141194");
#endif

    ctx->pc = 0x141194u;

    // 0x141194: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x141194u;
    {
        const bool branch_taken_0x141194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141194) {
            ctx->pc = 0x1411BCu;
            return;
        }
    }
    ctx->pc = 0x14119Cu;
    // 0x14119c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x14119cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1411a0: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x1411a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1411a4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1411a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1411a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1411a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1411ac: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x1411acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x1411b0: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x1411b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x1411b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1411B4u;
    {
        const bool branch_taken_0x1411b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411B4u;
        // 0x1411b8: 0xafb20120  sw          $s2, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411b4) {
            ctx->pc = 0x1411DCu;
            return;
        }
    }
    ctx->pc = 0x1411BCu;
}
