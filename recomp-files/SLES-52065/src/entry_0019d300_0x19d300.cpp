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

// Function: entry_0019d300
// Address: 0x19d300 - 0x19d35c
void entry_0019d300_0x19d300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d300_0x19d300");
#endif

    ctx->pc = 0x19d300u;

    // 0x19d300: 0x8ca306b4  lw          $v1, 0x6B4($a1)
    ctx->pc = 0x19d300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1716)));
    // 0x19d304: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x19D304u;
    {
        const bool branch_taken_0x19d304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D304u;
        // 0x19d308: 0x24a606b4  addiu       $a2, $a1, 0x6B4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d304) {
            ctx->pc = 0x19D388u;
            return;
        }
    }
    ctx->pc = 0x19D30Cu;
    // 0x19d30c: 0x8ca40774  lw          $a0, 0x774($a1)
    ctx->pc = 0x19d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
    // 0x19d310: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19d310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19d314: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19d314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19d318: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d31c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x19d320: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19d320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x19d324: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x19D324u;
    {
        const bool branch_taken_0x19d324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D324u;
        // 0x19d328: 0x24a80774  addiu       $t0, $a1, 0x774 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d324) {
            ctx->pc = 0x19D388u;
            return;
        }
    }
    ctx->pc = 0x19D32Cu;
    // 0x19d32c: 0x8ca30734  lw          $v1, 0x734($a1)
    ctx->pc = 0x19d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1844)));
    // 0x19d330: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19d330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19d334: 0xaca30734  sw          $v1, 0x734($a1)
    ctx->pc = 0x19d334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1844), GPR_U32(ctx, 3));
    // 0x19d338: 0x8ca40734  lw          $a0, 0x734($a1)
    ctx->pc = 0x19d338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1844)));
    // 0x19d33c: 0x8ca707b4  lw          $a3, 0x7B4($a1)
    ctx->pc = 0x19d33cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1972)));
    // 0x19d340: 0x8ce5002c  lw          $a1, 0x2C($a3)
    ctx->pc = 0x19d340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x19d344: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x19d344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x19d348: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D348u;
    {
        const bool branch_taken_0x19d348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d348) {
            ctx->pc = 0x19D35Cu;
            return;
        }
    }
    ctx->pc = 0x19D350u;
    // 0x19d350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d354: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19D354u;
    {
        const bool branch_taken_0x19d354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D354u;
        // 0x19d358: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d354) {
            ctx->pc = 0x19D388u;
            return;
        }
    }
    ctx->pc = 0x19D35Cu;
}
