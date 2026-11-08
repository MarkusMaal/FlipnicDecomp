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

// Function: entry_001efcf0
// Address: 0x1efcf0 - 0x1efd24
void entry_001efcf0_0x1efcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efcf0_0x1efcf0");
#endif

    ctx->pc = 0x1efcf0u;

label_1efcf0:
    // 0x1efcf0: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1efcf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1efcf4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EFCF4u;
    {
        const bool branch_taken_0x1efcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCF4u;
        // 0x1efcf8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcf4) {
            ctx->pc = 0x1EFD24u;
            return;
        }
    }
    ctx->pc = 0x1EFCFCu;
    // 0x1efcfc: 0x24e3a3d8  addiu       $v1, $a3, -0x5C28
    ctx->pc = 0x1efcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943704));
    // 0x1efd00: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1efd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1efd04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1efd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efd08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1efd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1efd0c: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EFD0Cu;
    {
        const bool branch_taken_0x1efd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1EFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD0Cu;
        // 0x1efd10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd0c) {
            ctx->pc = 0x1EFCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1efcf0;
        }
    }
    ctx->pc = 0x1EFD14u;
    // 0x1efd14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1efd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1efd18: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1efd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1efd1c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1efd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1efd20: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1efd20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1efd24u;
}
